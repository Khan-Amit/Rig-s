#include "../include/RigController.h"

#include <chrono>
#include <iostream>
#include <thread>

RigController::RigController()
{
    running = false;
}

RigController::~RigController()
{
    stop();
}

bool RigController::initialize()
{
    logger.open("logs/rig.log");

    logger.info("Rig-S initializing...");

    if (!config.load("config/rig.conf"))
    {
        logger.error("Unable to load configuration.");
        return false;
    }

    startup();

    return true;
}

void RigController::startup()
{
    logger.info("Rig-S started.");
}

void RigController::shutdown()
{
    logger.info("Rig-S stopped.");
}

void RigController::run()
{
    running = true;

    while (running)
    {
        update();

        std::this_thread::sleep_for(
            std::chrono::milliseconds(1000));
    }
}

void RigController::stop()
{
    if (!running)
        return;

    running = false;

    shutdown();

    logger.close();
}

bool RigController::isRunning() const
{
    return running;
}

void RigController::update()
{
    logger.info("Rig-S heartbeat...");
}

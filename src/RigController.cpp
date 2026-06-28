#include "RigController.h"

#include <iostream>

RigController::RigController()
    : running(false),
      submittedShares(0),
      acceptedShares(0),
      rejectedShares(0),
      currentSpeed(0.0),
      currentTemperature(0.0)
{
}

RigController::~RigController()
{
    stop();
}

bool RigController::initialize()
{
    resetStatistics();

    std::cout << "RigController initialized." << std::endl;

    return true;
}

void RigController::run()
{
    if (running)
        return;

    running = true;

    writeLog("Controller started.");

    while (running)
    {
        updateStatistics();

        // Main controller loop.
        // Future updates:
        // - Read worker status
        // - Update dashboard
        // - Process events

        break;
    }
}

void RigController::stop()
{
    if (!running)
        return;

    running = false;

    writeLog("Controller stopped.");
}

bool RigController::isRunning() const
{
    return running;
}

bool RigController::loadConfiguration(const std::string& file)
{
    configurationFile = file;

    writeLog("Configuration loaded: " + file);

    return true;
}

bool RigController::startWorker(const std::string& executable)
{
    workerExecutable = executable;

    writeLog("Worker configured: " + executable);

    // Placeholder:
    // A future implementation could launch an external
    // process here using platform-specific APIs.

    return true;
}

void RigController::stopWorker()
{
    writeLog("Worker stopped.");
}

void RigController::updateStatistics()
{
    // Placeholder for updating controller statistics.
}

void RigController::writeLog(const std::string& message)
{
    std::cout << "[RigController] " << message << std::endl;
}

void RigController::resetStatistics()
{
    submittedShares = 0;
    acceptedShares = 0;
    rejectedShares = 0;

    currentSpeed = 0.0;
    currentTemperature = 0.0;
}

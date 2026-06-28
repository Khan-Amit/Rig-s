#include "../include/Kernel.h"

#include <iostream>

Kernel::Kernel()
{
}

bool Kernel::initialize()
{
    logger.open("logs/rig.log");

    logger.info("Kernel initializing...");

    statistics.start();

    systemInfo.print();

    logger.info(Version::fullVersion());

    return true;
}

void Kernel::run()
{
    logger.info("Kernel running...");
}

void Kernel::shutdown()
{
    logger.info("Kernel shutting down...");

    statistics.stop();

    logger.close();
}

#include "../include/Statistics.h"

Statistics::Statistics()
    : running(false)
{
}

void Statistics::start()
{
    startTime = std::chrono::steady_clock::now();
    running = true;
}

void Statistics::stop()
{
    running = false;
}

long Statistics::uptimeSeconds() const
{
    if (!running)
        return 0;

    auto now = std::chrono::steady_clock::now();

    return std::chrono::duration_cast<
        std::chrono::seconds>(now - startTime).count();
}

#include "../include/Timer.h"

Timer::Timer()
{
    start();
}

void Timer::start()
{
    startTime = std::chrono::steady_clock::now();
}

void Timer::reset()
{
    start();
}

long Timer::elapsedMilliseconds() const
{
    auto now = std::chrono::steady_clock::now();

    return std::chrono::duration_cast<
        std::chrono::milliseconds>(
            now - startTime).count();
}

long Timer::elapsedSeconds() const
{
    return elapsedMilliseconds() / 1000;
}

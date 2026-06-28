#ifndef STATISTICS_H
#define STATISTICS_H

#include <chrono>

class Statistics
{
public:
    Statistics();

    void start();
    void stop();

    long uptimeSeconds() const;

private:
    std::chrono::steady_clock::time_point startTime;
    bool running;
};

#endif // STATISTICS_H

#ifndef RIGCONTROLLER_H
#define RIGCONTROLLER_H

#include <atomic>
#include <string>

#include "Config.h"
#include "Logger.h"

class RigController
{
public:

    RigController();

    ~RigController();

    bool initialize();

    void run();

    void stop();

    bool isRunning() const;

private:

    std::atomic<bool> running;

    Config config;

    Logger logger;

    void startup();

    void shutdown();

    void update();
};

#endif // RIGCONTROLLER_H

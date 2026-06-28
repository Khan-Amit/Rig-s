#ifndef KERNEL_H
#define KERNEL_H

#include "Config.h"
#include "Logger.h"
#include "Statistics.h"
#include "Dashboard.h"
#include "Timer.h"
#include "StateManager.h"
#include "TaskScheduler.h"
#include "PluginManager.h"
#include "ModuleManager.h"
#include "EventManager.h"
#include "SystemInfo.h"
#include "Version.h"
#include "MessageBus.h"

class Kernel
{
public:

    Kernel();

    bool initialize();

    void run();

    void shutdown();

private:

    Config config;

    Logger logger;

    Statistics statistics;

    Dashboard dashboard;

    Timer timer;

    StateManager stateManager;

    TaskScheduler scheduler;

    PluginManager pluginManager;

    ModuleManager moduleManager;

    EventManager eventManager;

    SystemInfo systemInfo;

    MessageBus bus;
};

#endif // KERNEL_H

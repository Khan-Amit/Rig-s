#include "../include/Application.h"

Application::Application()
{
}

bool Application::start()
{
    return kernel.initialize();
}

void Application::run()
{
    kernel.run();
}

void Application::stop()
{
    kernel.shutdown();
}

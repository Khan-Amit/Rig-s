#ifndef APPLICATION_H
#define APPLICATION_H

#include "Kernel.h"

class Application
{
public:

    Application();

    bool start();

    void run();

    void stop();

private:

    Kernel kernel;
};

#endif // APPLICATION_H

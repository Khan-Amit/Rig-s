#include "../include/Application.h"

#include <iostream>

int main()
{
    Application app;

    if (!app.start())
    {
        std::cerr << "Application failed to start."
                  << std::endl;
        return 1;
    }

    app.run();

    app.stop();

    return 0;
}

#include <iostream>

#include "Application.h"

int main()
{
    std::cout << "==========================================" << std::endl;
    std::cout << "              Rig-S®" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "Initializing..." << std::endl;

    Application app;

    if (!app.Initialize())
    {
        std::cerr << "Initialization failed." << std::endl;
        return EXIT_FAILURE;
    }

    app.Run();

    app.Shutdown();

    std::cout << "Rig-S® terminated successfully." << std::endl;

    return EXIT_SUCCESS;
}

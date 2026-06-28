#include "../include/Kernel.h"

#include <iostream>

int main()
{
    Kernel kernel;

    if (!kernel.initialize())
    {
        std::cerr << "Kernel initialization failed."
                  << std::endl;

        return 1;
    }

    kernel.run();

    kernel.shutdown();

    return 0;
}

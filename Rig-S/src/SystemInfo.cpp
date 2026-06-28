#include "../include/SystemInfo.h"

#include <iostream>
#include <thread>

SystemInfo::SystemInfo()
{
}

std::string SystemInfo::operatingSystem() const
{
#ifdef _WIN32
    return "Windows";
#elif __linux__
    return "Linux";
#elif __ANDROID__
    return "Android";
#else
    return "Unknown";
#endif
}

std::string SystemInfo::architecture() const
{
#if defined(__x86_64__) || defined(_M_X64)
    return "x86_64";
#elif defined(__aarch64__)
    return "ARM64";
#elif defined(__arm__)
    return "ARM";
#else
    return "Unknown";
#endif
}

unsigned int SystemInfo::cpuCores() const
{
    return std::thread::hardware_concurrency();
}

void SystemInfo::print() const
{
    std::cout << "Operating System : "
              << operatingSystem() << std::endl;

    std::cout << "Architecture     : "
              << architecture() << std::endl;

    std::cout << "CPU Cores        : "
              << cpuCores() << std::endl;
}

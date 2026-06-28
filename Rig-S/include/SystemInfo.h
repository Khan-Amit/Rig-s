#ifndef SYSTEMINFO_H
#define SYSTEMINFO_H

#include <string>

class SystemInfo
{
public:

    SystemInfo();

    std::string operatingSystem() const;

    std::string architecture() const;

    unsigned int cpuCores() const;

    void print() const;
};

#endif // SYSTEMINFO_H

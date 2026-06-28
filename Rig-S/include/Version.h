#ifndef VERSION_H
#define VERSION_H

#include <string>

class Version
{
public:

    static std::string name();

    static std::string version();

    static std::string build();

    static std::string fullVersion();
};

#endif // VERSION_H

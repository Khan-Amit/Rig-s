#include "../include/Version.h"

std::string Version::name()
{
    return "Rig-S";
}

std::string Version::version()
{
    return "0.1.0 Alpha";
}

std::string Version::build()
{
    return "Build 001";
}

std::string Version::fullVersion()
{
    return name() + " " +
           version() +
           " (" + build() + ")";
}

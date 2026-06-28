#include "../include/Settings.h"

#include <fstream>

Settings::Settings()
{
    theme = "dark";
    refreshRate = 1000;
}

bool Settings::load(const std::string& filename)
{
    std::ifstream file(filename);

    if (!file.is_open())
        return false;

    // Placeholder:
    // Read settings from file.

    return true;
}

bool Settings::save(const std::string& filename)
{
    std::ofstream file(filename);

    if (!file.is_open())
        return false;

    file << "theme=" << theme << std::endl;
    file << "refresh=" << refreshRate << std::endl;

    return true;
}

void Settings::setTheme(const std::string& value)
{
    theme = value;
}

std::string Settings::getTheme() const
{
    return theme;
}

void Settings::setRefreshRate(int value)
{
    refreshRate = value;
}

int Settings::getRefreshRate() const
{
    return refreshRate;
}

#include "../include/ModuleManager.h"

#include <algorithm>

ModuleManager::ModuleManager()
{
}

void ModuleManager::registerModule(const std::string& name)
{
    if (!hasModule(name))
    {
        modules.push_back(name);
    }
}

bool ModuleManager::hasModule(const std::string& name) const
{
    return std::find(
        modules.begin(),
        modules.end(),
        name) != modules.end();
}

void ModuleManager::removeModule(const std::string& name)
{
    modules.erase(
        std::remove(
            modules.begin(),
            modules.end(),
            name),
        modules.end());
}

void ModuleManager::clearModules()
{
    modules.clear();
}

std::vector<std::string> ModuleManager::getModules() const
{
    return modules;
}

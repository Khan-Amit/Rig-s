#include "../include/PluginManager.h"

#include <algorithm>

PluginManager::PluginManager()
{
}

bool PluginManager::loadPlugin(const std::string& name)
{
    if (isLoaded(name))
        return false;

    loadedPlugins.push_back(name);
    return true;
}

bool PluginManager::unloadPlugin(const std::string& name)
{
    auto it = std::find(
        loadedPlugins.begin(),
        loadedPlugins.end(),
        name);

    if (it == loadedPlugins.end())
        return false;

    loadedPlugins.erase(it);

    return true;
}

bool PluginManager::isLoaded(const std::string& name) const
{
    return std::find(
        loadedPlugins.begin(),
        loadedPlugins.end(),
        name) != loadedPlugins.end();
}

std::vector<std::string> PluginManager::getPlugins() const
{
    return loadedPlugins;
}

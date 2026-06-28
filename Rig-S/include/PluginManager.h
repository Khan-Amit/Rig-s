#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H

#include <string>
#include <vector>

class PluginManager
{
public:

    PluginManager();

    bool loadPlugin(const std::string& name);

    bool unloadPlugin(const std::string& name);

    bool isLoaded(const std::string& name) const;

    std::vector<std::string> getPlugins() const;

private:

    std::vector<std::string> loadedPlugins;
};

#endif // PLUGINMANAGER_H

#ifndef MODULEMANAGER_H
#define MODULEMANAGER_H

#include <string>
#include <vector>

class ModuleManager
{
public:

    ModuleManager();

    void registerModule(const std::string& name);

    bool hasModule(const std::string& name) const;

    void removeModule(const std::string& name);

    void clearModules();

    std::vector<std::string> getModules() const;

private:

    std::vector<std::string> modules;
};

#endif // MODULEMANAGER_H

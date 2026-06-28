#include "Configuration.h"

#include <fstream>

Configuration::Configuration()
    : m_ProjectName("Rig-S"),
      m_Version("0.1.0-alpha"),
      m_Theme("Maroon"),
      m_LogLevel("Info")
{
}

Configuration::~Configuration()
{
}

bool Configuration::Load()
{
    std::ifstream file("config.cfg");

    if (!file.is_open())
    {
        return false;
    }

    std::getline(file, m_ProjectName);
    std::getline(file, m_Version);
    std::getline(file, m_Theme);
    std::getline(file, m_LogLevel);

    file.close();

    return true;
}

bool Configuration::Save()
{
    std::ofstream file("config.cfg");

    if (!file.is_open())
    {
        return false;
    }

    file << m_ProjectName << '\n';
    file << m_Version << '\n';
    file << m_Theme << '\n';
    file << m_LogLevel << '\n';

    file.close();

    return true;
}

void Configuration::SetProjectName(const std::string& name)
{
    m_ProjectName = name;
}

void Configuration::SetVersion(const std::string& version)
{
    m_Version = version;
}

void Configuration::SetTheme(const std::string& theme)
{
    m_Theme = theme;
}

void Configuration::SetLogLevel(const std::string& level)
{
    m_LogLevel = level;
}

std::string Configuration::GetProjectName() const
{
    return m_ProjectName;
}

std::string Configuration::GetVersion() const
{
    return m_Version;
}

std::string Configuration::GetTheme() const
{
    return m_Theme;
}

std::string Configuration::GetLogLevel() const
{
    return m_LogLevel;
}

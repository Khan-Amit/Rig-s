#ifndef RIGS_CONFIGURATION_H
#define RIGS_CONFIGURATION_H

#include <string>

class Configuration
{
public:

    Configuration();
    ~Configuration();

    bool Load();
    bool Save();

    void SetProjectName(const std::string& name);
    void SetVersion(const std::string& version);

    void SetTheme(const std::string& theme);
    void SetLogLevel(const std::string& level);

    std::string GetProjectName() const;
    std::string GetVersion() const;

    std::string GetTheme() const;
    std::string GetLogLevel() const;

private:

    std::string m_ProjectName;
    std::string m_Version;

    std::string m_Theme;
    std::string m_LogLevel;
};

#endif // RIGS_CONFIGURATION_H

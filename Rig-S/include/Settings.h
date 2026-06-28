#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

class Settings
{
public:
    Settings();

    bool load(const std::string& filename);
    bool save(const std::string& filename);

    void setTheme(const std::string& value);
    std::string getTheme() const;

    void setRefreshRate(int value);
    int getRefreshRate() const;

private:
    std::string theme;
    int refreshRate;
};

#endif // SETTINGS_H

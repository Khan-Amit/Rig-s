#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <string>

class Dashboard
{
public:

    Dashboard();

    bool initialize(const std::string& filename);

    void update(
        double speed,
        double temperature,
        unsigned long submitted,
        unsigned long accepted,
        unsigned long rejected,
        long uptime);

private:

    std::string dashboardFile;
};

#endif // DASHBOARD_H

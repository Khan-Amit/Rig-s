#include "../include/Dashboard.h"

#include <fstream>

Dashboard::Dashboard()
{
}

bool Dashboard::initialize(const std::string& filename)
{
    dashboardFile = filename;
    return true;
}

void Dashboard::update(
    double speed,
    double temperature,
    unsigned long submitted,
    unsigned long accepted,
    unsigned long rejected,
    long uptime)
{
    std::ofstream file(dashboardFile);

    if (!file.is_open())
        return;

    file << "{\n";
    file << "  \"speed\": " << speed << ",\n";
    file << "  \"temperature\": " << temperature << ",\n";
    file << "  \"submitted\": " << submitted << ",\n";
    file << "  \"accepted\": " << accepted << ",\n";
    file << "  \"rejected\": " << rejected << ",\n";
    file << "  \"uptime\": " << uptime << "\n";
    file << "}\n";

    file.close();
}

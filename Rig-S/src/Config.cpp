#include "../include/Config.h"

#include <fstream>
#include <iostream>

Config::Config()
{
    wallet = "";
    pool = "";
    workerName = "Rig-S";
}

bool Config::load(const std::string& filename)
{
    std::ifstream file(filename);

    if (!file.is_open())
    {
        std::cout << "Unable to open configuration file."
                  << std::endl;

        return false;
    }

    std::string line;

    while (std::getline(file, line))
    {
        if (line.find("wallet=") == 0)
        {
            wallet = line.substr(7);
        }
        else if (line.find("pool=") == 0)
        {
            pool = line.substr(5);
        }
        else if (line.find("worker=") == 0)
        {
            workerName = line.substr(7);
        }
    }

    file.close();

    return true;
}

std::string Config::getWallet() const
{
    return wallet;
}

std::string Config::getPool() const
{
    return pool;
}

std::string Config::getWorkerName() const
{
    return workerName;
}

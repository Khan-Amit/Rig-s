#ifndef CONFIG_H
#define CONFIG_H

#include <string>

class Config
{
public:
    Config();

    bool load(const std::string& filename);

    std::string getWallet() const;
    std::string getPool() const;
    std::string getWorkerName() const;

private:
    std::string wallet;
    std::string pool;
    std::string workerName;
};

#endif // CONFIG_H

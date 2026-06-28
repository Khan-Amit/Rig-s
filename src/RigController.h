#ifndef RIG_CONTROLLER_H
#define RIG_CONTROLLER_H

#include <string>
#include <atomic>

class RigController
{
public:

    RigController();
    ~RigController();

    bool initialize();

    void run();

    void stop();

    bool isRunning() const;

    bool loadConfiguration(const std::string& file);

    bool startWorker(const std::string& executable);

    void stopWorker();

    void updateStatistics();

    void writeLog(const std::string& message);

private:

    std::atomic<bool> running;

    std::string workerExecutable;

    std::string configurationFile;

    std::string walletAddress;

    std::string selectedPool;

    unsigned long submittedShares;

    unsigned long acceptedShares;

    unsigned long rejectedShares;

    double currentSpeed;

    double currentTemperature;

    void resetStatistics();
};

#endif // RIG_CONTROLLER_H

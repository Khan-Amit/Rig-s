#ifndef RIGS_LOGGER_H
#define RIGS_LOGGER_H

#include <fstream>
#include <string>

class Logger
{
public:

    Logger();
    ~Logger();

    bool Initialize(const std::string& filename = "Rig-S.log");

    void Shutdown();

    void Write(const std::string& message);

    void Info(const std::string& message);

    void Warning(const std::string& message);

    void Error(const std::string& message);

private:

    std::ofstream m_LogFile;

    bool m_IsInitialized;

    std::string GetTimeStamp() const;
};

#endif // RIGS_LOGGER_H

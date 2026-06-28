#include "../include/Logger.h"

#include <ctime>
#include <iostream>

Logger::Logger()
{
}

Logger::~Logger()
{
    close();
}

bool Logger::open(const std::string& filename)
{
    logFile.open(filename);

    return logFile.is_open();
}

void Logger::close()
{
    if (logFile.is_open())
        logFile.close();
}

void Logger::info(const std::string& message)
{
    write("INFO", message);
}

void Logger::warning(const std::string& message)
{
    write("WARNING", message);
}

void Logger::error(const std::string& message)
{
    write("ERROR", message);
}

void Logger::write(const std::string& level,
                   const std::string& message)
{
    std::time_t now = std::time(nullptr);

    std::cout
        << "[" << level << "] "
        << std::ctime(&now)
        << " : "
        << message
        << std::endl;

    if (logFile.is_open())
    {
        logFile
            << "[" << level << "] "
            << std::ctime(&now)
            << " : "
            << message
            << std::endl;
    }
}

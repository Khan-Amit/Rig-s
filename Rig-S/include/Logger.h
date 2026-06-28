#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>

class Logger
{
public:
    Logger();
    ~Logger();

    bool open(const std::string& filename);
    void close();

    void info(const std::string& message);
    void warning(const std::string& message);
    void error(const std::string& message);

private:
    std::ofstream logFile;

    void write(const std::string& level,
               const std::string& message);
};

#endif // LOGGER_H

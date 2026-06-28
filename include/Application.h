#ifndef RIGS_APPLICATION_H
#define RIGS_APPLICATION_H

#include <string>

class Application
{
public:

    Application();
    ~Application();

    bool Initialize();

    void Run();

    void Shutdown();

    std::string GetVersion() const;

private:

    bool m_IsRunning;

    std::string m_ProjectName;

    std::string m_Version;
};

#endif // RIGS_APPLICATION_H

#include "Application.h"

#include <iostream>

Application::Application()
    : m_IsRunning(false),
      m_ProjectName("Rig-S"),
      m_Version("0.1.0-alpha")
{
}

Application::~Application()
{
}

bool Application::Initialize()
{
    std::cout << std::endl;
    std::cout << "Project : " << m_ProjectName << std::endl;
    std::cout << "Version : " << m_Version << std::endl;
    std::cout << "Status  : Initializing..." << std::endl;

    m_IsRunning = true;

    return true;
}

void Application::Run()
{
    std::cout << std::endl;
    std::cout << "Rig-S is now running." << std::endl;
    std::cout << "Waiting for modules..." << std::endl;
}

void Application::Shutdown()
{
    if (!m_IsRunning)
        return;

    std::cout << std::endl;
    std::cout << "Shutting down Rig-S..." << std::endl;

    m_IsRunning = false;

    std::cout << "Shutdown complete." << std::endl;
}

std::string Application::GetVersion() const
{
    return m_Version;
}

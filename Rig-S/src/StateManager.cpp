#include "../include/StateManager.h"

StateManager::StateManager()
{
    currentState = ApplicationState::Stopped;
}

void StateManager::setState(ApplicationState state)
{
    currentState = state;
}

ApplicationState StateManager::getState() const
{
    return currentState;
}

bool StateManager::isRunning() const
{
    return currentState == ApplicationState::Running;
}

#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include "ApplicationState.h"

class StateManager
{
public:

    StateManager();

    void setState(ApplicationState state);

    ApplicationState getState() const;

    bool isRunning() const;

private:

    ApplicationState currentState;
};

#endif // STATEMANAGER_H

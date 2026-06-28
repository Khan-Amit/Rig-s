#ifndef APPLICATIONSTATE_H
#define APPLICATIONSTATE_H

enum class ApplicationState
{
    Starting,
    Running,
    Paused,
    Stopping,
    Stopped,
    Error
};

#endif // APPLICATIONSTATE_H

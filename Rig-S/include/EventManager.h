#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <string>
#include <vector>

class EventManager
{
public:

    EventManager();

    void addEvent(const std::string& event);

    std::string latestEvent() const;

    std::vector<std::string> getEvents() const;

    void clear();

private:

    std::vector<std::string> events;
};

#endif // EVENTMANAGER_H

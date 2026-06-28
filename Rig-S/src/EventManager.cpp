#include "../include/EventManager.h"

EventManager::EventManager()
{
}

void EventManager::addEvent(const std::string& event)
{
    events.push_back(event);
}

std::string EventManager::latestEvent() const
{
    if(events.empty())
        return "No Events";

    return events.back();
}

std::vector<std::string> EventManager::getEvents() const
{
    return events;
}

void EventManager::clear()
{
    events.clear();
}

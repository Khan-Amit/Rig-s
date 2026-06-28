#include "../include/MessageBus.h"

MessageBus::MessageBus()
{
}

void MessageBus::send(const std::string& message)
{
    messages.push(message);
}

bool MessageBus::hasMessage() const
{
    return !messages.empty();
}

std::string MessageBus::receive()
{
    if(messages.empty())
        return "";

    std::string message = messages.front();

    messages.pop();

    return message;
}

void MessageBus::clear()
{
    while(!messages.empty())
    {
        messages.pop();
    }
}

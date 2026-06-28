#ifndef MESSAGEBUS_H
#define MESSAGEBUS_H

#include <string>
#include <queue>

class MessageBus
{
public:

    MessageBus();

    void send(const std::string& message);

    bool hasMessage() const;

    std::string receive();

    void clear();

private:

    std::queue<std::string> messages;
};

#endif // MESSAGEBUS_H

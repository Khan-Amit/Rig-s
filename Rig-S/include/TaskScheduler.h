#ifndef TASKSCHEDULER_H
#define TASKSCHEDULER_H

#include <functional>
#include <vector>

class TaskScheduler
{
public:

    using Task = std::function<void()>;

    TaskScheduler();

    void addTask(Task task);

    void execute();

    void clear();

    unsigned int taskCount() const;

private:

    std::vector<Task> tasks;
};

#endif // TASKSCHEDULER_H

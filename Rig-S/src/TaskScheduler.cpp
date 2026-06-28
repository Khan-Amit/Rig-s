#include "../include/TaskScheduler.h"

TaskScheduler::TaskScheduler()
{
}

void TaskScheduler::addTask(Task task)
{
    tasks.push_back(task);
}

void TaskScheduler::execute()
{
    for (auto& task : tasks)
    {
        task();
    }
}

void TaskScheduler::clear()
{
    tasks.clear();
}

unsigned int TaskScheduler::taskCount() const
{
    return static_cast<unsigned int>(tasks.size());
}

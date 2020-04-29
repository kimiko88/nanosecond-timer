#ifndef TIMER_H_
#define TIMER_H_

#include <ctime>
#include <chrono>

class NanoTimer
{

public:
    typedef std::chrono::high_resolution_clock clock_;
    typedef std::chrono::time_point<clock_> nanosec;

    inline static uint64_t elapsed(nanosec e, nanosec s)
    {
        return std::chrono::duration_cast<std::chrono::nanoseconds>(e - s).count();
    }
};

#endif
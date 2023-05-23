#include "Log.hpp"
#include "iostream"

namespace Core
{

    void Log::Init()
    {
    }

    void Log::CoreLog(const char *message, LogLevel level)
    {
        const char *level_msg[4] = {"INFO", "WARN", "ERROR", "FATAL"};
        printf("[CORE %s]: %s\n", level_msg[level], message);
    }

    void Log::UserLog(const char *message, LogLevel level)
    {
        const char *level_msg[4] = {"INFO", "WARN", "ERROR", "FATAL"};
        printf("[USER %s]: %s\n", level_msg[level], message);
    }
    void Log::SpaceLog()
    {
        printf("\n");
    }
}

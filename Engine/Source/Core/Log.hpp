#pragma once

#include "Core.hpp"

namespace Core
{
    class CORE_API Log
    {
    public:
        enum LogLevel
        {
            INFO = 0,
            WARN = 1,
            ERROR = 2,
            FATAL = 3,
        };

        static void Init();

        static void CoreLog(const char *message, LogLevel level);
        static void UserLog(const char *message, LogLevel level);
        static void SpaceLog();
    };
}

#ifdef CORE_DIST
#define CAPI_SPACE_LOG()
#define CAPI_CORE_INFO(message)
#define CAPI_CORE_WARN(message)
#define CAPI_CORE_ERROR(message)
#define CAPI_CORE_FATAL(message)
#define CAPI_INFO(message)
#define CAPI_WARN(message)
#define CAPI_ERROR(message)
#define CAPI_FATAL(message)
#else
// Core log macros
#define CAPI_SPACE_LOG() Core::Log::SpaceLog()
#define CAPI_CORE_INFO(message) Core::Log::CoreLog(message, Core::Log::LogLevel::INFO)
#define CAPI_CORE_WARN(message) Core::Log::CoreLog(message, Core::Log::LogLevel::WARN)
#define CAPI_CORE_ERROR(message) Core::Log::CoreLog(message, Core::Log::LogLevel::ERROR)
#define CAPI_CORE_FATAL(message) Core::Log::CoreLog(message, Core::Log::LogLevel::FATAL)

// Client log macros
#define CAPI_INFO(message) Core::Log::UserLog(message, Core::Log::LogLevel::INFO)
#define CAPI_WARN(message) Core::Log::UserLog(message, Core::Log::LogLevel::WARN)
#define CAPI_ERROR(message) Core::Log::UserLog(message, Core::Log::LogLevel::ERROR)
#define CAPI_FATAL(message) Core::Log::UserLog(message, Core::Log::LogLevel::FATAL)

#endif
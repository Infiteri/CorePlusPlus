#pragma once

#include "Core.hpp"

namespace Core
{

    class CORE_API Application
    {
    public:
        Application();
        ~Application();

        void Run();

        void Init();
    };

    Application *CreateApplication();
}
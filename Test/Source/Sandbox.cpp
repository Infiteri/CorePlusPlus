#include <CoreImports.hpp>

class Sandbox : public Core::Application
{

public:
    void Run()
    {
        while (true)
        {
        }
    }

    void Init()
    {

        CAPI_CORE_FATAL("Hello World");
        CAPI_CORE_ERROR("Hello World");
        CAPI_CORE_WARN("Hello World");
        CAPI_CORE_INFO("Hello World");

        CAPI_SPACE_LOG();

        CAPI_FATAL("Hello World");
        CAPI_ERROR("Hello World");
        CAPI_WARN("Hello World");
        CAPI_INFO("Hello World");
    }
};

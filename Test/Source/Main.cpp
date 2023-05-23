#include <CoreImports.hpp>
#include <Sandbox.cpp>

int main(int argc, char const *argv[])
{
    Core::Log::Init();

    // Setup application
    Sandbox *sandbox = new Sandbox();
    sandbox->Init();
    sandbox->Run();
    delete sandbox;

    return 0;
}

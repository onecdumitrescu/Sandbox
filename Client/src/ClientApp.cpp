#include <Engine.hpp>

class Client : public Engine::Application
{
public:
    Client()
    {

    }

    ~Client()
    {

    }
};

Engine::Application* Engine::CreateApplication()
{
    return new Client();
}
#pragma once

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
    Engine::Log::Init();
    NG_CORE_WARN("Engine Initialized!");
    NG_INFO("Client Initialized!");

    auto app = Engine::CreateApplication();
    app->Run();
    delete app;
}
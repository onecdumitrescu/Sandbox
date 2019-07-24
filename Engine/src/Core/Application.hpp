#pragma once

#include "Core.hpp"
#include "Window.hpp"
#include "Events/Event.hpp"
#include "Events/ApplicationEvent.hpp"

namespace Engine {

    class NG_API Application {
    public:
        Application();
        virtual ~Application() = default;

        void Run();

        void OnEvent(Event &e);

        inline Window& GetWindow() { return *m_Window; }

        inline static Application& Get() { return *s_Instance; }

    private:
        bool OnWindowClose(WindowCloseEvent& e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;

    private:
        static Application* s_Instance;
    };

    Application* CreateApplication();
}

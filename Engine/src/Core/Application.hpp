#pragma once

#include "Core.hpp"

namespace Engine {

    class NG_API Application {
    public:
        Application();
        virtual ~Application() = default;

        void Run();

        inline static Application& Get() { return *s_Instance; }

    private:
        bool m_Running = true;

    private:
        static Application* s_Instance;
    };

    Application* CreateApplication();
}

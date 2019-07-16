#include "ngpch.hpp"
#include "Application.hpp"

#include "Log.hpp"

namespace Engine {

    Application* Application::s_Instance = nullptr;

    Application::Application()
    {
        NG_CORE_ASSERT(!s_Instance, "Application already exists!");
        s_Instance = this;
    }

    void Application::Run()
    {
        while (m_Running)
        {

        }
    }
}
#include "pch.h"
#include <iostream>

#include "Framework/OpenGLWindow/OpenGLWindow.h"

int main()
{
    auto* m_window = new DefaultOpenGLWindow();
    b3gWindowConstructionInfo ci;
    ci.m_title = "Hello World!";
    ci.m_openglVersion = 2;
    ci.m_width = 640;
    ci.m_height = 480;
    m_window->createWindow(ci);

    do
    {
        m_window->startRendering();
        m_window->endRendering();
        Sleep(16);
    }
    while (!m_window->requestedExit());

    std::cout << "Hello World!\n";
    return 0;
}

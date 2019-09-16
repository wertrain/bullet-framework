#include "pch.h"
#include <iostream>

#include "Framework/Utility/Clock.h"
#include "Framework/OpenGLWindow/OpenGLWindow.h"

static double gMinUpdateTimeMicroSecs = 1000.;

int main()
{
    bool init = true;
    auto* m_window = new DefaultOpenGLWindow();
    b3gWindowConstructionInfo ci;
    ci.m_title = "Hello World!";
    ci.m_openglVersion = 2;
    ci.m_width = 640;
    ci.m_height = 480;
    m_window->createWindow(ci);

    Clock clock;
    if (init)
    {
        clock.reset();
        do
        {
            double deltaTimeInSeconds = clock.getTimeMicroseconds() / 1000000.;
            if (deltaTimeInSeconds > 0.1)
            {
                deltaTimeInSeconds = 0.1;
            }
            if (deltaTimeInSeconds < (gMinUpdateTimeMicroSecs / 1e6))
            {
                Clock::usleep(static_cast<int>(gMinUpdateTimeMicroSecs / 10.));
            }
            else
            {
                clock.reset();

                m_window->startRendering();
                m_window->endRendering();
            }
        } while (!m_window->requestedExit());
    }

    return 0;
}

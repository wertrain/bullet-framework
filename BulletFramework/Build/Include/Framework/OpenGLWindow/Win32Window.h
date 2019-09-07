#ifndef FRAMEWORK_OPENGLWINDOW_WIN32WINDOW_H_
#define FRAMEWORK_OPENGLWINDOW_WIN32WINDOW_H_

#include "Framework/OpenGLWindow/Win32InternalWindowData.h"

class Win32Window : public CommonWindowInterface
{
protected:
    InternalData* m_data;

    void pumpMessage();

public:
    Win32Window();

    virtual ~Win32Window();

    virtual void createWindow(const b3gWindowConstructionInfo& ci);

    virtual void switchFullScreen(bool fullscreen, int width = 0, int height = 0, int colorBitsPerPixel = 0);

    virtual void closeWindow();

    virtual void runMainLoop();

    virtual void startRendering();

    virtual void renderAllObjects();

    virtual void endRendering();

    virtual float getTimeInSeconds();

    virtual void setDebugMessage(int x, int y, const char* message);

    virtual bool requestedExit() const;

    virtual void setRequestExit();

    virtual void getMouseCoordinates(int& x, int& y);

    virtual void setMouseMoveCallback(b3MouseMoveCallback mouseCallback);
    virtual void setMouseButtonCallback(b3MouseButtonCallback mouseCallback);
    virtual void setResizeCallback(b3ResizeCallback resizeCallback);
    virtual void setWheelCallback(b3WheelCallback wheelCallback);
    virtual void setKeyboardCallback(b3KeyboardCallback keyboardCallback);

    virtual b3MouseMoveCallback getMouseMoveCallback();
    virtual b3MouseButtonCallback getMouseButtonCallback();
    virtual b3ResizeCallback getResizeCallback();
    virtual b3WheelCallback getWheelCallback();
    virtual b3KeyboardCallback getKeyboardCallback();

    virtual void setRenderCallback(b3RenderCallback renderCallback);

    virtual void setWindowTitle(const char* title);

    virtual bool isModifierKeyPressed(int key);
};

#endif // FRAMEWORK_OPENGLWINDOW_WIN32WINDOW_H_

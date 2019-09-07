#ifndef FRAMEWORK_OPENGLWINDOW_OPENGLWINDOW_H_
#define FRAMEWORK_OPENGLWINDOW_OPENGLWINDOW_H_
#include "Framework/OpenGLWindow/Win32Window.h"

#define DefaultOpenGLWindow Win32OpenGLWindow

class Win32OpenGLWindow : public Win32Window
{
    bool m_OpenGLInitialized;

protected:
    void enableOpenGL();

    void disableOpenGL();

public:
    Win32OpenGLWindow();

    virtual ~Win32OpenGLWindow();

    virtual void createWindow(const b3gWindowConstructionInfo& ci);

    virtual void closeWindow();

    virtual void startRendering();

    virtual void renderAllObjects();

    virtual void endRendering();

    virtual float getRetinaScale() const { return 1.f; }
    virtual void setAllowRetina(bool /*allowRetina*/) {};

    virtual int getWidth() const;
    virtual int getHeight() const;

    virtual int fileOpenDialog(char* fileName, int maxFileNameLength);
};

#endif // FRAMEWORK_OPENGLWINDOW_OPENGLWINDOW_H_

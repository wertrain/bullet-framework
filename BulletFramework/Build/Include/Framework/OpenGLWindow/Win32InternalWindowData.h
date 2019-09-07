
#ifndef FRAMEWORK_OPENGLWINDOW_OPENGLINCLUDE_WIN32INTERNALWINDOWDATA_H_
#define FRAMEWORK_OPENGLWINDOW_OPENGLINCLUDE_WIN32INTERNALWINDOWDATA_H_

#include <windows.h>

struct InternalData
{
	HWND m_hWnd;
	;
	int m_fullWindowWidth;  //includes borders etc
	int m_fullWindowHeight;

	int m_openglViewportWidth;  //just the 3d viewport/client area
	int m_openglViewportHeight;

	HDC m_hDC;
	HGLRC m_hRC;
	bool m_OpenGLInitialized;
	int m_oldScreenWidth;
	int m_oldHeight;
	int m_oldBitsPerPel;
	bool m_quit;
	int m_mouseLButton;
	int m_mouseRButton;
	int m_mouseMButton;
	int m_mouseXpos;
	int m_mouseYpos;

	int m_internalKeyModifierFlags;

	b3WheelCallback m_wheelCallback;
	b3MouseMoveCallback m_mouseMoveCallback;
	b3MouseButtonCallback m_mouseButtonCallback;
	b3ResizeCallback m_resizeCallback;
	b3KeyboardCallback m_keyboardCallback;

	InternalData()
	{
		m_hWnd = 0;
		m_mouseLButton = 0;
		m_mouseRButton = 0;
		m_mouseMButton = 0;
		m_internalKeyModifierFlags = 0;
		m_fullWindowWidth = 0;
		m_fullWindowHeight = 0;
		m_openglViewportHeight = 0;
		m_openglViewportWidth = 0;
		m_hDC = 0;
		m_hRC = 0;
		m_OpenGLInitialized = false;
		m_oldScreenWidth = 0;
		m_oldHeight = 0;
		m_oldBitsPerPel = 0;
		m_quit = false;

		m_keyboardCallback = 0;
		m_mouseMoveCallback = 0;
		m_mouseButtonCallback = 0;
		m_resizeCallback = 0;
		m_wheelCallback = 0;
	}
};

#endif  //FRAMEWORK_OPENGLWINDOW_OPENGLINCLUDE_WIN32INTERNALWINDOWDATA_H_

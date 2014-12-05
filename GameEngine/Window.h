<<<<<<< HEAD
#include <Windows.h>
#include <string>
#include "D3dtest.h"

class Window
{
public:
	Window(HINSTANCE hInstance,  int iCmdShow);
	~Window();
	
	int init(HINSTANCE, int, D3dtest*);
	
};

=======
#include <Windows.h>
#include <string>

class Window
{
public:
	Window(HINSTANCE, int);
	int init(HINSTANCE, int);
};

>>>>>>> 813927fb466a1aea4158f16ac6c20a962682caf3

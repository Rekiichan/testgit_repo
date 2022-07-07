#define _WIN32_WINNT 0x0500
#include <windows.h>

COORD GetXY()
{
    CONSOLE_SCREEN_BUFFER_INFO cbsi;
    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
    if (GetConsoleScreenBufferInfo(Handle, &cbsi))
    {
        return cbsi.dwCursorPosition;
    }
    else
    {
        // The function failed. Call GetLastError() for details.
        COORD invalid = { 0, 0 };
        return invalid;
    }
}


void GoToXY(int x, int y)
{
	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = x;
    coord.Y = y;
	SetConsoleCursorPosition(Handle, coord);
}

WORD GetConsoleTextAttribute (HANDLE Handle)
{
  CONSOLE_SCREEN_BUFFER_INFO con_info;
  GetConsoleScreenBufferInfo(Handle, &con_info);
  return con_info.wAttributes;
}

void setcolor(short x) { //Ham thay doi textcolor va backgroundcolor
	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(Handle, x);
}

void SetBackGroundRange (short color, int left, int top, int width, int height){
	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD BackupPos = GetXY();
	short BackupColor = GetConsoleTextAttribute(Handle);
	GoToXY(left, top);
	setcolor(color);
	for (int i=1; i<=height; i++){
		for (int j=1; j<=width; j++)
			printf(" ");	
		GoToXY(left, top++);
	}
	GoToXY(BackupPos.X, BackupPos.Y);	
	setcolor(BackupColor);
}

//update

void EraserCharRange (int left, int top, int width, int height){
	for (int i=1; i<=height; i++){
		GoToXY(left, top++);
		for (int j=1; j<=width; j++)	
			printf(" ");
	}
}


void DisableMaximize()
{
	HWND Handle = GetConsoleWindow();
 	SetWindowLong(Handle, GWL_STYLE,
               GetWindowLong(Handle, GWL_STYLE) & ~WS_MAXIMIZEBOX);
}

void ResizeConsole(int COLS, int LINES){
	char buffer[40];
	sprintf(buffer, "MODE CON COLS=%d LINES=%d", COLS, LINES);
	system(buffer);	
}

void SetCenterConsole(){
	HWND ConsoleWindow;
	RECT rectConsole;	
	
	ConsoleWindow=GetForegroundWindow(); //get handle
	GetWindowRect(ConsoleWindow,&rectConsole); //get Console Rect 
	
	//Getting the desktop hadle and rectangule
	HWND   hwndScreen;
	RECT   rectScreen;	
		
	hwndScreen=GetDesktopWindow ();  //get HANDLE Desktop
	GetWindowRect(hwndScreen,&rectScreen); //get Desktop Rect 
	
	//caculate the window console to center of the screen	
	int ConsolePosX;
	int ConsolePosY;
	//Center PosX = (DesktopWitdh) / 2 - (ConsoleWidth / 2)
	ConsolePosX = ((rectScreen.right-rectScreen.left)/2-(rectConsole.right - rectConsole.left)/2 ); 
	//Center PosX = (DesktopHeight) / 2 - (ConsoleHeight / 2)
	ConsolePosY = ((rectScreen.bottom-rectScreen.top)/2-(rectConsole.bottom - rectConsole.top)/2);	
	SetWindowPos(ConsoleWindow,NULL,ConsolePosX,ConsolePosY,0,0, SWP_SHOWWINDOW || SWP_NOSIZE);
}
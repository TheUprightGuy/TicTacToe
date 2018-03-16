#include "gamebase.h"
#include<iostream>
#include<Windows.h>

GameBase::GameBase()
{
}

GameBase::~GameBase()
{
}

void GameBase::Initialise()
{
	m_bGrid.resize(9);

	//Menu(); Do menu later

	Process();
}

void GameBase::Process()
{
	//PvP
	/*****************/
	bool bPlayer = 0;
	while (!CheckWin(bPlayer))
	{
		bPlayer = !bPlayer;
		Input(bPlayer);
	}
	/*****************/
}

void GameBase::Input(bool _bSide)
{
}

void GameBase::DrawBoard()
{
}

/***********************
* name of the function:ClearScreen()
* @author: Media Design School
* @parameter: Takes in nothing
* @return: Clears entire screen and buffers
********************/
void GameBase::ClearScreen()
{
	COORD coordScreen = { 0, 0 };
    DWORD cCharsWritten;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD dwConSize;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
    FillConsoleOutputCharacter(hConsole, TEXT(' '), dwConSize,
        coordScreen, &cCharsWritten);
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    FillConsoleOutputAttribute(hConsole, csbi.wAttributes, dwConSize,
        coordScreen, &cCharsWritten);
    SetConsoleCursorPosition(hConsole, coordScreen);
}

bool GameBase::CheckWin(bool _bPlayer)
{
	return false;
}

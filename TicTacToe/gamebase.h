#ifndef __GAMEBASE_H__
#define __GAMEBASE_H__
#include <vector>

class GameBase
{
public:
	GameBase();
	~GameBase();

	void Initialise();

	void Menu();

	void Process();
	void Input(bool _bSide);

	void DrawBoard();
	void ClearScreen();

	bool CheckWin(bool _bPlayer);

private:
	std::vector<bool> m_bGrid;

	//CAI* ...
};
#endif // !__GAMEBASE_H__


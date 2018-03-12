#ifndef __GAMEBASE_H__
#define __GAMEBASE_H__
#include <vector>
class GameBase
{
public:
	GameBase();
	~GameBase();

	void Initialise();

	void MenuProcess();
	void GameProcess();

	std::vector<bool> ReadBoard();
	void WriteBoard(int _Place);

private:
	std::vector<bool> m_bGrid;
};
#endif // !__GAMEBASE_H__


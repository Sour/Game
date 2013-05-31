#include <iostream>;
#include <Windows.h>;

int board[10][10] = {};
bool playing = true;

void showBoard()
{
	for(int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		for(int j = 0; j < 10; j++)
		{
			std::cout << board[i][j];
		}
	}
}

void startingPos(int x, int y)
{
	board[y][x] = 1;
	showBoard();
	std::cout << std::endl;
}

void movePlayer(int x, int y)
{
	if(GetAsyncKeyState(VK_UP))
	{
		
	}
	if(GetAsyncKeyState(VK_DOWN))
	{
	
	}
	if(GetAsyncKeyState(VK_LEFT))
	{
	
	}
	if(GetAsyncKeyState(VK_RIGHT))
	{
	
	}
	if(GetAsyncKeyState(VK_ESCAPE))
	{
		playing = false;
	}
}

void gameLoop()
{
	while(playing == true)
	{
		movePlayer(4, 4);
	}
}

void populateBoard()
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			board[i][j] = 0;
		}
	}
}

void main()
{
	populateBoard();
	startingPos(4, 4);
	gameLoop();
}
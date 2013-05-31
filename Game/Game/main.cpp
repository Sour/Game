#include <iostream>;
#include <Windows.h>;

int board[10][10] = {};
int moveX = 4;
int moveY = 4;
bool playing = true;

void showBoard()	//prints out the board on console
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

void startingPos(int x, int y)	//sets the starting position to 1
{
	board[y][x] = 1;
	showBoard();
	std::cout << std::endl;
}

void movePlayer(int x, int y)	//need to figure out how to move with the keypresses
{
	if(GetAsyncKeyState(VK_UP))
	{
		board[y][x] = 0;
		board[y - 1][x] = 1;
		system("CLS");			//just for testing right now
		showBoard();
	}
	if(GetAsyncKeyState(VK_DOWN))
	{
		board[y][x] = 0;
		board[y + 1][x] = 1;
		system("CLS");
		showBoard();
	}
	if(GetAsyncKeyState(VK_LEFT))
	{
		board[y][x] = 0;
		board[y][x - 1] = 1;
		system("CLS");
		showBoard();
	}
	if(GetAsyncKeyState(VK_RIGHT))
	{
		board[y][x] = 0;
		board[y][x + 1] = 1;
		system("CLS");
		showBoard();
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
		movePlayer(moveX, moveY);
	}
}

void populateBoard()		//fills the board with 0's
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
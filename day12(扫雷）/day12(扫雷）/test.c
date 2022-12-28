#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("#############################\n");
	printf("#####1、play     2、exit#####\n");
	printf("#############################\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//信息存储
	char show[ROWS][COLS] = { 0 };//用户展示
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW,COL);
	FindMine(mine,show,ROW,COL);
	
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏!\n");
			break;
		default:
			printf("错误，请重新选择!\n");
		    break;
		}
	} while (input);
}



int main()
{
	test();
	return 0;
}
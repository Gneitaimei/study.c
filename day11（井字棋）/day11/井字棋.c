#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include"game.h"

void menu()//菜单
{
	printf("#################################\n");
	printf("#####1、play    0、exit##########\n");
	printf("#################################\n");
}

void game()//游戏函数实现
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret=Iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		ComeputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你赢了!\n");
	}
	else if (ret == '#')
	{
		printf("你输了！\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择。\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}
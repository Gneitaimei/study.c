#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include"game.h"



void InitBoard(char board[ROW][COL], int row, int col)//��������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
  
}


void DisplayBoard(char board[ROW][COL], int row, int col)//��ӡ����
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
			    printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
				    printf("|");
			}
			printf("\n");
		}
		   
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)//����ƶ�
{
	int x = 0;
	int y = 0;
	printf("����ߣ�>\n");
	while (1)
	{
		printf("������Ҫ�µ����꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�жϺϷ���
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ��\n");
			}
				
		}
		else
		{
			printf("����Ƿ������������룺\n");
		}
	}
	
}
void ComeputerMove(char board[ROW][COL], int row, int col)//�����ƶ�
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}	
 
	}

}

int IsFull(char board[ROW][COL], int row, int col)//�ж������Ƿ�����
{
	int i = 0;
	int j = 0;
	for (i = 0; i <row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
		
	}
	return 1;
}


char Iswin(char board[ROW][COL], int row, int col)//�ж���Ӯƽ
{
	int i = 0;
	for (i = 0; i < row; i++)//������ �ж�
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)//������ �ж�
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�Խ����ж�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (1 == IsFull(board, ROW, COL))//��������
	{
		return 'Q';
	}
	return 'c';
}
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//ÉùÃ÷º¯Êý
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComeputerMove(char board[ROW][COL],int row,int col);
char Iswin(char board[ROW][COL], int row, int col);
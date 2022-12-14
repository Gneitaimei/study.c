#define _CRT_SECURE_NO_WARNINGS 1
static int Add(int x, int y)//static 函数改变了函数的链接属性（外部-->外部）
{
	int z = x + y;
	return z;
}
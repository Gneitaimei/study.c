#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>		
#include<string.h>
#include<math.h>

int hannuota(int n, char x, char y, char z)
{
	if (n == 1)
	{
		move(x, z);
	}
	else
	{
		hannuota(n - 1,x,z,y );
		move(x, z);
		hannuota(n - 1, y, x, z);
	}
	return 0;
		
}

int move(char i, char o)
{
	static int k = 1;
	printf("%d # %c-->%c\n", k, i, o);
	k++;
	return 0;
}

int main()
{
	int ret, n;
	printf("请输入你需要移动的盘子数：");
	scanf("%d",&n);
	ret = hannuota(n, 'A', 'B', 'C');
	return 0;
}




//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//递归的方法
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//
//	return 0;
//	
//}




//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	return 0;
//}
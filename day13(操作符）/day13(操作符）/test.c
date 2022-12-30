#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	b = (a > 5 ? 3 : -3);
	return 0;
}




//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a=a&(~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}




//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}




//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}





//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	return 0;
//}




//位操作符
//int main()
//{
//	//&-按2进制位与//|-按位或
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 3;//^-按2进制异或，相同为0，相异为1
//	int b = 5;
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//}



//移位操作符
//int main()
//{
//	int a = 16;//10000,若为负数，算数右移左边补1
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;//左移操作符，左边丢弃，右边补0
//	printf("%d\n", b);
//	return 0;
//}



//除法,取模
//int main()
//{
//	double a = 5.0 / 2;
//	int b = 5 % 2;//取模必须是整型
//	printf("%lf ", a);
//	printf("%d ", b);
//	return 0;
//}
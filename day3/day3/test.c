#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main()
{
	char ch = 'w';
	char*pc = &ch;
	printf("%d\n", sizeof(pc));





	//int a = 10;
	////&a;//取地址
	//int* p = &a;//p 指针变量
	////*p = 20;//*p -解应用操作符
	////printf("%p\n", &a);
	////printf("%p\n", p);
	//printf("%d\n", a);
	return 0;
}

//#define Max(a,b) (a>b?a:b)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//
//}

//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}




//void test()
//{
//	static int a=1 ;//static 修饰局部变量，局部变量生命周期变长了
//                    //static 修饰全局变量，改变了全局变量的作用域（静态全局变量只能在其源文件内部）
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//		
//	}
//	return 0;
//
//}
////int main()
////{
////	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("较大值为：%d\n", max);
//	return 0;
//}
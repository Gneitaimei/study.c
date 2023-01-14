#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}


//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		//ret = 1;//调试后，找寻到的错误
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;//因为栈区总是从高到低访问
//		           //数组访问随着下标的变化总是由低到高访问
//		           //当出现越界访问问题时，就有可能出现访问到i所在地址
//	}
//	return 0;
//}




//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//防止空指针造成程序崩溃
//	{
//		while (*dest++ = *src++)
//		{
//			;//在while函数判定到\0时函数值为假，跳出循环
//		}
//	}
//}



//字符串拷贝自己的函数
char* my_strcpy(char* dest, const char* src)//用const更改常属性，避免写错导致找错误麻烦
{                                           //返回值返回字符串，方便链式访问直接进行打印
	char* ret = dest;
	assert(dest != NULL);//断言  在出现问题时显示出来
	assert(src != NULL);
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "###############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);//实现自己的字符拷贝函数

	printf("%s\n", my_strcpy(arr1,arr2));//链式访问

	return 0;
}
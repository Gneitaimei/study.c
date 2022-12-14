#define _CRT_SECURE_NO_WARNINGS 1



#include<string.h>
#include<stdio.h>

int main()
{
	int arr[100] = {0};
	int sz = 0;
	printf("%d\n", sizeof arr);
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	return 0;
}



//int main()
//{
//	int a = 5 % 2;//%---取模
//	printf("%d\n", a);
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个存放10个整数数字的数组
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//
//}
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int sum = 0;
//	sum = Add(num1,num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//


//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 1000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line>=1000)
//	    printf("好offer\n");
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？<1/0>:\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}
//\t---水平制表符
//\n---换行符

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c',0};
//	printf("%d\n", strlen(arr1));//strlen 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	//char arr1[]="abc";//数组
//	////"abc"---'a','b','c',\0----'\0'字符串的结束标志
//	//char arr2[] = {'a','b','c',0};
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//
//}





//#include<stdio.h>


//枚举常量  
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}


//#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	//const int n = 10;//n是变量，但是有常属性，所以说n是常变量
//	//int arr[10] = { 0 };
//	//const int num = 4;//const-修饰常变量
//	//printf("%d\n", num);
//
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
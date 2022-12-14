//std标准standard input output
//include-包含stdio.h的文件

#include<stdio.h>


//int main()
//{
//	{
//		int a = 10;
//	}
//	
//	return 0;
//}



//int main()
//{
//	//extern-声明外部符号
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}




//int global = 2020;
//
//int main()
//{
//	printf("%d\n", global);
//
//	return 0;
//}
int main()
{
//	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
//	//输入数据-使用输入函数scanf
	scanf_s("%d%d", &num1, &num2);//取地址符号
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
//


//int a = 100;
//int main()
//{
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof(char));//1
//	//printf("%d\n", sizeof(short));//2
//	//printf("%d\n", sizeof(long));//4
//	//printf("%d\n", sizeof(float));//4
//	//printf("%d\n", sizeof(double));//8
//	//short age = 20;//向内存申请两个字节=16bit，用来存放20
//	//float weight = 95.5f;//向内存申请四个字节存放小数
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);//局部变量的名称尽量不与全局变量相同-容易产生bug
//	                  //当全局变量和局部变量相同时，局部变量优先
//
//	return 0;
//}


//int-整型
//short int--短整型
//int表示main函数调用以后返回整形值
//%f-打印小数
//%p-以地址形式打印
//int main()//主函数-程序的入口-有且仅有一个
//{
	//char ch = 'A';//内存
	//printf("%c\n",ch);//%c-打印字符格式的数据
	//printf("hehe\n");//所要求的任务
	//int age = 20;
	//printf("%d\n",age);//%d--打印整型十进制数据
	//float f = 5.0;
	//printf("%f\n", f);

	//return 0;//返回
//}
//char-字符类型
//char ch = 'A';//内存

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//结构体
//创建一种类型来描述复杂对象
struct Book
{

	char name[20];//c语言程序设计
	short price;//55

};

int main()
{
	//利用结构体类型-创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计", 55 };
	strcpy(b1.name,"C++");
	printf("%s\n", b1.name);

	//struct Book* pb = &b1;

	//利用pb打印书名和价格
	/*printf("%s\n", (*pb).name);*/
	//printf("%s\n", pb->name);//.---结构体变量.成员
	                         //->---结构体指针—>成员

	/*printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d\n", b1.price);*/
	return 0;
}






//int main()
//{ 
//
//
//	/*double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%d\n", sizeof(d));*/
//
//	return 0;
//
//}
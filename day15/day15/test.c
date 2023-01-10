#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//typedef struct Stu  //结构体类型
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//可以定义全局变量
////可以用typedef对类型进行重命名
//
//
//int main()
//{
//	Stu s1 = { "张三", "20", "12432532423", "男" };//局部变量
//	Stu s2 = { "旺财", "30", "54521321422", "女" };
//	
//	return 0;
//}



//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", {100,'w',"hello world",3.14}, NULL };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	return 0;
//}



typedef struct Stu  //结构体类型
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//可以定义全局变量
//可以用typedef对类型进行重命名
void Print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}


void Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}


int main()
{
	Stu s = { "张三", 20, "12432532423", "男" };//局部变量
	Print1(s);
	Print2(&s);
	return 0;
}




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
//	int a = 5 % 2;//%---ȡģ
//	printf("%d\n", a);
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//����һ�����10���������ֵ�����
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
//	printf("�������\n");
//	while (line < 1000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if (line>=1000)
//	    printf("��offer\n");
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��<1/0>:\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}
//\t---ˮƽ�Ʊ��
//\n---���з�

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c',0};
//	printf("%d\n", strlen(arr1));//strlen �����ַ�������
//	printf("%d\n", strlen(arr2));
//	//char arr1[]="abc";//����
//	////"abc"---'a','b','c',\0----'\0'�ַ����Ľ�����־
//	//char arr2[] = {'a','b','c',0};
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//
//}





//#include<stdio.h>


//ö�ٳ���  
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


//#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	//const int n = 10;//n�Ǳ����������г����ԣ�����˵n�ǳ�����
//	//int arr[10] = { 0 };
//	//const int num = 4;//const-���γ�����
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
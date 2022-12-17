#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	return 0;
}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password , "123456")==0)//等号不能比较字符串
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}



//写一个代码，在arr数组（有序）中找到7
//int main()
//{
//	
//	int arr[]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k =17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//		if (left>right)
//			printf("找不到\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//        ret=1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = i*ret;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\t", i);
//		i++;
//	}
//		while (i <= 10);0
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k == 0; i++, k++)
//		k++;
//	return 0;
//}




//int main()
//{
//	for (;;)//for 循环的判断部分如果被省略，判断条件恒正
//	{       //不熟练不要随便省略
//		printf("hehe\n");
//	}
//	return 0;
//}
//



//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//死循环
//		printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//初始化，判断，调整集合在了一起
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}

//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//EOF---文件结束标志
//	//{
//	//	putchar(ch);
//	//}
//	/*int ch = getchar();
//	putchar(ch);*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):");
//	ret = getchar();
//	if (ret =='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃成功\n");
//	}
//
//
//	return 0;
//}
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
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password , "123456")==0)//�ȺŲ��ܱȽ��ַ���
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}



//дһ�����룬��arr���飨�������ҵ�7
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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//		if (left>right)
//			printf("�Ҳ���\n");
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
//	for (;;)//for ѭ�����жϲ��������ʡ�ԣ��ж���������
//	{       //��������Ҫ���ʡ��
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
//		if (i = 5)//��ѭ��
//		printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//��ʼ�����жϣ�������������һ��
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
//	//while ((ch = getchar()) != EOF)//EOF---�ļ�������־
//	//{
//	//	putchar(ch);
//	//}
//	/*int ch = getchar();
//	putchar(ch);*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):");
//	ret = getchar();
//	if (ret =='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("�����ɹ�\n");
//	}
//
//
//	return 0;
//}
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
//		//ret = 1;//���Ժ���Ѱ���Ĵ���
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
//		arr[i] = 0;//��Ϊջ�����ǴӸߵ��ͷ���
//		           //������������±�ı仯�����ɵ͵��߷���
//		           //������Խ���������ʱ�����п��ܳ��ַ��ʵ�i���ڵ�ַ
//	}
//	return 0;
//}




//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//��ֹ��ָ����ɳ������
//	{
//		while (*dest++ = *src++)
//		{
//			;//��while�����ж���\0ʱ����ֵΪ�٣�����ѭ��
//		}
//	}
//}



//�ַ��������Լ��ĺ���
char* my_strcpy(char* dest, const char* src)//��const���ĳ����ԣ�����д�����Ҵ����鷳
{                                           //����ֵ�����ַ�����������ʽ����ֱ�ӽ��д�ӡ
	char* ret = dest;
	assert(dest != NULL);//����  �ڳ�������ʱ��ʾ����
	assert(src != NULL);
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "###############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);//ʵ���Լ����ַ���������

	printf("%s\n", my_strcpy(arr1,arr2));//��ʽ����

	return 0;
}
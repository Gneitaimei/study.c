#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	/*int ch = getchar();
	putchar(ch);*/
	return 0;
}

//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		
//		
//	}
//	return 0;
//}
//


//int main()
//{
//	while (1)//��ѭ��
//		printf("hehe\n");
//	
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n"); 
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������������1~7\n");
//		break;
//	}
//	return 0;
//
//}



//int main()
//{
//	int a = 83;
//	static int b = 1;
//	if (a % 2 == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��ż��\n");
//	}
//	while (b < 99)
//	{
//		printf("%d\t", b);
//		b += 2;
//	}
//	
//
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (5==num)
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}




//int main()
//{
//	int age = 80;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age<28)
//		printf("����\n");
//	else if (age>=28 && age < 40)
//		printf("׳��\n");
//	else
//		printf("����\n");
//	return 0;
//}
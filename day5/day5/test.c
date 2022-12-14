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
//	while (1)//死循环
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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n"); 
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误，请输入1~7\n");
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
//		printf("是奇数\n");
//	}
//	else
//	{
//		printf("是偶数\n");
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
//		printf("呵呵\n");
//	}
//	return 0;
//}




//int main()
//{
//	int age = 80;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age<28)
//		printf("青年\n");
//	else if (age>=28 && age < 40)
//		printf("壮年\n");
//	else
//		printf("老年\n");
//	return 0;
//}
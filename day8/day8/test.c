#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>




//void Add(int* p)
//{
//	(*p)++;
//
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}



//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//}





void Swap(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);
	Swap(&a,&b);
	printf("%d %d\n", a, b);
	return 0;
}




//get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{
//	char arr[] = "hello world!";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
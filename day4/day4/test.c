#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//�ṹ��
//����һ���������������Ӷ���
struct Book
{

	char name[20];//c���Գ������
	short price;//55

};

int main()
{
	//���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������", 55 };
	strcpy(b1.name,"C++");
	printf("%s\n", b1.name);

	//struct Book* pb = &b1;

	//����pb��ӡ�����ͼ۸�
	/*printf("%s\n", (*pb).name);*/
	//printf("%s\n", pb->name);//.---�ṹ�����.��Ա
	                         //->---�ṹ��ָ�롪>��Ա

	/*printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);*/
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
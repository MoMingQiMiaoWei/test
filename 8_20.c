#include <stdio.h>


//λ�� - ������λ - ����ƽ̨
//struct S
//{
//	int a : 2;//��С���ܳ���32��int����-4���ֽڣ���aռ2��bitλ��bռ5��bitλ����
//	int b : 5;
//	int c : 10;
//	int d : 20;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d ", sizeof(s));
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}


//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
//	Male=2,//Ĭ�ϳ�ֵΪ0�����Ը�ö�ٳ�����һ����ʼֵ��
//	Female,
//	Secret, 
//};
//
//int main()
//{
//	enum Sex s = Male;
//	return 0;
//}


//�������� - ������ - ������
//union Un
//{
//	char c;
//	int a;
//};
//
//int main()
//{
//	union Un s;
//	printf("%d ", sizeof(s));
//	return 0;
//}


//ʹ���������жϴ�С��
//int check_sys()
//{
//	union U
//	{
//		int a;
//		char c;
//	}u;
//	u.a = 1;
//	return u.c;//��1��ʾС�ˣ���0��ʾ���
//}

////�жϴ�С��
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//}


//�������С
union Un
{
	int a;
	char c[5];
};

int main()
{
	union Un u;
	printf("%d ", sizeof(u));
	return 0;
}
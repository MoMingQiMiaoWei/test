#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int* p=relloc(NULL, 40);//����malloc(40);
//}

//1.ʹ��free()�ͷŶ�̬�ڴ��һ����(����)
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	free(p);//p�ڳ������й����ѷ����仯
//	p = NULL;
//	return 0;
//}

//2.��ͬһ�鶯̬�ڴ���ж���ͷ�(����)
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		return 0;
//	}
//	//ʹ��
//	//�ͷ�
//	free(p);
//	p = NULL;//��p��ֵNULL����Ա������ͷ�
//
//	free(p);//����
//	return 0;
//}


//void GetMomery(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMomery(&str);
//	strcpy(str, "Hello,world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//
//int* test()//�������
//{
//	//static int a=10;��̬��
//	int a = 10;//ջ��
//	return &a;//a�������꺯����ͱ����٣�����a�ĵ�ַ�ò���a��ֵ
//}
//int main()
//{
//	int* p=test();
//	*p = 20;
//	return 0;
//}


void test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�ͷ�strָ����ڴ�󣬲������str��ΪNULL
	//str=NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	test();
	return 0;
}
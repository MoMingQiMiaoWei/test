#include <stdio.h>

//Ԥ����ָ��---��������ָ��
//#define DEBUG
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG   //#if defined(DEBUG) ���������DEBUG�ͽ����������
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//#if !defined(DEBUG)//  #ifndef DEBUG ���û�ж���DEBUG�ͽ����������
//	printf("hehe");
//#endif
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1  //����ֵΪ���ִ����һ�䣬Ϊ�٣� 0 ��������
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//���֧��������ָ��
//int main()
//{
//#if 2==1
//	printf("haha");
//#elif 1==1
//	printf("heihei");
//#else
//	printf("dede");
//#endif
//}

//ʹ�ú�offsetof����ṹ��Ԫ�ص�ƫ����
//#include <stddef.h>
//struct S
//{
//	char i;
//	int a;
//	char j;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, j));
//	return 0;
//}


//��ʵ��offsetof��
struct S
{
	char i;
	int a;
	char j;
};
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
int main()
{
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, j));
	return 0;
}
#include <stdio.h>

//struct stu
//{
//	char name[20];
//	char tale[12];
//	char sex[10];
//	int age;
//};
//
//int main()
//{
//	return 0;
//}

//typedef struct Node
//{
//	int age;
//	struct Node* next;
//}Node;
//int main()
//{
//	Node arr[] = { 0 };
//	return 0;
//}


//�ṹ���ڴ����
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d ", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d ", sizeof(s2));
//	return 0;
//}

//struct S3
//{
//	double c1;
//	char c2;
//	int c3;
//};
//struct S4
//{
//	double c4;
//	struct S3 s3;
//	int c5;
//};
//int main()
//{
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	printf("%d ", sizeof(s3));
//	printf("%d ", sizeof(s4));
//	return 0;
//}


//#pragma pack(4)//����Ĭ�϶�����
//struct St
//{
//	char c1;
//	double c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//int main()
//{
//	struct St s = { 0 };
//	printf("%d\n", sizeof(s));
//}


//#include <stddef.h>
//struct St
//{
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct St, c));//��--offsetof ����ṹ���Ա����ڽṹ����ʼλ��ƫ������С
//	printf("%d\n", offsetof(struct St, i));// size_int offsetof(structName,memberName);
//	return 0;                                               //���ṹ�����������ṹ���Ա����
//}


//�ṹ�崫��ʱҪ���ṹ��ĵ�ַ
struct S
{
	int a;
	char b;
	double c;
};
void Init(struct S* temp)
{
	temp->a = 100;
	temp->b = 'w';
	temp->c = 3.14;
}
int main()
{
	struct S s = { 0 };
	Init(&s);//�˴���Ҫ�ı�s�����ݣ����Դ�����Ҫs�ĵ�ַ
	printf("%d %c %lf\n",s.a,s.b,s.c);
	return 0;
}
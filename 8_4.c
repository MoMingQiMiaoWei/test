#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//double Pow(int n, int k)
//{
//	if(k<0)
//		return (1.0 / (Pow(n,-k)));
//	else if(k==0)
//		return 1;
//	else
//		return n*Pow(n,k-1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d",&n,&k);
//	double ret=Pow(n,k);
//	printf("ret=%lf\n",ret);
//	return 0;
//}




//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[]="abcdef";
//	struct T t={"hehe",{12,'A',"hello bit",3.14},arr};
//	printf("%d\n", t.s.a);
//	printf("%s\n", t.pc);
//	return 0;
//}



//typedef struct Stu
//{
//	char name[10];
//	int age;
//	char tela[12];
//}Stu;
//
//void print(Stu* temp)
//{
//	printf("name=  %s\n",temp->name);
//	printf("age=  %d\n",temp->age);
//	printf("tela=  %s\n",temp->tela);
//}
//int main()
//{
//	Stu s={"张三",15,"15876450125"};
//	print(&s);
//	return 0;
//}


int Add(int x, int y)
{
	return x+y;
}
int main()
{
//指针数组
int* arr[10];
//数组指针
int* (*pa)[10]=&arr;
//函数指针
int (*padd)(int,int)=Add;
printf("%d\n",padd(3,5));
//函数指针数组
int(*parr[4])(int,int)={0};
//指向函数指针数组的指针
int(*(*par)[4])(int,int)=&parr;
return 0;
}
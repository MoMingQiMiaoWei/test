#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int* p=relloc(NULL, 40);//等于malloc(40);
//}

//1.使用free()释放动态内存的一部分(错误)
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
//	free(p);//p在程序运行过程已发生变化
//	p = NULL;
//	return 0;
//}

//2.对同一块动态内存进行多次释放(错误)
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	p = NULL;//对p赋值NULL后可以避免多次释放
//
//	free(p);//错误
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
//int* test()//错误代码
//{
//	//static int a=10;静态区
//	int a = 10;//栈区
//	return &a;//a在运行完函数后就被销毁，返回a的地址得不到a的值
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
	free(str);//free释放str指向的内存后，并不会把str置为NULL
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
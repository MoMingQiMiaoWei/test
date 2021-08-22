#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//动态内存分配
//int main()
//{
//	//向内存申请10个整型空间
//	int* p =(int*) malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	//malloc(10*sizeof(int));
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);//free()函数是用来释放动态开辟的空间的
//	p = NULL;
//	return 0;
//}



// int main()
//{
//	int* p =(int*) malloc(20);
//	if (p == NULL)
//	{
//
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//realloc()函数 调整动态开辟空间的大小
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		return 0;
//	}
//	free(p);
//	p = NULL;
//}


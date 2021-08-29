#include <stdio.h>

//预处理指令---条件编译指令
//#define DEBUG
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG   //#if defined(DEBUG) 如果定义了DEBUG就进行下面语句
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//#if !defined(DEBUG)//  #ifndef DEBUG 如果没有定义DEBUG就进行下面语句
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
//#if 1  //常量值为真就执行下一句，为假（ 0 ）就跳过
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//多分支条件编译指令
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

//使用宏offsetof计算结构体元素的偏移量
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


//自实现offsetof宏
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
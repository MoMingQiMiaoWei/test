#include <stdio.h>


//位段 - 二进制位 - 不跨平台
//struct S
//{
//	int a : 2;//大小不能超过32（int类型-4个字节），a占2个bit位，b占5个bit位……
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


//枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量
//	Male=2,//默认初值为0，可以给枚举常量赋一个初始值；
//	Female,
//	Secret, 
//};
//
//int main()
//{
//	enum Sex s = Male;
//	return 0;
//}


//联合类型 - 联合体 - 共用体
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


//使用联合体判断大小端
//int check_sys()
//{
//	union U
//	{
//		int a;
//		char c;
//	}u;
//	u.a = 1;
//	return u.c;//反1表示小端，反0表示大端
//}

////判断大小端
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//}


//共用体大小
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
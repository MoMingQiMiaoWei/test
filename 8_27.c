#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//预定义符号
	//printf("%s\n", __FILE__);//__FILE__表示代码所在源文件的名称
	//printf("%d\n", __LINE__);//__LINE__表示代码所在的行号
	//printf("%s\n", __DATE__);//__DATE__表示代码运行的日期
	//printf("%s\n", __TIME__);//__TIME__表示代码运行的时间

   //写日志文件
	/*int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf,"file: %s  line: %d  date: %s  time: %s  i=%d\n",
			__FILE__,__LINE__,__DATE__,__TIME__,i);
	}
	fclose(pf);
	pf = NULL;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}*/



	//预处理指令
//#define MAX 100
//#define STR "hehe"
//int main()
//{
//	printf("%s ", STR);
//	return 0;
//}


////#define定义宏
//#define SQRET(x) x*x
//int main()
//{
//	int ret = SQRET(5);
//	printf("%d ", ret);
//	return 0;
//}


//宏定义并不是传参而是替换
//#define SQRET(x) (x)*(x)
//int main()
//{
//	int ret = SQRET(5+1);
//	printf("%d ", ret);
//	return 0;
//}



//#define PRINT(x) printf("the value of "#x" is %d\n",x)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);//替换成printf("the value of ""a"" is %d\n",a)  #x替换为"a"
//	PRINT(b);
//	return 0;
//}


//## 预处理操作符
//#define CAT(x,y) x##y//把位于它两边的符号合成一个符号
//int main()
//{
//	int Class84 = 2021;
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}


//#define MAX(x,y) (x>y)?(x):(y)
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	printf("%d\n", max);
//	return 0;
//}


//使用宏计算类型
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d ", ret);
//	return 0;
//}




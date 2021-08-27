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
#define MAX 100
#define STR "hehe"
int main()
{
	printf("%s ", STR);
	return 0;
}
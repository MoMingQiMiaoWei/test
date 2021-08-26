#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, 3, SEEK_CUR);
//	//2.读取文件
//	//int pos = ftell(pf);//ftell()返回文件指针相对于起始位置的偏移量
//	rewind(pf);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//}


//int main()
//{
//	//EOF-end of file-文件结束标志  
//	/*printf("%s ", strerror(errno));*///strerror()函数-把错误码对应的错误信息的字符串地址返回
//	FILE* pf = fopen("test2.test", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");//打印错误信息
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("hehe");//打印错误信息
		return 0;
	}
	//读文件
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
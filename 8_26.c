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
//	//1.��λ�ļ�ָ��
//	fseek(pf, 3, SEEK_CUR);
//	//2.��ȡ�ļ�
//	//int pos = ftell(pf);//ftell()�����ļ�ָ���������ʼλ�õ�ƫ����
//	rewind(pf);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//}


//int main()
//{
//	//EOF-end of file-�ļ�������־  
//	/*printf("%s ", strerror(errno));*///strerror()����-�Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	FILE* pf = fopen("test2.test", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");//��ӡ������Ϣ
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
		perror("hehe");//��ӡ������Ϣ
		return 0;
	}
	//���ļ�
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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//Ԥ�������
	//printf("%s\n", __FILE__);//__FILE__��ʾ��������Դ�ļ�������
	//printf("%d\n", __LINE__);//__LINE__��ʾ�������ڵ��к�
	//printf("%s\n", __DATE__);//__DATE__��ʾ�������е�����
	//printf("%s\n", __TIME__);//__TIME__��ʾ�������е�ʱ��

   //д��־�ļ�
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



	//Ԥ����ָ��
#define MAX 100
#define STR "hehe"
int main()
{
	printf("%s ", STR);
	return 0;
}
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
//#define MAX 100
//#define STR "hehe"
//int main()
//{
//	printf("%s ", STR);
//	return 0;
//}


////#define�����
//#define SQRET(x) x*x
//int main()
//{
//	int ret = SQRET(5);
//	printf("%d ", ret);
//	return 0;
//}


//�궨�岢���Ǵ��ζ����滻
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
//	PRINT(a);//�滻��printf("the value of ""a"" is %d\n",a)  #x�滻Ϊ"a"
//	PRINT(b);
//	return 0;
//}


//## Ԥ���������
//#define CAT(x,y) x##y//��λ�������ߵķ��źϳ�һ������
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


//ʹ�ú��������
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d ", ret);
//	return 0;
//}




#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<assert.h>
//int is_left_move(char* str1,char* str2)
//{
//	int len1=strlen(str1);
//	int len2=strlen(str2);
//	char* ret=0;
//	if(len1!=len2)
//	{
//		return 0;
//	}
//	strncat(str1,str1,6);
//    ret=strstr(str1,str2);
//     if(ret==NULL)
//	 {
//		 return 0;
//	 }
//	 else
//	 {
//		 return 1;
//	 }
//}
//int main()
//{
//	char arr1[30]="abcdef";
//	char arr2[]="cdefab";
//	int ret=is_left_move(arr1, arr2);
//	if(ret==1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//���Ͼ���
//һ�����־��󣬾����ÿ�д����ҵ�����ÿ�д��ϵ��µ����������в���һ������
//int FinNum(int arr[3][3],int k, int row,int col)
//{
//	int x = 0;
//	int y = col-1;
//	while(x<=row-1 && y>=0)
//	{
//		if(arr[x][y]>k)
//		{
//			y--;
//		}
//		else if(arr[x][y]<k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	  return 0;
//}
//
//int main()
//{
//	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int k = 7;
//	int ret = FinNum(arr,k,3,3);
//	if(ret==1)
//	{
//		printf("�ҵ���\n");
//	}
//	else 
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

//��ӡ�±�
//int FinNum(int arr[3][3],int k, int* px,int* py)
//{
//	int x = 0;
//	int y = *py-1;
//	while(x <= *px-1 && y>=0)
//	{
//		if(arr[x][y]>k)
//		{
//			y--;
//		}
//		else if(arr[x][y]<k)
//		{
//			x++;
//		}
//		else
//		{
//			*px=x;
//			*py=y;
//			return 1;
//		}
//	}
//	  return 0;
//}
//
//int main()
//{
//	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int k = 7;
//	int x=3;
//	int y=3;
//	//�����Ͳ���
//	int ret = FinNum(arr,k,&x,&y);
//	if(ret==1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���:%d %d\n",x,y);
//	}
//	else 
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}


//�ַ�������ʵ��

//1.strlen()����
//ʵ�ַ�����1.�������ķ��� 2.�ݹ� 3.ָ��-ָ��
//int my_strlen(const char* str)
//{
//	int count=0;
//	assert(*str!='NULL');
//	while(*str!='\0')//while(*str)
//	{
//		count++;
//		*str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len=my_strlen("abcdef");
//	printf("%d\n",len);
//}

//strcpy()����
//char* my_strcpy(char* str1,const char* str2)
//{
//	char* ret=str1;
//	assert(str1!=NULL);
//	assert(str2!=NULL);
//	while(*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[15]="abcde";
//	char arr2[]="efg";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}


//strcat()����
//char* my_strcat(char* str1, char* str2)
//{
//	char* ret=str1;
//	assert(str1!=NULL);
//	assert(str2);
//	while(*str1!='\0')
//	{
//		str1++;
//	}
//	while(*str1++=*str2++)//��strcpy������ͬ
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20]="hello";
//	char arr2[]="bit";
//	my_strcat(arr1,arr2);
//	printf("%s\n",arr1);
//}


//strcmp()����
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while(*str1 == *str2)
	{
		str1++;
		str2++;
		if(*str1=='\0')
		{
			return 0;
		}
	}
	if(*str1 > *str2)
		return 1;
	else
		return -1;
}

int main()
{
	char* arr1="abcef";
	char* arr2="abcef";
	int ret=my_strcmp(arr1,arr2);
	printf("%d\n",ret);
}
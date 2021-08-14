#include <stdio.h>
#include <string.h>
#include <assert.h>
//实现函数，左旋字符串中的k个字符
//void left_move(char* arr,int k)
//{
//	int i=0;
//	int len=strlen(arr);
//	for(i=0;i<k;i++)
//	{
//		char tmp=*arr;
//		int j=0;
//			for(j=0;j<len-1;j++)
//			{
//				*(arr+j)=*(arr+j+1);
//			}
//			*(arr+len-1)=tmp;
//	}
//}


//三步法：1.先逆序左边，2.逆序右边， 3.再逆序全部
void reverse(char* left, char* right)
{
	while(left<right)
	{
		char tmp=*left;
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}

void left_move(char* arr,int k)
{
	int len = strlen(arr);
	assert(arr);
	assert(k<=len);

	reverse(arr,arr+k-1);
	reverse(arr+k,arr+len-1);
	reverse(arr,arr+len-1);
}
//比较一个字符串是否是另一个字符串字符逆序而来的
int is_left_move(char* s1,char* s2)
{
	int len=strlen(s1);
	int i=0;
	int ret=0;
	for(i=0;i<len;i++)
	{
		left_move(s1,1);
	    ret=strcmp(s1,s2);
		if(ret==0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[]="abcdef";
	char arr2[]="cdefba";
	int ret=is_left_move(arr1,arr2);
	if(ret==1)
	    printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
//int main()
//{
//	char arr[]="abcdef";
//	left_move(arr,2);//左旋两个
//	printf("%s",arr);
//	return 0;
//}
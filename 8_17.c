#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

//strstr()函数自实现
//char* my_strstr(char* p1, char* p2)
//{
//	char* s1=p1;
//	char* s2=p2;
//	char* cur=p1;
//	assert(p1!=NULL);
//	assert(p2!=NULL);
//	if(*p2=='\0')
//	{
//		return p1;
//	}
//	while(*cur)
//{
//		s1=cur;
//		s2= (char*)p2;
//	while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//	{
//		s1++;
//		s2++;
//	}
//		
//	if(*s2 == '\0')
//	{
//		return cur;
//	}
//   cur++;
//   }
//}
//int main()
//{
//	char* p1="abcdefabcdef";
//	char* p2="def";
//	char* ret=my_strstr(p1,p2);
//	if(ret != NULL)
//	{   
//		printf("找到了\n");
//		printf("%s\n",ret);
//		
//	}
//	else
//	{
//		printf("查无此字符\n");
//	}
//}



//strtok()函数实现
int main()
{
	char arr[]="absd@sff.com";
	char* p="@.";
	char buf[1024]={0};
	char* ret=NULL;
	strcpy(buf,arr);
	for(ret=strtok(buf,p);ret != NULL; ret=strtok(NULL,p))
	{
		printf("%s\n",ret);
	}
	/* ret=strtok(arr,p);
	printf("%s\n",ret);
	ret=strtok(NULL,p);
	printf("%s\n",ret);
	return 0;*/
}
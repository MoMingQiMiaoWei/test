#include <stdio.h>
int main()
{
	short s =0;
	int a= 10;
	printf("%d ",sizeof(s=a+5));
	printf("%d",s);
	return 0;
}
//struct stu
//{
//	char name[20];
//	int age;
//	char ID[10];
//};
//int main()
//{	
//	struct stu s1={"ÕÅÈı", 15, "123456" };
//	/*printf("%s\n", s1.name);*/
//	struct stu* ps = &s1;
//	printf("%s\n",(*ps).name);
//	printf("%s\n", ps->name);
//	return 0;
//}
//int main()
//{
//	int arr[10]={0};
//	int* p = arr;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%p====%p\n",p+i, &arr[i]);
//	}
//
//}
//int main()
//{
//	int i =0;
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int* arr[]={&a,&b,&c};
//	for(i=0;i<3;i++)
//	{
//		printf("%d ",*(arr[i]));
//	}
//}
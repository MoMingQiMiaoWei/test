#include <stdio.h>
#include <stdlib.h>
//使用qsort进行排序
//int com_int(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int i=0;
//	int arr[10]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),com_int);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//浮点型使用qsort
//int com_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//void test2()
//{
//	int j=0;
//	float f[]={9.0,8.0,7.0,6.0,5.0};
//	int sz=sizeof(f)/sizeof(f[0]);
//	qsort(f,sz,sizeof(f[0]),com_float);
//	for(j=0;j<sz;j++)
//	{
//		printf("%f ",f[j]);
//	}
//}


//结构体使用qsort
struct stu
{
	char name[10];
	int age[10];
};
int com_stu_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void test3()
{
	struct stu s[3]={{"zhangs",18},{"lis",20},{"wangw",17}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),com_stu_age);
}
int main()
{
	/*test1();*/
	/*test2();*/
	test3();
	return 0;
}
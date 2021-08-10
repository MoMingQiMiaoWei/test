#include <stdio.h>
//  sizeof辨别
int main()
{
	//数组名是首元素地址
	//1.sizeof(数组名)-数组名表示整个数组
	//2.&数组名-数组名表示整个数组
	
	int a[]={1,2,3,4,5,6};
	printf("%d\n",sizeof(a));// 24 sizeof(数组名)计算的是数组的总大小，单位是字节
	printf("%d\n",sizeof(a+0));// 4/8 数组名表示首元素的地址，a+0还是首元素的地址，地址的大小4/8
	printf("%d\n",sizeof(*a));// 4 数组名表示首元素的地址，*a就是首元素，sizeof(*a)=4
	printf("%d\n",sizeof(a+1));// 4/8 数组名表示首元素的地址，a+0还是首元素的地址，地址的大小4/8
	printf("%d\n",sizeof(a[1]));// 4 第二个元素的大小
	printf("%d\n",sizeof(&a));// 4/8 &a取出数组的地址，数组的地址也是地址，地址的大小4/8
	printf("%d\n",sizeof(*&a));// 24 sizeof(*&a)=sizeof(a) &a就是取出a的地址，数组的地址解引用就是访问原数组
	printf("%d\n",sizeof(&a+1));// 4/8 &a是数组的地址，&a+1地址跳过整个数组，但计算的还是地址
	printf("%d\n",sizeof(&a[0]));// 4/8 &a[0]是第一个元素的地址
	printf("%d\n",sizeof(&a[0]+1));// 4/8 &a[0]+1是第二个元素的地址
    return 0;
}






//自定义冒泡排序（不只排整型）
//struct stu
//{
//	char name[10];
//	int age[10];
//};
//
//void Swap(char* bulf1, char* bulf2,int width)
// {
//	 int i=0;
//	 for(i=0;i<width;i++)
//	 {
//		 int temp = *bulf1;
//		 *bulf1 = *bulf2;
//		 *bulf2 = temp;
//		 *bulf1++;
//		 *bulf2++;
//	 }
// }
//void bubble_sort(void* base,int sz,int width,int (*comp)(void* e1,void* e2))
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(comp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
//		}
//	}
//}
//int comp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int i=0;
//	int arr[10]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz,sizeof(arr[0]),comp_int);
//	  //     （数组地址,元素个数,每个元素大小,函数指针）
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
////void test2()
////{
////	struct stu s[3]={{"zhangs",17},{"lis",16},{"wangw",20}};
////    int sz=sizeof(s)/sizeof(s[0]);
////	bubble_sort(s,sz,sizeof(s[0]),);
////}
//int main()
//{
//	test1();
//}
#include <stdio.h>
//  sizeof���
int main()
{
	//����������Ԫ�ص�ַ
	//1.sizeof(������)-��������ʾ��������
	//2.&������-��������ʾ��������
	
	int a[]={1,2,3,4,5,6};
	printf("%d\n",sizeof(a));// 24 sizeof(������)�������������ܴ�С����λ���ֽ�
	printf("%d\n",sizeof(a+0));// 4/8 ��������ʾ��Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ����ַ�Ĵ�С4/8
	printf("%d\n",sizeof(*a));// 4 ��������ʾ��Ԫ�صĵ�ַ��*a������Ԫ�أ�sizeof(*a)=4
	printf("%d\n",sizeof(a+1));// 4/8 ��������ʾ��Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ����ַ�Ĵ�С4/8
	printf("%d\n",sizeof(a[1]));// 4 �ڶ���Ԫ�صĴ�С
	printf("%d\n",sizeof(&a));// 4/8 &aȡ������ĵ�ַ������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С4/8
	printf("%d\n",sizeof(*&a));// 24 sizeof(*&a)=sizeof(a) &a����ȡ��a�ĵ�ַ������ĵ�ַ�����þ��Ƿ���ԭ����
	printf("%d\n",sizeof(&a+1));// 4/8 &a������ĵ�ַ��&a+1��ַ�����������飬������Ļ��ǵ�ַ
	printf("%d\n",sizeof(&a[0]));// 4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	printf("%d\n",sizeof(&a[0]+1));// 4/8 &a[0]+1�ǵڶ���Ԫ�صĵ�ַ
    return 0;
}






//�Զ���ð�����򣨲�ֻ�����ͣ�
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
//	  //     �������ַ,Ԫ�ظ���,ÿ��Ԫ�ش�С,����ָ�룩
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
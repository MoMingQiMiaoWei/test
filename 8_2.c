#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i]=0;
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while(left < right)
//	{
//	   int temp = arr[left];
//	   arr[left] = arr[right];
//	   arr[right] = temp;
//	   left++;
//	   right--;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i=0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	/*Init(arr,sz);*/
//	print(arr,sz);
//	Reverse(arr, sz);
//	print(arr,sz);
//	return 0;
//}


//int main()
//{
//	int arr1[]={1,3,5,7,9};
//	int arr2[]={2,4,6,8,10};
//	int temp = 0;
//	int i = 0;
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0; i<sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//		printf("%d ",arr1[i]);
//
//		printf("%d ",arr2[i]);
//	}
//}






//int count_bit(unsigned int n) //------  1.
//{
//	int count=0;
//	while(n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n=n/2;
//	}
//	return count;
//}
//int count_bit(int n) //---------  2.
//{
//	int count=0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if(((n>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_bit(int n)// -------- 3.
//{
//	int count=0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int count=0;
//	int a = 0;
//	scanf("%d",&a);
//	 count=count_bit(a);
//	printf("%d\n",count );
//	return 0;
//}



//int get_diff(int m, int n)
//{
//	int temp=m^n;
//	int count=0;
//	while(temp)
//	{
//		temp=temp&(temp-1);
//		count++	;
//	}
//	return count;
//}
//int main()
//{
//	int count=0;
//	int m=0;
//	int n=0;
//	scanf("%d%d",&m,&n);
//	count=get_diff(m,n);
//	printf("count=%d", count);
//	return 0;
//}
  


//二进制奇数位偶数位打印
//void print(int m)
//{
//	int i=0;
//	printf("奇数位为:");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//	printf("偶数位为:");
//	for(i=31;i>=1;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m=0;
//	scanf("%d",&m);
//	print(m);
//	return 0;
//}




//使用指针遍历数组
//void print(int* p,int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",*(p+i)); 
//	}
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}



//九九乘法表
//void print_table(int n)
//{
//	int i=0;
//	for(i=0;i<=n;i++)
//	{
//		int j=0;
//		for(j=0;j<=i;j++)
//		{
//			printf("%d*%d=%-3d",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	print_table(n);
//	return 0;
//}




//交换数组首尾元素   --------1.
//#include <string.h>
//void reverse_string(char arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int i=arr[left];
//		arr[left]=arr[right];
//		arr[right]=i;
//		left++;
//		right--;	
//	}	
//	printf("%s ",arr);
//}
//
//int main()
//{
//	char arr[]="abcdef";
//	int sz=strlen(arr);
//	reverse_string(arr,sz);
//	return 0;
//}
int main()
{
	char arr[]="abcdef";
	reverse_string(arr);
	return 0;
}
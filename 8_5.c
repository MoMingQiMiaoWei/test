#include <stdio.h>
//int main()
//{
//	int a=10;
//	float b=10.0;
//	
//	return 0;
//}



//int main()
//{
//	int a=1;
//	char* p=(char*)&a;
//	if(*p==1)
//	{
//		printf("这是小端\n");
//	}
//	else
//	{
//		printf("这是大端\n");
//	}
//	return 0;
//}


//int check_sys()
//{
//	int a=1;
//	return *((char*)&a);
//}
//int main()
//{
//	int ret=check_sys();
//	if(ret==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


////int main()
////{
////	int a=-1;
////	signed int b=-1;
////	unsigned int c=-1;
////	printf("a=%d b=%d c=%d",a,b,c);
////	return 0;
////}


//数组名是首元素地址
//void print(int arr[])//传参传的是数组的首地址（指针）
//{
//	int sz=sizeof(arr)/sizeof(arr[0]);//sizeof计算的是两个指针相除（4/4=1）
//	printf("%d ",sz);
//}
//int main()
//{
//	int arr[10]={0};
//	print(arr);
//	return 0;
//}



//int main()
//{
//	char* p="abcdef";
//	/**p='W';
//	printf("%s",p);*///段错误。
//	printf("%c\n",*p);
//	printf("%s\n",p);
//	return 0;
//}




//void print(int arr[3][5],int x,int y)//参数是数组的形式
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5],int x,int y)//参数是数组指针的形式
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",*(*(p+i)+j));//(*(p+i)[j])
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print(arr,3,5);
//	print2(arr,3,5);
//	return 0;
//}


//函数指针
//int Add(int x, int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	int(*p)(int, int)=Add;//函数指针定义
//	printf("%d\n", (*p)(2,3));
//}


//void Print(char* str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void(*p)(char*)=Print;//函数指针
//	(*p)("hello bit");//调用函数指针
//	return 0;
//}



int Add(int x, int y)
{
	int z=0;
	z=x+y;
	return z;
}
int Sub(int x, int y)
{
	int z=0;
	z=x-y;
	return z;
}
int Mul(int x, int y)
{
	int z=0;
	z=x*y;
	return z;
}
int Div(int x, int y)
{
	int z=0;
	z=x/y;
	return z;
}
int main()
{
	/*int* arr[5];
	int(*p)(int ,int)=Add;*/
	int (*parr[4])(int,int)={Add,Sub,Mul,Div};//函数指针数组
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d ",parr[i](2,3));
	}
	return 0;
}
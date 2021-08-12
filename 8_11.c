#include <stdio.h>
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int* ppr=(int*)(&a+1);//&a代表取出整个数组的地址，加1后跳过整个数组，
//	//强制类型转换成整型指针ppr，减1向前跳一个整型，解引用是5
//	printf("%d %d ",*(a+1),*(ppr-1));
//	return 0;
//}


//struct Test
//{
//	int num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p的值为0x100000，如下表达式的值？
////已知，结构体Test类型的变量大小是20个字节。
//int main()
//{
//	p=(struct Test*)0x100000;
//	printf("%p\n",p + 0x1);//结构体类型变量大小是20个字节，就是p加20写成16进制为00100014
//	//00100014    20 =  1*16^1+4*16^0  
//	printf("%p\n",(unsigned long)p + 0x1);//p被强制类型转换为整数，相当加1
//	//00100001
//	printf("%p\n",(unsigned int*)p + 0x1);//p是指针类型，加1就相当于加了4个字节
//	//00100004
//	return 0;
//}

//int main()
//{
//	int a[4]={1,2,3,4};
//	int* ptr1=(int*)(&a+1);
//	int* ptr2=(int*)((int)a+1);
//	printf("%x,%x",ptr1[-1],*ptr2);//%x——以十六进制数形式输出整数
//          // 4  ,  2000000 
//	return 0;
//}

//int main()
//{
//	int a[3][2]={(0,1),(2,3),(4,5)};//逗号表达式——整个表达是为最后一个表达式的值
//   //              1  ,  3  ,  5
//	int* p;
//	p=a[0];
//	printf("%d",p[0]);// 1
//	return 0;
//}



//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p=a;
//	printf("%p %d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
//	//   FFFFFFFC    -4
//	return 0;
//}

//
//int main()
//{
//	int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//	int* ptr1=(int*) (&aa+1);
//	int* ptr2=(int*)(*(aa+1));
//	printf("%d %d\n",*(ptr1-1),*(ptr2-1));
//	//      10  5
//	return 0;
//}



//int main()
//{
//	char* a[]={"work","at","alibaba"};
//	char** pa=a;
//
//	pa++;
//	printf("%s\n",*pa);
//	return 0;
//}


//int main()
//{
//	char* c[]={"ENTER","NEW","POINT","FIRST"};
//	char** cp[]={c+3,c+2,c+1,c};
//	char*** cpp=cp;
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n",*--*++cpp+3);//ER
//	printf("%s\n",*cpp[-2]+3);//ST
//	printf("%s\n",cpp[-1][-1]+1);//EW
//	return 0;
//}



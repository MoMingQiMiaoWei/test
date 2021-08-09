#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void menu()
{
	printf("********************\n");
	printf("** 1.add    2.sub **\n");
	printf("** 3.mul    4.div **\n");
	printf("**     0.exit     **\n");
	printf("********************\n");
}
int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x/y;
}

void calc(int (*pf)(int ,int))//回调函数------- 1
{
	int a=0;
	int b=0;
      printf("请输入两个操作数>");
		scanf("%d%d",&a,&b);
			printf("%d\n",pf(a,b));
}
int main()
{
	int input=0;
	
	do
	{
		menu();
		printf("请选择> ");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误!\n");
			break;
		}
	}while(input);
}


//int main()//----- 2
//{
//	int input=0;
//	int a=0;
//	int b=0;
//	int ret=0;
//	int (*perff[])(int,int)={0,Add,Sub,Mul,Div};//函数指针数组--转移表
//	do
//	{
//		menu();
//		printf("请选择> ");
//		scanf("%d",&input);
//		if(input>0 && input<4)
//		{
//			printf("请输入两个操作数>");
//		    scanf("%d%d",&a,&b);
//		    ret= perff[input](a,b);
//			printf("%d\n",ret);
//		}
//		else if(input==0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误!\n");
//		}
//	}while(input);
//}

//int main()//-----------  3
//{
//	int input=0;
//	int a=0;
//	int b=0;
//	do
//	{
//		menu();
//		printf("请选择> ");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			printf("请输入两个操作数>");
//		scanf("%d%d",&a,&b);
//			printf("%d\n",Add(a,b));
//			break;
//		case 2:
//			printf("请输入两个操作数>");
//		scanf("%d%d",&a,&b);
//			printf("%d\n",Sub(a,b));
//			break;
//		case 3:
//			printf("请输入两个操作数>");
//		scanf("%d%d",&a,&b);
//			printf("%d\n",Mul(a,b));
//			break;
//		case 4:
//			printf("请输入两个操作数>");
//		scanf("%d%d",&a,&b);
//			printf("%d\n",Div(a,b));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误!\n");
//			break;
//		}
//	}while(input);
//}
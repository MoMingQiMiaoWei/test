#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
////字符串的逆序
//void reverse(char* str)
//{
//	int len=strlen(str);
//
//	char* left = str;
//	char* right = str + len -1;//最后一个元素的地址等于首地址加长度减一
//
//    while (left<right)
//	{
//            char temp = *left;
//			*left = *right;
//			*right = temp;
//			left++;
//			right--;			
//	}
//}
//int main()
//{
//	char arr[256]="0";
//	/*scanf("%s",arr);*/
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//a+aa+aaa+aaa+……
//int main()
//{
//	int a=0;
//	int n=0;
//	
//	int sum=0;
//	int i=0;
//	int ret=0;
//	scanf("%d%d",&a,&n);
//	for(i=0;i<n;i++)
//	{
//		ret=ret*10+a;
//		sum+=ret;
//	}
//	printf("%d",sum);
//	return 0;
//}

//
//#include <math.h>
////判断100000以内的自幂数（水仙花数）
//int main()
//{
//	int i=0;
//	for(i=0;i<100000;i++)
//	{
//		//1.判断一个数是几位数
//		int n=1;
//		int tmp= i;
//		int sum=0;//while循环可直接写成：
//		while(tmp/=10)   //while(tmp/10)
//		{               //{
//			n++;        // n++;
//			            // tmp/=10;
//		}               //}
//	    //2.计算i的每一为n次方之和
//		tmp=i;
//		while(tmp)
//		{
//			sum+=pow(tmp%10,n);
//			tmp/=10;
//		}
//		//判断i和sum
//		if(i==sum)
//		{
//			printf("%d ",sum);
//		}
//	}
//	return 0;
//}



////打印菱形图案
//int main()
//{
//	int line =0;
//	int i=0;
//	scanf("%d",&line);
//	//上半部分
//	for(i=0;i<line;i++)
//	{
//		int j=0;
//		for(j=0;j<line-1-i;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)
//		{
//			printf("*");
//		}
//        printf("\n");
//	}
//	//下半部分
//	for(i=0;i<line-1;i++)
//	{
//		int j=0;
//		for(j=0;j<=i;j++)
//		{
//			printf(" ");
//		}
//	    for(j=0;j<2*(line-1-i)-1;j++)
//		{
//			printf("*");
//		}
//        printf("\n");
//	}
//	return 0;
//}


//喝汽水问题：20元钱,一元一瓶汽水，两个空瓶换一瓶汽水，最多喝几瓶？
//if(money!=0)
//   total=0;
//else
//    total=2*money-1;
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d",&money);
//	total=money;
//	empty=total;
//	while(empty>=2)
//	{
//		total=total+empty/2;
//		empty=empty/2+empty%2;
//	}
//	printf("total=%d\n",total);
//	return 0;
//}


//交换一个数组中的奇偶数，奇数在前，偶数在后
//void print(int arr[],int sz)
//{
//  int i=0;
//  for(i=0;i<sz;i++)
//  {
//	  printf("%d ",arr[i]);
//  }
//}
//void Move(int arr[],int sz)
//{
//	int right=sz-1;
//	int left=0;
//	while(left<right)
//	{
//		while((left<right)&&(arr[left]%2==1))
//	    {
//		left++;
//	    }
//	    while((left<right&&(arr[right]%2==0)))
//	    {
//		right--;
//	     }
//	   if(  left<right)
//	   {
//		int temp = arr[left];
//		arr[left]=arr[right];
//		arr[right]=temp;
//	    }
//	}
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	Move(arr,sz);
//	print(arr,sz);
//	return 0;
//}

//打印杨辉三角
//int main()
//{
//	int arr[10][10]={0};
//	int i = 0;
//	int j = 0;
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<10;j++)
//		{
//			if(j==0)
//			{
//				arr[i][j]=1;
//			}
//			if(i==j)
//			{
//				arr[i][j]=1;
//			}	
//			if(i>=2&&j>=1)
//			{
//				arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
//			}
//		}
//	}
//
//	 for(i=0;i<10;i++)
//	   {
//	   for(j=0;j<=i;j++)
//	    {
//			printf("%d ",arr[i][j]);
//		}
//	   printf("\n");
//	}
//	return 0;
//}


int main()
{
	int killer=0;
	for(killer='a';killer<='d';killer++)
	{
       if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
	   {
		   printf("killer=%c\n",killer);
	   }
	}
	return 0;
}
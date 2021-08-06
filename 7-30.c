#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b= b^a;
//	a = a^b;
//	printf("a=%d, b=%d \n",a, b);
//	return 0;
//}
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	scanf ("%d", &num); 
	for (i = 0; i < 32; i++)
	{
		if (1==((num >> i)  & 1))
			count++;
	}
	printf("%d\n" , count);
	return 0;
}
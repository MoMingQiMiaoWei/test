#include <stdio.h>
#include <assert.h>
#include <string.h>


//memcpy()函数自实现  内存拷贝
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//struct s
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct s arr3[] = { {"zhangs",20}, {"lis",19}};
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	/*int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));*/
//	return 0;
//}



//memmove()函数自实现  重叠内存的拷贝
//void* my_memmove(void* dest, const void* src,size_t num)
//{
//	void* ret = 0;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if(dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//memcmp()函数  内存比较
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {1,2,3,4,6};
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//}


//memset()  内存设置
int main()
{
	int i = 0;
	char arr[10] = {0};
	memset(arr,'#',10);
	for (i = 0; i < 10; i++)
	{
		printf("%s ", arr[i]);
	}
}
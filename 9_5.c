#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//char fun(char* arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	while (arr[i] == '*')
//	{
//		i++;
//		j++;
//	}
//	if (i > n)
//	{
//		return *arr[j];
//	}
//
//}
//int main()
//{
//	int n = 0;
//	char arr[] = "*******A*BC*DEF*G****";
//	scanf("%d", &n);
//	fun(arr, n);
//	printf("%s\n", arr[n]);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
//int search(int* nums, int numsSize, int target) {
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (target == nums[i])
//        {
//            return 1;
//        }
//        else
//        {
//            return -1;
//        }
//    }
//}
//int main()
//{
//    int ret = 0;
//    int sz = 0;
//    int n = 0;
//    int nums[] = { 1,3,4,5,6,7 };
//    sz = sizeof(nums) / sizeof(nums[0]);
//    printf("请输入nums和n:");
//    //scanf("%d%d\n", nums, &n);
//    scanf("%d", &n);
//    ret=search(nums, sz, n);
//    if (ret==1)
//    {
//        printf("数字n在nums中并且下标是:%d\n", nums[n]);
//    }
//
//    else if(ret == -1)
//    {
//        printf("找不到");
//    }
//    return  0;
//}

int balancedStringSplit(char* s)
{
    int num = 0;
    int n = 0;
    int res = 0;
    while (s[n] != '\0')
    {
        if (s[n] == 'R')
        {
            num++;
        }
        if (s[n] == 'L')
        {
            num--;
        }
        if (num == 0)
        {
            res++;
        }
        n++;
    }
    return res;
}
int main()
{
    int ret = 0;
    char arr[100] = { 0 };
    scanf("%s", arr);
    ret = balancedStringSplit(arr);
    printf("%d\n", ret);
    return 0;
}
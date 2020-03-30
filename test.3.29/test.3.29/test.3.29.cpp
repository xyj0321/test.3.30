#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//#include<string.h>
//int main()
//{
//	const char arr[] = { "abcdef" };
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//int my_strlen(const char*str)//模拟库函数strlen
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//}
//int main()
//{
//	const char*p = "abcdef";
//	int len = my_strlen(p);
//	printf("len=%d\n", len);
//	return 0;
//}
//库函数strcpy
#include<string.h>
//int main()
//{
//	char arr1[] = "lalalalala";
//	char arr2[30];
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//		return 0;
//}
//模拟库函数strcpy
//char*my_strcpy(char*dest, const char*src)
//{
//	char*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}return ret;
//}
//int main()
//{
//	char arr1[] = "lalalalala";
//	char arr2[30];
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
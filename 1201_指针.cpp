#include<iostream>

int main() {

	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));

	char arr1[] = "abcdef";
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr1 + 0));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr1 + 0));

	const char* p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));

	return 0;
}
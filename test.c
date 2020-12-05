//数据类型大小
//#include<stdio.h>
//
//int main() {
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}


//全局变量与局部变量
//#include <stdio.h>
//int global = 2019;//全局变量
//int main()
//{
//	int local = 2018;//局部变量
//	int global = 2020;//局部变量
//	printf("global = %d\n", global);//2020
//	return 0;
//}


//变量的使用
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//
//int main() {
//	int num1 = 0; 
//	int num2 = 0;
//	int sum = 0;
//
//	printf("输入数据:_>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//
//	return 0;
//}


//转义字符
//#include <stdio.h>
//int main()
//{
//	printf("c:\code\test.c\n");//实际输出c:code  est.c
//	//\t 水平制表符  //\' 用于表示字符常量'
//  //\“ 用于表示一个字符串内部的双引号
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));//6
//	// \32被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//	return 0;
//}

//函数
//#include<stdio.h>
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	printf("%d\n", Add(2, 7));
//	return 0;
//}


//数组
//#include<stdio.h>
//int main() {
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < 10; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

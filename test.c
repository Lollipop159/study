//�������ʹ�С
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


//ȫ�ֱ�����ֲ�����
//#include <stdio.h>
//int global = 2019;//ȫ�ֱ���
//int main()
//{
//	int local = 2018;//�ֲ�����
//	int global = 2020;//�ֲ�����
//	printf("global = %d\n", global);//2020
//	return 0;
//}


//������ʹ��
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//
//int main() {
//	int num1 = 0; 
//	int num2 = 0;
//	int sum = 0;
//
//	printf("��������:_>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//
//	return 0;
//}


//ת���ַ�
//#include <stdio.h>
//int main()
//{
//	printf("c:\code\test.c\n");//ʵ�����c:code  est.c
//	//\t ˮƽ�Ʊ��  //\' ���ڱ�ʾ�ַ�����'
//  //\�� ���ڱ�ʾһ���ַ����ڲ���˫����
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));//6
//	// \32��������һ��ת���ַ�
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//	return 0;
//}

//����
//#include<stdio.h>
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	printf("%d\n", Add(2, 7));
//	return 0;
//}


//����
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

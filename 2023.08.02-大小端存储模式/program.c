#define  _CRT_SECURE_NO_WARNINGS  1
#pragma  warning(disable:6031)

#include<stdio.h>

//int main()
//{
//	int a = 1;
//	char* p = (char*) & a;
//	if (*p == 1)
//		printf("С�˴洢ģʽ");
//	else
//		printf("��˴洢ģʽ");
//	return 0;
//}

//int main()
//{
//	float b = 0.0;
//	float a = 1.0;
//	float c = a / b;
//	printf("%d\n", sizeof(b));
//	printf("%f", c);
//}

int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (p1 == p2)
		printf("1");
	else
		printf("0");
}
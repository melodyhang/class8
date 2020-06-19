#include <stdio.h>
#include<stdlib.h>
int main()
{
	/*指针*/
	/*
	int num = 8;
	int * ptr_num = &num;
	//头疼点：指针的指针，定义式需要两个*号
	int ** ptr_num2 = &ptr_num;

	//%p指针占位符	%x进制占位符
	printf("num变量的地址是：%x\n",ptr_num);
	printf("num变量的地址是：%p\n", &num);
	printf("指针ptr_num的地址：%p\n", ptr_num2);
	//如何通过指针的指针，访问到原指针指向的空间
	printf("原空间的num对应的值是：%d\n", **ptr_num2);

	//使用指针修改变量值
	*ptr_num = 9999;
	printf("*ptr_num对应的值为：%d\n", num);
	return 0;
	*/


	int num1 = 1024;
	int num2 = 2048;
	int* ptr1;
	int* ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("num1的值是%d\tnum1的地址是：%p\n", num1, ptr1);
	printf("num2的值是%d\tnum2的地址是：%p\n", num2, ptr2);
	//将变量1的值，赋给变量2
	//num2 = num1; //等价于 *ptr2 = *ptr1;
	//直接操作指针
	ptr1 = ptr2;
	printf("重新赋值后：\n");
	printf("num1的值是%d\tnum1的地址是：%p\n", num1, ptr1);
	printf("num2的值是%d\tnum2的地址是：%p\n", num2, ptr2);

}
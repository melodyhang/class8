#include <stdio.h>
#include<stdlib.h>
int main()
{
	/*ָ��*/
	int num = 8;
	int * ptr_num = &num;
	//ͷ�۵㣺ָ���ָ�룬����ʽ��Ҫ����*��
	int ** ptr_num2 = &ptr_num;

	//%pָ��ռλ��	%x����ռλ��
	printf("num�����ĵ�ַ�ǣ�%x\n",ptr_num);
	printf("num�����ĵ�ַ�ǣ�%p\n", &num);
	printf("ָ��ptr_num�ĵ�ַ��%p\n", ptr_num2);
	//���ͨ��ָ���ָ�룬���ʵ�ԭָ��ָ��Ŀռ�
	printf("ԭ�ռ��num��Ӧ��ֵ�ǣ�%d\n", **ptr_num2);

	//ʹ��ָ���޸ı���ֵ
	*ptr_num = 9999;
	printf("*ptr_num��Ӧ��ֵΪ��%d\n", num);
	return 0;

}
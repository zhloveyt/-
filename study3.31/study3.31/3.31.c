
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

	enum sex//枚举类型后面不需要封号；
{
		MALE,
		FEMALE,
		SECRET
};
int main()
{
	enum sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	system("pause");
	return 0;
}
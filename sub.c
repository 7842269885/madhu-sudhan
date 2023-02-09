#include<stdio.h>
int main()
{
	int number1,number2,sub;
	printf("enter the integer:");
	scanf("%d%d",&number1,&number2,&sub);
	sub = number1 - number2;
	printf("the sub of two integer are:%d -%d=%d",number1,number2,sub);
	return 0;
}

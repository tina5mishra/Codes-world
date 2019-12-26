#include <stdio.h>
int main()
{
	int a = 20,b = 30;
	printf("a=%d,b=%d\n",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("a=%d,b=%d\n",a,b);
}
output
a = 20 , b = 30
b = 30 , b = 20

swappingg without third variable

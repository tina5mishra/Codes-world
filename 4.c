#include <stdio.h>
void main()
{
	int i;
	int a[5] = {10,20,30,40,50};
	for (i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("%d",a+0);
	printf("%d",a+1);
}


output:-
10
20
30
40
50
64876006487604



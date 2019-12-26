#include<stdio.h>
#include<string.h>
void main()
{
	struct employee
	{
		int Eid;
		char name[50];
	};
	struct employee e;
	e.Eid = 100;
	strcpy(e.name,"Ajay");
	printf("Employee ID = %d\n",e.Eid);
	printf("First Name = %s\n",e.name);
}

output:- 
Employee ID = 100
First Name = Ajay

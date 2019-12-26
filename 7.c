#include<stdio.h>
#include<string.h>
void main()
{
	typedef char string[50];
	string firstName;
	string lastName;
	strcpy(firstName,"Ajay");
	strcpy(lastName,"kumar");
	printf("%s %s",firstName,lastName);
}

output:- Ajay Kumar



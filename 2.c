#include<stdio.h>
void main()
{
	int a = 4;
	int b = 5;
	int c = 13;
	if(a==1 & b==2)
	{
		if(c==6)
		{
			printf("pa");
	    }
	    else if(c==7)
	    {
	    	printf("qa");
		}
	}
	else if(a==2 & b==3)
	{
		if(c==8)
		{
			printf("rb");
	    }
	    else if(c==9)
	    {
	    	printf("sb");
		}
	}
	else if (a==3 & b==4)
	{
		if(c==10)
		{
			printf("tc");
	    }
	    else if(c==11)
	    {
	    	printf("uc");
		}
	}
	else if (a==4 & b==5)
	{
		if(c==12)
		{
			printf("vd");
	    }
	    else if(c==13)
	    {
	    	printf("wd");
		}
	}
	else
	{
		printf("invalid");
	}

}

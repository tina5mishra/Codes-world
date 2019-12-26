#include<stdio.h>
enum Direction{EAST,WEST,NORTH,SOUTH};
void main()
{
	enum Direction dir;
	for(dir = EAST;dir <= SOUTH;dir++)
	{
		printf("%d",dir);
	}
}

OUTPUT;- 0123



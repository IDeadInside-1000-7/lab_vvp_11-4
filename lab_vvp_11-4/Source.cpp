#include <stdio.h>
int main()
{
	int X, Y;
	printf("Enter coordinates of the point\n");
	printf("X = ");
	scanf("%i", &X);
	printf("Y = ");
	scanf("%i", &Y);
	if ((X == 0) || (Y == 0))
		printf("You should enter coordinate not equal 0!!!");
	else
	{
		if ((X > 0) && (Y > 0))
			printf("I quarter");
		else if ((X < 0) && (Y > 0))
			printf("II quarter");
		else if ((X < 0) && (Y < 0))
			printf("III quarter");
		else if ((X > 0) && (Y < 0))
			printf("IV quarter");
	}
}

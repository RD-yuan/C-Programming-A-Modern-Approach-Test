#include <stdio.h>
#define PI 3.14f
int main()
{
	int radius = 10;
	float volume = 4.0f / 3.0f * PI * radius * radius * radius;

	printf("The volume of ball is %f cubic metre.", volume);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
 float velocity,acceleration,deceleration,time;
 printf("Enter the velocity:\n");
 scanf("%f",&velocity);
 printf("Enter the time:\n");
 scanf("%f",&time);
 acceleration = velocity/time;
 printf("The acceleration is %f", acceleration);
 return 0;
}

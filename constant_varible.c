// constant in c langauge:-
// wap to print area of circle.
//area= pi*r*r
#include<stdio.h>
void main()
{	
  const float pi=3.141;
  float radius,area;
  printf("enter a circle radius:");
  scanf("%f",&radius);
  area=pi*radius*radius;
  printf("area of circle = %.2f",area); 
}

//enum example
#include<stdio.h>
enum day{mon=12,tue,wed,thur=67,fri,sat,sun};
enum status{workig=1,notworking=0};
void main()
{
 printf("mon = %d\n",mon);
 printf("tue = %d\n",tue);
 printf("wed = %d\n",wed);
 printf("thu = %d\n",thur);
 printf("fri = %d\n",fri);
 printf("sat = %d\n",sat);
 printf("sun = %d\n",sun);
}

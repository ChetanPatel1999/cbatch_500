//example of modules operator
#include<stdio.h>
void main()
{
int a=1,b=12,ans;
ans=a>b;
printf("%d > %d = %d\n",a,b,ans);//0
ans=a<b;
printf("%d < %d = %d\n",a,b,ans);//1
ans=a<=b;
printf("%d <= %d = %d\n",a,b,ans);//1
ans=a>=b;
printf("%d >= %d = %d\n",a,b,ans);	//0
ans=a==b;
printf("%d == %d = %d\n",a,b,ans);//0
ans=a!=b;
printf("%d != %d = %d\n",a,b,ans);//1



}

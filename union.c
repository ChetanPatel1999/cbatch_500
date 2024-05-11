//structure example in c language
#include<stdio.h>
#include<string.h>
union pen
{
  char name[12];//
  int price;
  float rating;
};
void main()
{
  union pen p1,p2,p3;
  printf("size of p1 : %d\n",sizeof(p1));//12
  strcpy(p1.name,"cello");
  p1.price=5;
  p1.rating=3.4;
  printf("pen info :\n");
  printf("pen name : %s\n",p1.name);
  printf("pen price : %d\n",p1.price);
  printf("pen rating : %.1f\n",p1.rating);
}
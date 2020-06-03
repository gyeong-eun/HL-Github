/*#include<stdio.com>

int main()
{
   printf("hellow world");
   return 0;
}*/
#include<stdio.h>

int main()
{
	int x,y,z,res;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
    res=((x+y)*z)/x;
	printf("%d",res);
	return 0;
}

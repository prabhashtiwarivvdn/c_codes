#include<stdio.h>
void main()
{
int i,n;
printf("enter no to print factors of\n");
scanf("%d", &n);
printf("factors are:-");
for(i=1;i<=(n/2);i++)
{
if(n%i==0)
printf("%d\n", i);
}

}

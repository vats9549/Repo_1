#include<stdio.h>
int main()
{int i,j,h,t;
int arr1[5];
printf("enter 5 elements\n");
for(h=0;h<5;h++)
{scanf("%d",&arr1[h]);}
for(i=0;i<4;i++)
{if(arr1[i]<arr1[i+1])
{for(j=i;j<4;j++)
    arr1[j]=arr1[j+1];}
arr1[5- ]='\0';
i--;
}
for(t=0;t<5;t++)
{printf("%d\t",arr1[t]);

}}

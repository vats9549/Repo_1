#include<stdio.h>
int m=0;

void toi(int n,char source,char temp,char destination)
{
if(n==1)
{	printf("Disc 1 from %c to %c\n",source,destination);
	m++;
	return ;
}
toi(n-1,source,destination,temp);
	printf("Disc %d from %c to %c\n",n,source,destination);
	m++;

toi(n-1,temp,source,destination);
}
int main()
{int f,z;
char A,B,C;
printf("enter no.");
scanf("%d",&f);
toi(f,'A','B','C');
printf("%d",m);
}

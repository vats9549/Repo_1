#include <stdio.h>
int main()
{int arr[100][100];
int i,j,k,n,x;
printf("Enter order of the matrix\n");
scanf("%d\n",&n);
printf("Enter the elements of the matrix\n");
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{scanf("%d",&arr[i][j]);}
}
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{printf("%d\t",arr[i][j]);}
printf("\n");}
x = det(arr,n);
printf("%d",x);}
int det(int arr[100][100], int n)
{int Minor[100][100];
int i,j,k,t,z;
int detr;
int c[100];
int l=1;
detr = 0;
if(n == 2)
{detr = arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
 return detr;}
else
{for(i = 0 ; i < n ; i++)
{t=0,z=0;
for(j = 0 ; j < n ; j++)
{for(k = 0 ; k < n ; k++)
{if(j!=0 && k != i)
{Minor[t][z] = arr[j][k];
z++;
if(z>n-2)
{t++;
z=0;}}}}
detr = detr + l*(arr[0][i]*det(Minor,n-1));
l=-1*l;
}}
return detr;
}

#include<stdio.h>
#include<math.h>
void main()
{

int a[100][100],i,m,n,s=0,j,norm=0,sum=0;
    printf("Enter dimensions of matrix: ");
    scanf("%d",&n);
    printf("Enter numbers : ");
        for(i=0;i<n;i++)
        { for(j=0;j<n;j++)
                {
                    scanf("%d",&a[i][j]);
                }

        }
            for(i=0;i<n;i++)
                { for(j=0;j<n;j++)
                        {
                            printf("%d\t",a[i][j]);
                        }
                        printf("\n");
                }
                    for(i=0;i<n;i++)
                    {
                        for(j=0;j<n;j++)
                            {  if(i==j)
                                s=s+a[i][j];
                            }

                    }
                    printf("Trace is %d\n",s);

                  for(i=0;i<n;i++)
                            {for(j=0;j<n;j++)
                                    {  sum=sum+a[i][j]*a[i][j];
                                        norm=sqrt(sum);
                                    }

                            }
                    printf("Norm is %d\n",norm);





}

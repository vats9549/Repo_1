#include<stdio.h>
void main()
{

    int a[100][100],b[100][100],c[100][100],i,m,n,k,j,p,q;
    printf("Enter dimensions of matrix A: ");
    scanf("%d%d",&n,&m);
    printf("Enter dimensions of matrix B: ");
    scanf("%d%d",&p,&q);
    printf("Enter numbers in A : ");
        for(i=0;i<n;i++)
        { for(j=0;j<m;j++)
                {
                    scanf("%d",&a[i][j]);
                }
        }
        printf("matix A is \n");
        for(i=0;i<n;i++)
        { for(j=0;j<m;j++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
        }


          printf("Enter numbers in B : ");
         for(i=0;i<p;i++)
        { for(j=0;j<q;j++)
                {
                    scanf("%d",&b[i][j]);
                }
        }



              printf("Matrix B is\n");
               for(i=0;i<p;i++)
                { for(j=0;j<q;j++)
                        {
                            printf("%d\t",b[i][j]);
                        }
                        printf("\n");
                }
        if(m==p)
               {

                    for(i=0;i<n;i++)
                    { for(j=0;j<q;j++)
                        {
                           c[i][j]=0;
                                for(k=0;k<m;k++)
                                {
                                    c[i][j]= c[i][j]+a[i][k]*b[k][j];
                                }

                        }

                    }
               }
               printf("\n");printf("\n");

                for(i=0;i<n;i++)
                { for(j=0;j<q;j++)
                        {
                            printf("%d\t",c[i][j]);
                        }
                        printf("\n");
                }

}

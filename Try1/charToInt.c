#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
 
 
int main(int argc, _TCHAR* argv[])
{
    int intArry[2];
    char strArry[3];    //Extra for Null terminate
    int i;
 
    printf("Enter two integers: \n");
 
    scanf("%s", strArry);
 
    for (i=0;i<2;i++)
    {
        intArry[i] = atoi(&strArry[i]);
    }
 
    printf("%d%d" , intArry[0],intArry[1]);
 
    return 0;
}

#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
 int main(){
    string str="";
    cin >> str;
    char Subarr1[str.length()/2+1],Subarr2[str.length()/2+1];
    char arr[str.length()+1];
    strcpy(arr , str.c_str());

        for(int i=0;i<str.length()/2 ;i++)
        {
            Subarr1[i]=arr[i];
            Subarr2[str.length()/2-i-1]=arr[str.length()-i];
        }

    for(int i=0;i<str.length()/2;i++){
        cout<<Subarr1[i]<<endl;
        cout<<Subarr2[i]<<endl;
    }
    for(int i=0;i<str.length()/2;i++){
        for(int j=0;j<str.length()/2;j++){

        }
    }
    return 0;
    }

#include<iostream>
using namespace std;

int main(){
    int n,num,rev;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num;
        rev=0;
        do{

            rev=10*rev + num%10;
            num=num/10 ;
        }
        while(num>0);
        cout << rev<<endl;
    }

    }

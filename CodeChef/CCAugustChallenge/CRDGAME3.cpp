#include<iostream>
using namespace std;
int main(){
    int T,PC,PR,C,R;
    cin>>T;
    for(int i=0;i<T;i++){
        cin<<PC<<PR;
        if(PC%9){
            C=1;
        }
        if(PR%9){
            R=1;
        }
        if(PC/9>PR/9){
            printf("%d %d",0,PC/9+C);
        }
        else if(PC/9<PR/9){
            printf("%d %d",1,PR/9+R)
        }
        else if(PC/9=PR/9){
            printf("%d %d",1,PR/9+R)
        }
    }


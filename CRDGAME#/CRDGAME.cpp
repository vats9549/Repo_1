#include<iostream>
using namespace std;
int main(){
    int T,PC,PR,C,R;
    cin>>T;
    for(int i=0;i<T;i++){
        C=0;
        R=0;
        cin>>PC>>PR;
        if(PC%9){
            C=1;
        }
        if(PR%9){
            R=1;
        }
        if(PC/9>PR/9){
            printf("%d %d\n",1,PR/9+R);
        }
        else if(PC/9<PR/9){
            printf("%d %d\n",0,PC/9+C);
        }
        else if(PC/9==PR/9){
            printf("%d %d\n",1,PR/9+R);
        }
    }
}



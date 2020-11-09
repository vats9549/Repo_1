#include<iostream>
using namespace std;
 int main(){
    int T,N,K;
    int MaxId;
    int Max

    for(int i = 0;i<T;i++){
        cin >>N>>K;
        int P[N];
        Max=-1;
        for(int j=0;j<N;j++){
            cin>>P[j];
        }
        for(int k=0;k<N;k++){
            if((K%P[i]==0)&(P[i]>Max)){
                Max=P[i];
                MaxId=k+1;
            }
        }
        cout<<MaxId<<endl;

        }
    }
 }

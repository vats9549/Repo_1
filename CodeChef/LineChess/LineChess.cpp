#include<iostream>
using namespace std;
 int main(){
    int T,N,K,a,temp;
    cin >>T;
    int MinId;
    int Min;
    for(int i=0;i<T;i++){
        MinId=-1;
        cin >>N>>K;
        int P[N];
        Min=2147483647;
        for(int j=0;j<N;j++){
            cin>>P[j];
        }
        bool flag=false;
	    int temp,a;
	    for(int i=0;i<N;i++){
	        if(K%P[i]==0){
	            flag=true;
	            temp=K/P[i]-1;
	            if(Min>temp)
	            {Min=temp;
	                a=P[i];
	            }
	        }
	    }
	    if(flag)
	    cout<<a<<"\n";
	    else
	    cout<<"-1"<<"\n";
	}
	return 0;
 }

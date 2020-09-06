#include <iostream>

using namespace std;

int main()
{   int t,N,Count;
    cin >>t;
    while(t--){
        Count=0;
        cin >>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin >>A[i];
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if((i<j)&((A[i]&A[j])==A[i])){
                    Count++;
                    }
                }
            }
        cout<<Count<<endl;
    }
    return 0;
}

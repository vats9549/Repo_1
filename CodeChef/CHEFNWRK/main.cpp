#include <bits/stdc++.h>

using namespace std;

int main()
{   int t,n,k,turn,sum;
    cin >>t;

    while(t--){
    turn=0;
    sum=0;
    cin>>n>>k;
    int Arr[n];
    for(int i=0; i<n ; i++){
        cin>>Arr[i];
        }
    for(int i=0;i<n;i++){
        if(Arr[i]<=k){


            if(sum+Arr[i]<=k){
                    sum+=Arr[i];
                    if(i==n-1){
                        turn++;
                    }
                }
            else{
                    turn++;
                    sum=Arr[i];
                    if((sum<k)&(i=n-1)){
                        turn++;
                    }
                }

            }
        else{
                turn=-1;
                break;

            }

        }

        cout<<turn<<endl;
    }


    return 0;
}

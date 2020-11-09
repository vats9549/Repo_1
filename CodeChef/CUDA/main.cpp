#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int IntrestArray(int arr[], int n){

    int start=1;
    int count=0;
    int min;
    for(int i=0;i<n;i++){
        min=arr[i];
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
            }
            if((j=n-1)&(arr[i]!=min)){
                swap(&arr[i],&arr[j]);
                count++;
            }

        }
    }
    return(count);
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Ans=IntrestArray(arr,n);
    cout<<Ans;
    return 0;
}
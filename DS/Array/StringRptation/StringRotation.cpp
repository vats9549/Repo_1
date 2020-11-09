#include<iostream>
using namespace std;
void Func(int arr[], int m , int n){  /*Function to left Rotate arr[] of  
                                        size n by 1 m times*/
    int swap; 
    for(int i = 0; i<m; i++){
        swap = arr[0];
        for(int j = 0 ; j<n ; j++){
            arr[j]=arr[j+1];
        }
        arr[n-1] = swap ;
    }
    for(int i =0;i<10 ;i++){
        cout<<arr[i] ;
    }
}
int main(){
    int arr[10] , m;
    for(int i =0;i<10 ;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]) ;
    cin>>m; 
    int* arr1 = new int(10);
    Func( arr , m , n);
    
}

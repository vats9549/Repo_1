#include<iostream>
#include <bits/stdc++.h>
using namespace std ;
 int main(){
     int t , n , c1;
     
     cin >> t;
     while(t--){
         c1 = 0 ;
         cin >> n;
         int arr[n] ;
         for(int i = 0; i<n;i++){
             cin >>arr[i];
         }
         for(int j = 0 ; j<n ; j++){
             if(arr[j] == 0){
                 c1++ ;
             }
         }
         if(c1 > 30){
             cout << "NO"<<endl ;
         }
        else{
            cout << "YES"<<endl ;
        }
         


     }
 }
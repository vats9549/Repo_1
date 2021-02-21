#include<bits/stdc++.h>
using namespace std;
bool three(int arr[], int n){
   int rem = 0;
   for(int i = 0; i<n; i++){
      rem = (rem + arr[i]) % 3;
   }
   if(rem == 0){
      return true;
   }
   return false;
}
bool nine(int arr[], int n){
   int rem = 0;
   for(int i = 0; i<n; i++){
      rem = (rem + arr[i]) % 9;
   }
   if(rem == 0){
      return true;
   }
   return false;
}
bool two(int num){
    if((num/10)%2 == 0){
        return true ;
    }
    else{
        return false ;
    }
}
bool four(int num){
    if((num/100)%4 == 0){
        return true
    }
}
int main(){
    int t;
    cin >> t ;


}
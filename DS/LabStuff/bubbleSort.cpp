#include<iostream>
using namespace std;
void swapping(int &a, int &b){
    b = a + b ;
    a = b - a ;
    b = b - a ;
}

void bubbleSort(int *array, int n)
{
    for(int i = 0 ; i< n ; i++){
        int swaps = 0;
        for(int j = 0; j< n-i-1 ; j++){
            if(array[j] > array[j+1] ) {
                swapping(array[j], array[j+1]) ;
                swaps = 1 ;

            }
            
        }
        if(!swaps){
             break ;
        }

    }
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
int main(){
    int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   bubbleSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
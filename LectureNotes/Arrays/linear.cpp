#include <iostream>
using namespace std ;

//Linear search Alogrithm 
int main() {
    int n ; 
    int target ;
    cout << "Enter the size of the array : " << endl ;
    cin >> n ; 
    int arr[n];
    cout << "Enter " << n << " number to store in an array ! "  << endl ; 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << "Enter the target value to search in the array ! " << endl ; 
    cin >> target ; 
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == target ){
            cout << "Target value found at index " << i << endl ; 
            return i 
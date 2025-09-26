#include <iostream>
using namespace std ;

// Reverse an array 
int main(){
    int n ;
    cout << "Enter the size of the array : " << endl ; 
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[1];
    }
    for(int i = 0 ; i < n / 2 ; i++){
        swap(arr[i] , arr[n - i - 1]);
    }
    return 0 ; 
}
#include <iostream>
#include <vector>
using namespace std ;

bool isValid(vector<int> &arr , int n , int m , int maxAllowedTime){
    int painterCount = 1 ; timeSum = 0 ;
    for(int i = 0 ; i < n ; i++){
      if(m > n) return false ;
      if(timeSum + arr[i] <= maxAllowedTime){
      timeSum += arr[i] ;
      }else{
     painterCount++ ;
     if(painterCount > m || arr[i] > maxAllowedTime) {
    return false ;
} else {
      timeSum = arr[i] ;
}
}
}
}

int allocatedTime(vector<int> &arr , int n , int m ) {
if(m > n) return -1 ;

 int sum = 0 ;
for(int i = 0 ; i < n ; i++){
 sum += arr[i];
}

int ans = -1 ;
int st = 0 , end = sum ;
while(st <= end){
  int mid = st + (end - st)/2;
  if(isValid(arr ,  n , m , mid )){
     ans = mid ;
end = mid - 1 ;
} else {
st = mid + 1 ;
}
}
 return ans ;
}


int main(){
   int n , m ;
   cin >> n ;
cout << "Enter the number of painters : " ;
cin >> m ;
cout << "Enter the number of unit time : " ;
for(int i = 0 ; i < n ; i++){
 cin >> arr[i];
}
 cout << allocatedTime( arr , n, m ) << endl ;
return 0 ;
}
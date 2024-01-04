#include <iostream>
using namespace std;
int power(int x, int n){
  //base case 
  if (n == 0){
    return 1;
  } 
  return x * power(x, n-1);
  
}
int main() {
  int x = 4 ;
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  int ans = power(x,n);
  cout<<"The answer is: "<<ans<<endl;
  return 0; 
}
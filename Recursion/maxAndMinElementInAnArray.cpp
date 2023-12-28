#include <iostream>
#include <climits>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi) {
  //base case
  if(i >= n) {
    return;
  }
  //1 case solve krenge
  if(arr[i] > maxi) {
    maxi = arr[i];
}
  //baki recursion sambhal lega
  findMax(arr, n, i+1, maxi);
}
void findMin(int arr[], int n, int i, int& mini) {
  //base case
  if(i >= n) {
    return;
  }
  //1 case solve krenge
  if(arr[i] < mini) {
    mini = arr[i];
}
  //baki recursion sambhal lega
  findMin(arr, n, i+1, mini);
}
int main() {
  int arr [] = {-12,-4,-26,-3,-10};
  //int arr [] = {12,9,6,45,10};
  int n = 5;
  int i = 0;
  int maxi = INT_MIN;
  int mini = INT_MAX;
  findMax(arr,n,i,maxi);
  findMin(arr,n,i,mini);
  cout << "Maximum number is: " << maxi << endl;
  cout<< "Minimum number is: "<< mini  <<endl;
  return 0;
}
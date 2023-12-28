#include <bits/stdc++.h>
using namespace std;
void countNumber(int arr[], int n, int i, int key, int &count) {
  if (i >= n) {
    return;
  }
  if (arr[i] == key) {
    count++;
  }
  return countNumber(arr, n, i + 1, key, count);
}

int main() {
  int arr[] = {1, 2, 3, 4, 3, 5};
  int key;
  cout << "Enter the number:" << endl;
  cin >> key;
  int n = 6;
  int i = 0;
  int count = 0;
  countNumber(arr, n, i, key, count);
  cout << "total no. of count for " << key <<" is :" << count;
  return 0;
}
#include <iostream>
using namespace std;

bool checkKey(string& str ,int n,int i,int key){
  //base case
  if(i>=n){
    return false;
  }
  if(str[i]==key){
    return true;
  }
  return checkKey(str,n,i+1,key);
}
int main() {
  string str = "communication";
  int n = str.length();
  char key = 'm';
  int i = 0;
  bool ans = checkKey(str,n,i,key);
  if(ans){
    cout<<"The char is present in string"<<endl;
  }else{
    cout<<"The char is not present in string"<<endl;
  }
  return 0;
}
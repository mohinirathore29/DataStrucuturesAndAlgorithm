#include <bits/stdc++.h>
using namespace std;

void sumOfDigit(int n,int &sum){
    if(n<=0){
        return;
    }
    int digit = n%10;
    //cout<<"last digit "<<digit<<endl;
    sum = sum + digit;
    //cout<<"sum will be "<<sum<<endl;
    return sumOfDigit(n/10,sum);
}

int main(){
    int num = 1234;
    int sum = 0;
    sumOfDigit(num,sum);
    cout<<"sum of all digit in "<<num<<" is :"<<sum<<endl;
    return 0;
}
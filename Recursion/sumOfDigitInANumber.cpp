#include <bits/stdc++.h>
using namespace std;
//method 1
// void sumOfDigit(int n,int &sum){
//     if(n<=0){
//         return;
//     }
//     int digit = n%10;
//     //cout<<"last digit "<<digit<<endl;
//     sum = sum + digit;
//     //cout<<"sum will be "<<sum<<endl;
//     return sumOfDigit(n/10,sum);
// }

//method 2
int sumOfDigit(int n){
    if(n<=0){
        return n;
    }
    int lastDigit = n%10;
    int remainingNum = n/10;
    int finalSum = lastDigit + sumOfDigit(remainingNum);
    return finalSum;
}

int main(){
    int num = 1234;
    int sum = 0;
    //sumOfDigit(num,sum);
    int finalSum = sumOfDigit(num);
    //cout<<"sum of all digit in the number "<<num<<" is :"<<sum<<endl;
    cout<<"sum of all digit in the number "<<num<<" is :"<<finalSum<<endl;

    return 0;
}
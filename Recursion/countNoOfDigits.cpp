#include<bits/stdc++.h>
using namespace std;

int countNoOfDigit(int num){
    if (num<=0){
        return 0;
    } else {
       return 1 + countNoOfDigit(num/10);
    }

}



int main(){
   int num = 1234;
   int  finalCount = countNoOfDigit(num);
   cout<<"the no of digit in a number is: "<<finalCount;




    return 0;

}

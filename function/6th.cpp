//calculate sum of digit of a number
#include<iostream>
using namespace std;
int sumOfDigits(int num){
    int digsum=0;

    while (num>0)
    {
        int lastdig=num%10;
        num/=10;

        digsum+=lastdig;
    }
    return digsum;
}

int main(){
cout << "sum="<< sumOfDigits(234);
return 0;
}

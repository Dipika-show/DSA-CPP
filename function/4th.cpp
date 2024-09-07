//check min of two num
#include <iostream>
using namespace std;

int minOfTwo(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
int main(){

cout << "min=" << minOfTwo(5,3);

      return 0;
}
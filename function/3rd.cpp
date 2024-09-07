//cal sum from 1 to n number
#include <iostream>
using namespace std;

int calSum(int n){
  int sum=0;

  for(int i=1; i<=n; i++){
    sum += i;
  }
  return sum;
}

int main(){
   
  cout << "sum=" <<calSum(5) ;
    






   return 0;
}
//pattern
#include<iostream>
using namespace std;

int main(){
    int n;
   cout << "Enter your number" <<endl;
   cin >> n;

   char character='A';

   for(int i=0;i<=n-1;i++){

      for(int j=0;j<=n-1;j++){
        cout << character << " ";
        character++;
      }

      cout << endl;
   }
    
    
    
    
    
    
    
    
    return 0;
}
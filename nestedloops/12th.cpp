//pattern
#include<iostream>
using namespace std;
int main(){
     int n;
     cout << "Enter your number" <<endl;
     cin >> n;
    int num=1;
     for(int i=0;i<n;i++){
        //space
          for(int j=0;j<i;j++){
            cout<< " ";
            num++;
          }

        //number
        for(int j=0;j<n-i;j++){
            cout<< (i+1);
            num++;
          }  
          cout << endl;
     }
    return 0;
}
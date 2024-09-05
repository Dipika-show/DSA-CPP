//print all number upto n using do while
#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    cout << "Enter your range:" << endl;
    cin>> n;

    do {
        cout << i<< " ";
        i++;
    }while(i<=n);
    
    return 0;
}
//check the character is uppercase or lowercase
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter your character:" <<endl;
    cin >> ch;
    if(ch>='a'&& ch<='z'){
        cout << "Lowercase";
    } else{
        cout << "Uppercase";
    }
    return 0;
}
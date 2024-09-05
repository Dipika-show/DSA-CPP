//sum of all number from 1 to n
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout << "Enter the range:" <<endl;
//     cin >> n;
   
//    for(int i=1;i<=n;i++){
//     sum += i;
//    }
//    cout <<"the sum is:" <<sum <<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    int i=1,sum=0;
    cout << "Enter your range:" <<endl;
    cin >> n;
    
    while(i<=n){
        sum+=i;
        i++;
    }

    cout << "sum =" <<sum<<endl;
    return 0;
}
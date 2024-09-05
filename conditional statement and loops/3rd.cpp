//sum of all odd numbers from 1 to n using for loop
// #include <iostream>
// using namespace std;
// int main(){
//     int n, sum=0;
//     cout << "Enter your range:" << endl;
//     cin>> n;

//     for(int i=1; i<=n;i++){
//         if(i%2!=0){
//             sum +=i;
//         }
//     }
//     cout << "sum=" << sum;
//     return 0;
// }




// sum of all odd numbers from 1 to n using while loop
#include <iostream>
using namespace std;
int main(){
    int n, sum=0,i=1;
    cout << "Enter your range:" << endl;
    cin>> n;

    while(i<=n){
         if(i%2 !=0){
            sum +=i;
         }
         i++;
    }
    cout << "sum=" << sum;
    return 0;
}
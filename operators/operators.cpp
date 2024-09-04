//Arithmtic,Relation , logical operators 
#include<iostream>
using namespace std;

int main()
{
  //arithmetic  
 int a=10, b=5;
 cout << "Sum :" << (a+b) << endl;
 cout << "Difference:" << (a-b) << endl;
 cout << "Multiplicatio :" << (a*b)<< endl;
 cout << "Division :" << (a/b) << endl;
 cout << "modulo" << (a%b) << endl;

//relational
cout <<   ( 2<5) << endl;
cout <<   ( 2>5) << endl;
cout <<  (2!=9) << endl;
cout << (2==2) << endl;
cout << (2<=2) << endl;

//logical
cout <<  !(3<5) << endl;
cout << ((3<5)||(3<5)) << endl;
cout << ((3<4)&& (3>5)) << endl;

    return 0;
}
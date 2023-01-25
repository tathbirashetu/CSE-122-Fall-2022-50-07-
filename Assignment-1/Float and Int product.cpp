//Problem-04
//Write a function which receives a float and an int from main(), finds the product of these two and returns the product which is printed through main() in C++.
#include <iostream>
using namespace std;

float Product(float b,int a){
    float P=b*a;
    return P;
}

int main(){
    int a;
    float b;
    cout<<"Enter a float and an Integer Number Respectivly:"<<endl;
    cin>>b>>a;
    float p=Product(b,a);
    cout<<"Product of the Numbers: "<<p;

    return 0;
}

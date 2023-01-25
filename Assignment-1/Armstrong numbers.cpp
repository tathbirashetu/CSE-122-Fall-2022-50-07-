//Problem-03
//Write a C++ program to print out all Armstrong numbers between 1 and 10000. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void ArmstrongCheck(int i){
    int n=i,result=0,remainder;
    while (n != 0) {
         remainder = n % 10;

         result += pow(remainder,3);
        n /= 10;
    }

    if (result == i){
        cout<<i<<"  ";
    }
}


int main() {

    cout<<"Armstrong Numbers Between 1 to 10000: "<<endl<<endl;

    for(int i=1;i<=10000;i++){
        ArmstrongCheck(i);
    }
    return 0;
}

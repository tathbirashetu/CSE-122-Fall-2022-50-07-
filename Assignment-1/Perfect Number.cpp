//Problem -01
// Write a C++ program to find out first n perfect number where n is the input from user.
#include <iostream>
using namespace std;

int PerfectNum(int n){
    int sum=0,i=1;
    for(i;i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    if(sum==n){
        return 1;
    }
    return 0;

}

int main (){
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    if(PerfectNum(n)){
        cout<<"Perfect Number"<<endl;
    }
    else{
        cout<<"Not Perfect Number"<<endl;
    }

    return 0;
}

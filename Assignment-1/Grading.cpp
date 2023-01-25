//Problem-05
//BUBT grading policy is :
//(i) 80 % marks or above is A+
//(ii) 75% to 79% marks is A
//(iii) 70% to 74% marks is A-
//(iv) 65% to 69% marks is B+
//(v) 60% to 64% marks is B
//(vi) 55% to 59% marks is B-
//(vii) 50% to 54% marks is C+
//(viii) 45% to 49% marks is C
//(ix) 40% to 44% marks is D
//(x) Below 40% is F
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Mark :";
    cin>>n;

    if(n>=80 && n<=100){
        cout<<"Grade: A++"<<endl;
    }
    else if(n>=75 && n<=100){
        cout<<"Grade: A"<<endl;
    }
    else if(n>=70 && n<=100){
        cout<<"Grade: A-"<<endl;
    }
    else if(n>=65 && n<=100){
        cout<<"Grade: B++"<<endl;
    }
    else if(n>=60 && n<=100){
        cout<<"Grade: B"<<endl;
    }
    else if(n>=55 && n<100){
        cout<<"Grade: B-"<<endl;
    }
    else if(n>=50 && n<=100){
        cout<<"Grade: C+"<<endl;
    }
    else if(n>=45 && n<=100){
        cout<<"Grade: C"<<endl;
    }
    else if(n>=40 && n<=100){
        cout<<"Grade: D"<<endl;
    }
    else if(n<40){
        cout<<"Grade: F"<<endl;
    }
    else{
        cout<<"Wrong Input"<<endl;
    }
    return 0;
}

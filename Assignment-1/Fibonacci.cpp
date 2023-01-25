//Problem-02
//Write a C++ program to find first n Fibonacci number where n is the input from user.
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {

        if(i == 1) {
            cout <<endl<< t1 <<endl;
            continue;
        }
        if(i == 2) {
            cout << t2 <<endl;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm <<endl;
    }
    return 0;
}

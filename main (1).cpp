// Problem Statement :02

#include<bits/stdtr1c++.h>
using namespace std;

int main() {
    int marks;
    cin>>marks;

    if (marks>=90) {
        cout<<"Grade A";
        
    }

    else if (marks>=70 && marks<=90) {
        cout<<"GRADE B";
    }

    else if (marks>=50 && marks<=70) {
        cout<<"GRADE C";

    }

    else if (marks>=35 && marks<=50) {
        cout<<"GRADE D";

    }

    else if (marks<35) {
        cout<<"FAIL";
    }

    else {
        cout<<"INVALID MARKS!";
    }
    
}
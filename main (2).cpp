// Problem Statement :01

#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int age;
    cin>>age;
    if (age>=18) {
        cout<<"Adult";
    }
    else if (age<18 && age>=10) {
        cout<<"teen";

    }
    else {
        cout <<"child";


    }
}



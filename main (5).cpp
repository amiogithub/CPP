#include<bits/stdc++.h>
using namespace std;

void isAdult(int age) {
       

        if (age < 0 || age > 100) {
            cout<<"Invalid age"<<endl;
            
        }
        else if (age>=18) {
            cout<<"Adult"<<endl;
        }
        else {
            cout<<"Teen"<<endl;
        }

    }

int main(){
    isAdult(6);
}
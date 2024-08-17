// Problem Statement :03 (which of the three numbers are largest)

#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if (num1>=num2) {
        if (num1>=num3) {
            cout<<"Number 1 is the G.O.A.T";    
            
        }
        else {
            cout<<"Number 3 is the G.O.A.T";

        }
    }    
    else if (num2>=num3) {
        cout<<"Number 2 is the G.O.A.T";
    }    
    else {
        cout<<"Number 3 is the G.O.A.T";
    }
    
}    



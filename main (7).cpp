#include<bits/stdc++.h>
using namespace std;

    void whichWeekDay(int day) {

        if (day<1 || day>7){
            cout<<"Invalid"<<endl;
            return;
        }
        switch(day){
            case 1:
              cout<<"Monday"<<endl;break;
            case 2:
              cout<<"Tuesday"<<endl;break;
            case 3:
              cout<<"Wednesday"<<endl;break;
            case 4:
              cout<<"Thursday"<<endl;break;
            case 5:
              cout<<"Friday"<<endl;break;
            case 6:
              cout<<"Saturday"<<endl;break;
            case 7:
              cout<<"Sunday"<<endl;break;
                                                                                                 



        }

    }

int main(){
    whichWeekDay(6);
}
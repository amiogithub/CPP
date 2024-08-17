#include<bits/stdc++.h>
using namespace std;
    void printX(int X, int N) {
        if (X >= -100 && X <= 100 && N >= 0 && N <= 100) {
            for (int i = 0; i < N; i++) {  // Corrected: semicolons and variable declaration
                if (i == N - 1) {
                    cout << X;
                } else {
                    cout << X << " ";
                }
            }
            cout << endl;  // Optional: To add a new line after the output
     
        }

    }
int main() {
   printX(4,7);
}
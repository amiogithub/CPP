#include <iostream>
#include <string>
using namespace std;

char lastChar(string& s) {
    char last = s[s.size() - 1];
    return last;
}

int main() {
    string str = "Tigress";  // Corrected: Created a string object
    char result = lastChar(str);  // Corrected: Pass the string object
    cout << result << endl;  // Corrected: Print the result
    return 0;
}

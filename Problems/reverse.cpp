#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int length = str.length();
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        char ch = 'A'; 
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++;
            if (ch > 'Z') { // Wrap around if exceeding 'Z'
                ch = 'A'; 
            }
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}
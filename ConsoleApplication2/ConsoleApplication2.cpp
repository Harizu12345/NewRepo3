#include <iostream>
#include <string>

using namespace std;

int main() {
    string surnames[5];

    
    cout << "five second name student:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "secind name " << i + 1 << ": ";
        cin >> surnames[i];
    }

    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
            if (surnames[j] > surnames[j + 1]) {
                string temp = surnames[j];
                surnames[j] = surnames[j + 1];
                surnames[j + 1] = temp;
            }
        }
    }

    
    cout << "\nStudents name:\n";
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ": " << surnames[i] << "\n";
    }

    return 0;
}

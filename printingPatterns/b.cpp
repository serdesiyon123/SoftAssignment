#include <iostream>

using namespace std;

int main() {
    // Get user input for number of rows and pattern choice
    int n, choice;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Choose a pattern:" << endl;
    cout << "1. Half Pyramid" << endl;
    cout << "2. Inverted Half Pyramid" << endl;
    cout << "3. Full Pyramid" << endl;
    cout << "4. Inverted Full Pyramid" << endl;
    cout << "5. Hollow Full Pyramid" << endl;
    cout << "6. Number Pyramid" << endl;
    cout << "7. Inverted Number Pyramid" << endl;
    cout << "8. Alphabet Pyramid" << endl;
    cout << "9. Inverted Alphabet Pyramid" << endl;
    cin >> choice;

    // Generate the chosen pattern
    switch (choice) {
        case 1:
            // Half Pyramid
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 2:
            // Inverted Half Pyramid
            for (int i = n; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 3:
            // Full Pyramid
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n - i; j++) {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 4:
            // Inverted Full Pyramid
            for (int i = n; i >= 1; i--) {
                for (int j = 1; j <= n - i; j++) {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 5:
            // Hollow Full Pyramid
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n - i; j++) {
                    cout << "  ";
                }
                if (i == 1 || i == n) {
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                } else {
                    cout << "* ";
                    for (int j = 2; j <= i - 1; j++) {
                        cout << "  ";
                    }
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 6:
            // Number Pyramid
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n - i; j++) {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        case 7:
            // Inverted Number Pyramid
            for (int i = n; i >= 1; i--) {
                for (int j = 1; j <= n - i; j++) {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        case 8:
            // Alphabet Pyramid
            char ch = 'A';
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n - i; j++) {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << ch << " ";
                    ch++;
                }
                cout << endl;


            }

    };
            return 0;
    }
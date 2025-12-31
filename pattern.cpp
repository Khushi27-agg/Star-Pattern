// Day 03 - Star Patterns
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Pattern 1: Inverted right triangle
    for(int i = n; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 2: Right triangle
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3: Square
    for(int i = n; i > 0; i--) {
        for(int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 4: Right-aligned triangle
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j >= i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 5: Reverse right-aligned triangle
    int k = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j >= k)
                cout << "*";
            else
                cout << " ";
        }
        k--;
        cout << endl;
    }

    return 0;
}

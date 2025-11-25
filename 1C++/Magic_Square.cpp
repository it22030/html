#include <iostream>
#include <vector>
using namespace std;

void generate(int n) {
    vector<vector<int>> a(n, vector<int>(n, 0)); // 2D vector initialize with 0
    int r = 0, c = n / 2; // Start from middle of first row

    for (int x = 1; x <= n * n; x++) {
        a[r][c] = x;
        if (x % n == 0) {
            r++;
        } else {
            r--;
            c--;
            if (r < 0) r += n;
            if (c < 0) c += n;
        }
    }

    // Print the magic square
    cout << "\nMagic Square of size " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the Magic Square (odd number): ";
    cin >> size;

    if (size % 2 == 0) {
        cout << "Error: Magic Square size must be an odd number!" << endl;
    } else {
        generate(size);
    }

    return 0;
}



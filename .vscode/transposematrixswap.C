#include <iostream> 
using namespace std;
int main() {
    int m;
    cout << "Enter number of rows and columns: ";
    cin >> m ;

    int a[m][m];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Original matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose the matrix by swapping elements in place
    for (int i = 0 ; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (i < m && j < m) { 
                int temp= a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }

    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
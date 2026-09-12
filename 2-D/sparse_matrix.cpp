#include <iostream>
using namespace std;

int main() {

    int m, n, k = 0;

    cout << "Enter the row: ";
    cin >> m;

    cout << "Enter the column: ";
    cin >> n;

    int arr[100][100];
    int sparse[100][3];

    cout << "Enter the values: " << endl;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {

            if(arr[i][j] != 0) {

                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = arr[i][j];

                k++;
            }
        }
    }

    cout << "Sparse Matrix:" << endl;

    for(int i = 0; i < k; i++) {
        for(int j = 0; j < 3; j++) {
            cout << sparse[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
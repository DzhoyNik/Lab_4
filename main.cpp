#include <iostream> 
#include <ctime> 
using namespace std;

int main()
{
    srand(time(0));
    const int n = 4;
    int a[n][n];
    int maxElement;
    int preElement;
    int elementMainDiagonal;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 21 - 10;
        }
    }

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (size_t i = 0; i < n; i++) {
        maxElement = a[i][0];
        preElement = 0;

        for (size_t j = 1; j < n; j++) {
            if (a[i][j] > maxElement) {
                maxElement = a[i][j];
                preElement = j;
            }
        }

        swap(a[i][i], a[i][preElement]);
    }

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
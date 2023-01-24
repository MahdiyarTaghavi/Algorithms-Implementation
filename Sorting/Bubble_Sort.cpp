#include <iostream>
using namespace std;

const size = 1000;
int main() {
    int n;
    long long int a[size];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

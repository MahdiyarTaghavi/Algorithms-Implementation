#include <iostream>
using namespace std;

const size_t MAX_SIZE = 1000;

int main() {
    int n;
    long long int a[MAX_SIZE];
    int i, p;
    
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (i = 1; i < n; i++) {
        for (p = i; p > 0; p--) {
            if (a[p] < a[p - 1])
                swap(a[p - 1], a[p]);
        }
    }
    
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

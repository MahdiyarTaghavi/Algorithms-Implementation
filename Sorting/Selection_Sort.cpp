 #include <iostream>
 using namespace std;
 
 const size_t MAX_SIZE = 1000;
 
 int main() {
     int n, i, j, min_index;
     long long int a[MAX_SIZE];
     
     cin >> n;
     for (i = 0; i < n; i++) {
         cin >> a[i];
     }
     
     for (i = 0; i < n; i++) {
         min_index = i;
         for (j = i; j < n; j++) {
             if (a[min_index] > a[j]) {
                min_index = j;
             }
         }
         swap(a[i], a[min_index]);
     }
     
     for (i = 0; i < n; i++) {
         cout << a[i] << " ";
     }
     return 0;
 }

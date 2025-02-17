// 1. Sắp xếp chọn (selection sort)
// #include <iostream>
// using namespace std;
// void selectionSort(int a[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     int minIndex = i;
//     for (int j = i + 1; j < n; j++) {
//       if (a[j] < a[minIndex]) {
//         minIndex = j;
//       }
//     }
//     if (minIndex != i) {
//       swap(a[i], a[minIndex]);
//     }
//   }
// }
// int main() {
//   int a[10] = {22, 5, 0, 3, 5, 111, 9, 7, 4, 8};
//   selectionSort(a, 10);
//   for (int x: a) {
//     cout << x << " ";
//   }
//   cout << endl;
//   return 0;
// }

// 2. Sắp xếp nổi bọt (bobble sort)
// #include <iostream>
// using namespace std;
// void bobbleSort(int a[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - 1 - i; j++) {
//       if (a[j] > a[j+1]) {
//         swap(a[j], a[j+1]);
//       }
//     }
//   }
// }
// int main() {
//   int a[10] = {23, 56, 0, 32, 59, 111, 9, 7, 41, 2};
//   bobbleSort(a, 10);
//   for (int x: a) {
//     cout << x << " ";
//   }
//   cout << endl;
//   return 0;
// }

// 3. Sắp xếp chèn (insertion sort)
// #include <iostream>
// using namespace std;
// void insertionSort(int a[], int n) {
//   for (int i = 1; i < n; i++) {
//     int j = i - 1, current = a[i];
//     while (j >= 0 && a[j] > current) {
//       a[j+1] = a[j];
//       j--;
//     }
//     a[j+1] = current;
//   }
// }
// int main() {
//   int a[10] = {22, 41, 2, 3, 59, 121, 9, 8, 141, 6};
//   insertionSort(a, 10);
//   for (int x: a) {
//     cout << x << " ";
//   }
//   cout << endl;
//   return 0;
// }

// 4. Sắp xếp đếm phân phối (counting sort)
#include <iostream>
using namespace std;
int main() {
  int count[1000001], m = INT_MIN;
  int n;
  cin >> n;
  int a[n];
  for (int &x: a) {
    cin >> x;
    count[x]++;
    m = max(m, x);
  }
  for (int i = 0; i <= m; i++) {
    if (count[i] != 0) {
      for (int j = 0; j < count[i]; j++) {
        cout << i << " ";
      }
    }
  }
  cout << endl;
  return 0;
}

// 5. Sắp xếp nhanh (quick sort)

// 6. Sắp xếp vun đống (heap sort)

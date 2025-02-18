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
// #include <iostream>
// using namespace std;
// int main() {
//   int count[1000001], m = INT_MIN;
//   int n;
//   cin >> n;
//   int a[n];
//   for (int &x: a) {
//     cin >> x;
//     count[x]++;
//     m = max(m, x);
//   }
//   for (int i = 0; i <= m; i++) {
//     if (count[i] != 0) {
//       for (int j = 0; j < count[i]; j++) {
//         cout << i << " ";
//       }
//     }
//   }
//   cout << endl;
//   return 0;
// }

// 5. Sắp xếp trộn (merge sort)
// #include <iostream>
// using namespace std;
// void merge(int a[], int l, int m, int r) {
//   vector<int> x(a + l, a + m + 1);
//   vector<int> y(a + m + 1, a + r + 1);
//   int i = 0, j = 0;
//   while (i < x.size() && j < y.size()) {
//     if (x[i] < y[j]) {
//       a[l] = x[i];
//       l++;
//       i++;
//     }
//     else {
//       a[l] = y[j];
//       l++;
//       j++;
//     }
//   }
//   while (i < x.size()) {
//     a[l] = x[i];
//     l++;
//     i++;
//   }
//   while (j < y.size()) {
//     a[l] = y[j];
//     l++;
//     j++;
//   }
// }
// void mergeSort(int a[], int l, int r) {
//   if (l >= r) return;
//   int m = (l + r) / 2;
//   mergeSort(a, l, m);
//   mergeSort(a, m + 1, r);
//   merge(a, l, m, r);
// }
// int main() {
//   int a[10] = {55, 4, 2, 67, 333, 9, 7, 7, 1, 80};
//   mergeSort(a, 0, 9);
//   for (int x: a) {
//     cout << x << " ";
//   }
//   cout << endl;
//   return 0;
// }

// 6. Sắp xếp nhanh (quick sort)
#include <iostream>
using namespace std;
int lomutoPartition(int a[], int l, int r) {
  int pivot = a[r];
  int i = l - 1;
  for (int j = l; j < r; j++) {
    if (a[j] <= pivot) {
      i++;
      swap(a[i], a[j]);
    }
  }
  swap(a[i+1], a[r]);
  return i + 1;
}
void quickSortWithLomuto(int a[], int l, int r) {
  if (l >= r) return;
  int p = lomutoPartition(a, l, r);
  quickSortWithLomuto(a, l, p - 1);
  quickSortWithLomuto(a, p + 1, r);
}
int hoarePartition(int a[], int l, int r) {
  int pivot = a[l];
  int i = l - 1, j = r + 1;
  while (true) {
    do {
      i++;
    }
    while (a[i] < pivot);
    do {
      j--;
    }
    while (a[j] > pivot);
    if (i < j) {
      swap(a[i], a[j]);
    }
    else {
      return j;
    }
  }
}
void quickSortWithHoare(int a[], int l, int r) {
  if (l >= r) return;
  int p = hoarePartition(a, l, r);
  quickSortWithHoare(a, l, p);
  quickSortWithHoare(a, p + 1, r);
}
int main() {
  int a[10] = {44, 3, 3, 6, 0, 11, 9, 7, 2, 1};
  quickSortWithLomuto(a, 0, 9);
  for (int x: a) {
    cout << x << " ";
  }
  cout << endl;
  int b[10] = {44, 3, 30, 6, 0, 15, 9, 71, 1, 1};
  quickSortWithHoare(b, 0, 9);
  for (int x: b) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}

// 7. Sắp xếp vun đống (heap sort)

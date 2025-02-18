// 1. Tìm kiếm phần tử bằng thuật toán nhị phân, nếu có trả về true, không tìm thấy trả về false
// #include <iostream>
// using namespace std;
// bool binarySearch(int a[], int n, int target) {
//   int l = 0, r = n - 1;
//   while (l <= r) {
//     int mid = (l + r) / 2;
//     if (target == a[mid]) {
//       return true;
//     }
//     else if (target > a[mid]) {
//       l = mid + 1;
//     }
//     else {
//       r = mid - 1;
//     }
//   }
//   return false;
// }
// int main() {
//   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   cout << boolalpha << binarySearch(a, 10, 3) << endl;
//   return 0;
// }

// 2. Tìm vị trí đầu tiên của phần tử trong mảng đã sắp xếp, không tìm thấy trả về - 1
// #include <iostream>
// using namespace std;
// int firstPositionSearch(int a[], int n, int target) {
//   int l = 0, r = n - 1, res = -1;
//   while (l <= r) {
//     int mid = (l + r) / 2;
//     if (target == a[mid]) {
//       res = mid;
//       r = mid - 1;
//     }
//     else if (target > a[mid]) {
//       l = mid + 1;
//     }
//     else {
//       r = mid - 1;
//     }
//   }
//   return res;
// }
// int main() {
//   int a[10] = {1, 1, 2, 2, 3, 3, 9, 10, 54, 59};
//   cout << firstPositionSearch(a, 10, 3) << endl;
//   return 0;
// }

// 3. Tìm vị trí cuối cùng của phần tử trong mảng đã sắp xếp, không tìm thấy trả về - 1
// #include <iostream>
// using namespace std;
// int lastPositionSearch(int a[], int n, int target) {
//   int l = 0, r = n - 1, res = -1;
//   while (l <= r) {
//     int mid = (l + r) / 2;
//     if (a[mid] == target) {
//       res = mid;
//       l = mid + 1;
//     }
//     else if (target > a[mid]) {
//       l = mid + 1;
//     }
//     else {
//       r = mid - 1;
//     }
//   }
//   return res;
// }
// int main() {
//   int a[10] = {1, 2, 2, 4, 4, 4, 6, 7, 8, 9};
//   cout << lastPositionSearch(a, 10, 4) << endl;
//   return 0;
// }

// 4. In số lần xuất hiện của phần tử trong mảng đã sắp xếp, không có thì in ra 0
// #include <iostream>
// using namespace std;
// int firstPositionSearch(int a[], int n, int target) {
//   int l = 0, r = n - 1, res = -1;
//   while (l <= r) {
//     int mid = (l + r) / 2;
//     if (target == a[mid]) {
//       res = mid;
//       r = mid - 1;
//     }
//     else if (target > a[mid]) {
//       l = mid + 1;
//     }
//     else {
//       r = mid - 1;
//     }
//   }
//   return res;
// }
// int lastPositionSearch(int a[], int n, int target) {
//   int l = 0, r = n - 1, res = -1;
//   while (l <= r) {
//     int mid = (l + r) / 2;
//     if (target == a[mid]) {
//       res = mid;
//       l = mid + 1;
//     }
//     else if (target > a[mid]) {
//       l = mid + 1;
//     }
//     else {
//       r = mid - 1;
//     }
//   }
//   return res;
// }
// int main() {
//   int a[10] = {1, 2, 2, 3, 3, 3, 3, 3, 8, 9};
//   int l = firstPositionSearch(a, 10, 3);
//   int r = lastPositionSearch(a, 10, 3);
//   if (l != -1) {
//     cout << r - l + 1 << endl;
//   }
//   else {
//     cout << "0" << endl;
//   }
//   return 0;
// }

// 5. Tìm vị trí đầu tiên của một phần tử > x trong mảng đã sắp xếp
// #include <iostream>
// using namespace std;
// int firstPositionBiggerX(int a[], int n, int x) {
//   int l = 0, r = n - 1, res = -1;
//   while (l <= r) {
//     int mid = (l + r) / 2;
//     if (a[mid] > x) {
//       res = mid;
//       r = mid - 1;
//     }
//     else {
//       l = mid + 1;
//     }
//   }
//   return res;
// }
// int main() {
//   int a[10] = {1, 2, 2, 3, 3, 3, 3, 4, 7, 9};
//   cout << firstPositionBiggerX(a, 10, 2) << endl;
//   return 0;
// }

// 6. Tìm vị trí đầu tiên của một phần tử < x trong mảng đã sắp xếp
// #include <iostream>
// using namespace std;
// int firstPositionSmallerX(int a[], int n, int x) {
//   int l = 0, r = n - 1, res = -1;
//   while (l <= r) {
//     int mid = (l + r) / 2;
//     if (a[mid] < x) {
//       res = mid;
//       r = mid - 1;
//     }
//     else {
//       r = mid - 1;
//     }
//   }
//   return res;
// }
// int main() {
//   int a[10] = {4, 5, 5, 6, 6, 6, 6, 7, 8, 9};
//   cout << firstPositionSmallerX(a, 10, 6) << endl;
//   return 0;
// }

// 7. Tìm vị trí cuối cùng của một phần tử > x trong mảng đã sắp xếp
// #include <iostream>
// using namespace std;
// int lastPositionBiggerX(int a[], int n, int x) {
//   int l = 0, r = n - 1, res = -1;
//   while (l <= r) {
//     int mid = (l + r) / 2;
//     if (a[mid] > x) {
//       res = mid;
//       l = mid + 1;
//     }
//     else {
//       l = mid + 1;
//     }
//   }
//   return res;
// }
// int main() {
//   int a[10] = {1, 1, 1, 3, 3, 3, 3, 3, 3, 11};
//   cout << lastPositionBiggerX(a, 10, 2) << endl;
//   return 0;
// }

// 8. Tìm vị trí cuối cùng của một phần tử < x trong mảng đã sắp xếp
#include <iostream>
using namespace std;
int lastPositionSmallerX(int a[], int n, int x) {
  int l = 0, r = n - 1, res = -1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (a[mid] < x) {
      res = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  return res;
}
int main() {
  int a[10] = {1, 2, 2, 3, 3, 3, 3, 4, 7, 11};
  cout << lastPositionSmallerX(a, 10, 4) << endl;
  return 0;
}
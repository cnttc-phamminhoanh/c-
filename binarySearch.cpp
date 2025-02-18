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
#include <iostream>
using namespace std;
int firstPositionSearch(int a[], int n, int target) {
  int l = 0, r = n - 1, res = -1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (target == a[mid]) {
      res = mid;
      r = mid - 1;
    }
    else if (target > a[mid]) {
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  return res;
}
int main() {
  int a[10] = {1, 1, 2, 2, 3, 3, 9, 10, 54, 59};
  cout << firstPositionSearch(a, 10, 3) << endl;
  return 0;
}
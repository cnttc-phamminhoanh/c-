/*
1/ Chuyển danh sách cạnh sang ma trận kề
Input:
n, m (số đỉnh, số cạnh)
5 9
Danh sách cạnh: 
1 2 
1 3 
1 4 
2 3 
2 4 
2 5 
3 4 
3 5 
4 5
Output: 
0 1 1 1 0
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
0 1 1 1 0
*/
// #include <iostream>
// using namespace std;
// int main() {
//   int n, m, a[1001][1001];
//   cin >> n >> m;
//   for (int i = 0; i < m; i++) {
//     int x, y;
//     cin >> x >> y;
//     a[x][y] = a[y][x] = 1;
//   }
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j<= n; j++) {
//       cout << a[i][j] << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

/*
2/ Chuyển danh sách cạnh sang danh sách kề
Input:
n, m (số đỉnh, số cạnh)
5 9
Danh sách cạnh: 
1 2 
1 3 
1 4 
2 3 
2 4 
2 5 
3 4 
3 5 
4 5
Output: 
1 : 2 3 4
2 : 1 3 4 5
3 : 1 2 4 5
4 : 1 2 3 5
5 : 2 3 4
*/
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//   int n, m;
//   cin >> n >> m;
//   vector <int> v[1001];
//   for (int i = 0; i < m; i++) {
//     int x, y;
//     cin >> x >> y;
//     v[x].push_back(y);
//     v[y].push_back(x);
//   }
//   for (int i = 1; i <= n; i++) {
//     cout << i << " : ";
//     for (int x: v[i]) {
//       cout << x << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

/*
3/ Chuyển ma trận kề sang danh sách cạnh
Input:
n (số đỉnh)
5
Ma trận: 
0 1 1 1 0 
1 0 1 1 1 
1 1 0 1 1
1 1 1 0 1
0 1 1 1 0
Output: 
1 2
1 3
1 4
2 3
2 4
2 5
3 4
3 5
4 5
*/
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int a[1001][1001];
//   vector<pair<int, int>> v;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cin >> a[i][j];
//     }
//   }
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       if (a[i][j] == 1 && i < j) {
//         v.push_back({i, j});
//       }
//     }
//   }
//   for (auto it: v) {
//     cout << it.first << " " << it.second << endl;
//   }
//   return 0;
// }

/*
4/ Chuyển ma trận kề sang danh sách kề
Input:
n (số đỉnh)
5
Ma trận: 
0 1 1 1 0 
1 0 1 1 1 
1 1 0 1 1
1 1 1 0 1
0 1 1 1 0
Output: 
1 : 2 3 4
2 : 1 3 4 5
3 : 1 2 4 5
4 : 1 2 3 5
5 : 2 3 4
*/
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int a[1001][1001];
//   vector<int> v[1001];
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cin >> a[i][j];
//     }
//   }
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       if (a[i][j] == 1) {
//         v[i].push_back(j);
//       }
//     }
//   }
//   for (int i = 1; i <= n; i++) {
//     cout << i << " : ";
//     for (int x: v[i]) {
//       cout << x << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

/*
5/ Chuyển danh sách kề sang ma trận kề
Input:
n (số đỉnh)
5
Danh sách kề: 
2 3 4
1 3 4 5 
1 2 4 5
1 2 3 5
2 3 4
Output: 
0 1 1 1 0 
1 0 1 1 1 
1 1 0 1 1
1 1 1 0 1
0 1 1 1 0
*/
// #include <iostream>
// #include <sstream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   cin.ignore();
//   int a[1001][1001];
//   for (int i = 1; i <= n; i++) {
//     string s, num;
//     getline(cin, s);
//     stringstream ss(s);
//     while (ss >> num) {
//       a[i][stoi(num)] = 1;
//     }
//   }
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cout << a[i][j] << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

/*
6/ Chuyển danh sách kề sang danh sách cạnh
Input:
n (số đỉnh)
5
Danh sách kề: 
2 3 4
1 3 4 5 
1 2 4 5
1 2 3 5
2 3 4
Output: 
1 2
1 3
1 4
2 3
2 4
2 5
3 4
3 5
4 5
*/
// #include <iostream>
// #include <sstream>
// #include <vector>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   cin.ignore();
//   vector<pair<int, int>> v;
//   for (int i = 1; i <= n; i++) {
//     string s, num;
//     getline(cin, s);
//     stringstream ss(s);
//     while (ss >> num) {
//       if (stoi(num) > i) {
//         v.push_back({i, stoi(num)});
//       }
//     }
//   }
//   for (auto it : v) {
//     cout << it.first << " " << it.second << endl;
//   }
//   return 0;
// }

/*
7/ Tìm kiếm theo chiều sâu
Input:
Số đỉnh, số cạnh:
9 9
Danh sách cạnh: 
1 2
1 3
1 5
2 4
3 6
3 7
3 9
5 8
8 9
Output: 
1 2 4 3 6 7 9 8 5
*/
// #include <iostream>
// #include <vector>
// #include <string.h>
// #include <stack>
// using namespace std;
// bool visited[1001];
// int n, m;
// vector<int> v[1001];
// void input() {
//   cin >> n >> m;
//   for (int i = 0; i < m; i++) {
//     int x, y;
//     cin >> x >> y;
//     v[x].push_back(y);
//     v[y].push_back(x);
//   }
//   memset(visited, false, sizeof(visited));
// }
// void dfs(int u) {
//   stack<int> s;
//   s.push(u);
//   visited[u] = true;
//   while (!s.empty()) {
//     int d = s.top();
//     s.pop();
//     cout << d << " ";
//     for (int x : v[d]) {
//       if (!visited[x]) {
//         s.push(x);
//         visited[x] = true;
//       }
//     }
//   }
// }
// void dfs1(int u) {
//   cout << u << " ";
//   visited[u] = true;
//   for (int x : v[u]) {
//     if (!visited[x]) {
//       dfs1(x);
//     }
//   }
// }
// int main() {
//   input();
//   dfs(1);
//   cout << endl;
//   return 0;
// }

/*
8/ Tìm kiếm theo chiều rộng
Input:
Số đỉnh, số cạnh:
10 11
Danh sách cạnh: 
1 2
1 3
1 5
1 10
2 4
3 6
3 7
3 9
6 7
5 8
8 9
Output: 
1 2 3 5 10 4 6 7 9 8 
*/
#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
using namespace std;
int n, m;
bool visited[1001];
vector<int> v[1001];
void input() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  memset(visited, false, sizeof(visited));
}
void bfs(int u) {
  queue<int> q;
  q.push(u);
  visited[u] = true;
  while (!q.empty()) {
    int d = q.front();
    q.pop();
    cout << d << " ";
    for (int x : v[d]) {
      if (!visited[x]) {
        q.push(x);
        visited[x] = true;
      }
    }
  }
}
int main() {
  input();
  bfs(1);
  cout << endl;
  return 0;
}

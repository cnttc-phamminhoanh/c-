#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node* next;
};

typedef struct Node* node;

node makeNode(int x) {
  node newNode = new Node();
  newNode -> data = x;
  newNode -> next = NULL;
  return newNode;
}

bool isEmpty(node head) {
  return head == NULL;
}

int sizeOfList(node head) {
  int count = 0;
  while (head != NULL) {
    count++;
    head = head -> next;
  }
  return count;
}

void insertFirst(node &head, int x) {
  node newNode = makeNode(x);
  if (head == NULL) {
    head = newNode;
  }
  else {
    newNode -> next = head;
    head = newNode;
  }
}

void insertLast(node &head, int x) {
  node newNode = makeNode(x);
  if (head == NULL) {
    head = newNode;
  }
  else {
    node tmp = head;
    while (tmp -> next != NULL) {
      tmp = tmp -> next;
    }
    tmp -> next = newNode;
  }
}

void insertMiddle(node &head, int x, int position) {
  int size = sizeOfList(head);
  if (position < 1 || position > position + 1) return;
  if (size == 1) {
    insertFirst(head, x);
    return;
  }
  else if (size == size + 1) {
    insertLast(head, x);
    return;
  }
  node tmp = head;
  for (int i = 1; i < position - 1; i++) {
    tmp = tmp -> next;
  }
  node newNode = makeNode(x);
  newNode -> next = tmp -> next;
  tmp -> next = newNode;
}

void printLinkedList(node head) {
  while (head != NULL) {
    cout << head -> data << " ";
    head = head -> next;
  }
}

int main() {
  node head = NULL;
  while (true) {
    cout << "==================================" << endl;
    cout << "1. Size of linked list " << endl;
    cout << "2. Add element to head of linked list " << endl;
    cout << "3. Add element to end of linked list " << endl;
    cout << "4. Add element to middle of linked list " << endl;
    cout << "5. Print elements in linked list " << endl;
    cout << "==================================" << endl;
    int select;
    cout << "Enter selection: ";
    cin >> select;
    switch (select) {
      case 1:
        cout << "Size of linked list is: " << sizeOfList(head) << endl << endl; 
        break;
      case 2:
        cout << "Enter element: ";
        int n; cin >> n;
        insertFirst(head, n);
        cout << endl;
        break;
      case 3:
        cout << "Enter element: ";
        int x; cin >> x;
        insertLast(head, x);
        cout << endl;
        break;
      case 4:
        cout << "Enter element: ";
        int m; cin >> m;
        cout << "Enter position: ";
        int pos; cin >> pos;
        insertMiddle(head, m, pos);
        cout << endl;
        break;
      case 5:
        cout << "Linked list: ";
        printLinkedList(head);
        cout << endl << endl;
        break;
      default:
        return 0;
    }
  }
  return 0;
}
#include <iostream>
using namespace std;
#define MAX 100

class Stack {
    int arr[MAX], top;
public:
    Stack() { top = -1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX - 1; }
    void push(int x) {
        if (isFull()) cout << "Stack Overflow\n";
        else arr[++top] = x;
    }
    void pop() {
        if (isEmpty()) cout << "Stack Underflow\n";
        else cout << "Popped: " << arr[top--] << endl;
    }
    int peek() {
        if (!isEmpty()) return arr[top];
        cout << "Stack is empty\n";
        return -1;
    }
    void display() {
        if (isEmpty()) cout << "Stack is empty\n";
        else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, val;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Push\n2. Pop\n3. isEmpty\n4. isFull\n5. Display\n6. Peek\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice) {
            case 1: cout << "Enter value: "; cin >> val; s.push(val); break;
            case 2: s.pop(); break;
            case 3: cout << (s.isEmpty() ? "Empty\n" : "Not Empty\n"); break;
            case 4: cout << (s.isFull() ? "Full\n" : "Not Full\n"); break;
            case 5: s.display(); break;
            case 6: cout << "Top element: " << s.peek() << endl; break;
        }
    } while(choice != 0);
}

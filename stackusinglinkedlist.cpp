#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;
    
public:
    Stack() {
        top = NULL;
    }
    
    // Push operation - Add element to stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to stack" << endl;
    }
    
    // Pop operation - Remove element from stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot pop." << endl;
            return;
        }
        Node* temp = top;
        cout << temp->data << " popped from stack" << endl;
        top = top->next;
        delete temp;
    }
    
    // Peek operation - Get top element without removing
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }
    
    // Check if stack is empty
    bool isEmpty() {
        return top == NULL;
    }
    
    // Display all elements in stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    
    // Destructor to free memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack s;
    
    cout << "=== Stack Using Linked List ===" << endl << endl;
    
    // Push operations
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    s.display();
    cout << endl;
    
    // Peek operation
    cout << "Top element (peek): " << s.peek() << endl << endl;
    
    // Pop operations
    s.pop();
    s.pop();
    
    s.display();
    cout << endl;
    
    // Check if empty
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl << endl;
    
    // More operations
    s.push(60);
    s.push(70);
    
    s.display();
    
    return 0;
}
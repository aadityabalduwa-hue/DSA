#include<iostream>
#include<queue>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = NULL;
    }
};
class Queue {
private:
    Node* front;
    Node* rear;
    public:
    Queue() {
        front = rear = NULL;
    }
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == NULL) {
            front = rear = newNode;
            cout << value << " enqueued to queue" << endl;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        cout << value << " enqueued to queue" << endl;
    }
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty! Cannot dequeue." << endl;
            return;
        }
        Node* temp = front;
        cout << temp->data << " dequeued from queue" << endl;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        delete temp;
    }
    int peek() {
        if (front == NULL) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }
    bool isEmpty() {
        return front == NULL;
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    bool deleteQueue() {
        while (!isEmpty()) {
            dequeue();
        }
        return true;
    }
    bool isFull() {
        Node* temp = new Node(0);
        if (temp == NULL) {
            return true;
        }
        delete temp;
        return false;
    }
    bool search(int value) {
        Node* temp = front;
        while (temp != NULL) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    
    cout << "Front element: " << q.peek() << endl;
    
    q.dequeue();
    q.display();
    
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    
    cout << "Is queue full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    int searchValue = 20;
    cout << "Is " << searchValue << " in queue? " << (q.search(searchValue) ? "Yes" : "No") << endl;
    
    q.deleteQueue();
    q.display();
    
    return 0;
}
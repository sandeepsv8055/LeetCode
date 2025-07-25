#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int value) {
        val = value;
        next = nullptr;
    }
};

class MyLinkedList {
private:
    Node* head;
    int size;

public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;

        Node* curr = head;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        ++size;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* curr = head;
            while (curr->next) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
        ++size;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* curr = head;
        for (int i = 0; i < index - 1; ++i) {
            curr = curr->next;
        }

        newNode->next = curr->next;
        curr->next = newNode;
        ++size;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        Node* toDelete;
        if (index == 0) {
            toDelete = head;
            head = head->next;
        } else {
            Node* curr = head;
            for (int i = 0; i < index - 1; ++i) {
                curr = curr->next;
            }
            toDelete = curr->next;
            curr->next = toDelete->next;
        }

        delete toDelete;
        --size;
    }
};

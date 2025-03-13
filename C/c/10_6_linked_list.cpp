// 10_6_linked_list.cpp
#include <iostream>
using namespace std;

struct NODE {
    NODE(int data=0) : data(data), next(NULL) {}

    int data;
    NODE* next;
};

class LinkedList {
private:
    NODE* head;

public:
    LinkedList() : head(NULL) {}

    bool is_empty() {
        return head == NULL;
    }

    void show() {
        for (NODE* cur=head; cur; cur=cur->next)
            cout << cur->data << ' ';
        cout << endl;
    }

    NODE* make_node(int data) {
        // NODE* p = (NODE*) malloc(sizeof(NODE));
        // p->data = data;
        // p->next = NULL;

        NODE* p = new NODE(data);
        return p;
    }

    void add_head(int data) {
        NODE* node = make_node(data);
        node->next = head;
        head = node;
    }

    void add_tail(int data) {
    }

    int remove_head() {
        if (is_empty())
            throw "list is empty";

        int data = head->data;
        NODE* p = head;
        head = head->next;
        delete p;
        return data;
    }

    int remove_tail() {
        return 0;
    }

    void clear() {
        while(is_empty() == false)
            remove_head();
    }
};

class Stack : private LinkedList {
public:
    bool is_empty() {
        return LinkedList::is_empty();
    }

    void push(int n) {
        add_head(n);
    }

    int pop() {
        return remove_head();
    }
};

int main() { 
    LinkedList list;

    for (int i = 0; i < 5; i++)
        list.add_head(i);

    list.show();

    for (int i = 0; i < 3; i++)
        list.remove_head();

    list.show();

    list.clear();
    list.show();

    // list.remove_head();
    cout << "finish" << endl;

    // ------------------------- //

    Stack stack;

    int orders[] = {5, 1, 8, 3, 4, 9, 2};

    for (int i = 0; i < 7; i++)
        stack.push(orders[i]);

    for (int i = 0; stack.is_empty() == false; i++)
        orders[i] = stack.pop();

    for (int i = 0; i < 7; i++)
        cout << orders[i] << ' ';
    cout << endl;
}


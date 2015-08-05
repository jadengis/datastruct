// ~usr/datastruct/Queue.h
// My personal implementation of a Queue class

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "Link.h"

template <class T>
class Queue {
    public :
    Queue() : front(NULL), rear(NULL) {}

    ~Queue() {
        while(!empty())
            delete remove();
    }

    void insert(T* new_info) {
        if (rear == NULL)
            rear = new Link_Node<T>(new_info, NULL);
        else {
            Link_Node<T>* old_rear = rear;
            rear = new Link_Node<T>(new_info, NULL);
            old_rear -> next = rear;
        }
        if (empty())
            front = rear;
    }

    T* remove() {
        if (empty()) {
            std::cout << "Queue empty" <<std::endl;
            return NULL;
        }
        T* inf = front -> info;
        Link_Node<T>* old_front = front;
        front = old_front -> next;
        if (empty())
            rear = front;
        delete old_front;
        return inf;
    }

    T* peek() {
        if (empty()) {
            std::cout << "Queue empty" << std::endl;
            return NULL;
        }
        return front -> info;
    }
    private :
    Link_Node<T>* front;
    Link_Node<T>* rear;
    bool empty() {
        return front == NULL;
    }
};
#endif // QUEUE_H ///:~

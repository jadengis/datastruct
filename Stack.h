// ~usr/datastruct/Stack.h
// This header file contains the implementation of a Stack class Template

#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "Link.h"

template <class T>
class Stack {
    private :
    Link_Node<T>* top;
    
    public :
    Stack() : top(NULL) {}
    ~Stack() {
        while (top != NULL) {
            delete pop();
        }
    }
    void push(T* new_info) {
        top = new Link_Node<T>(new_info, top);
    }
    T* pop() {
        if (top == NULL) {
            std::cout << "Stack empty" << std::endl;
            return NULL;
        }
        T* inf = top -> info;
        Link_Node<T>* old_top = top;
        top = old_top->next;
        delete old_top;
        return inf;
    }
    T* peek() {
        if (top == NULL) {
            std::cout << "Stack empty" << std::endl;
            return NULL;
        }
        return top->info;
    }
};
#endif // Stack_H

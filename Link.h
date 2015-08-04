// ~/usr/datastruct/Link.h
// This header file contains the declarations for Link Nodes and Double Link
// Nodes

#ifndef LINK_H
#define LINK_H

template <class T>
class Link_Node {
    public  :
    // Constructor / Destructor
    Link_Node(T* inf, Link_Node* nxt = NULL, Link_Node* prv = NULL) :
        info(inf), next(nxt), prev(prv) {}
    ~Link_Node() {}
    T* info;
    Link_Node* next;
    Link_Node* prev;
};
#endif // LINK.H ///:~

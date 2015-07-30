// ~/usr/datastruct/Link.h
// This header file contains the declarations for Link Nodes and Double Link
// Nodes

#ifndef LINK_H
#define LINK_H

template <class T>
class Link_Node {
    public  :
    // Constructor / Destructor
    Link_Node(T inf, Link_Node* nxt) : info(inf), next(next) {}
    ~Link_Node() {}
    private :
    T info;
    Link_Node* next;
};

template <class T>
class Double_Link_Node {
    public  :
    // Constructor / Destructor
    Double_Link_Node(T inf, Link_Node* prv, Double_Link_Node* nxt) :
        info(inf), prev(prv), next(nxt) {}
    ~Double_Link_Node() {}
    private :
    T info;
    Double_Link_Node* prev;
    Double_Link_Node* next;
};
#endif // LINK.H ///:~

#pragma once
#include "Iterator.h"

class List {
    public:
        List() {
            head = nullptr;
            tail = nullptr;
        };
        ~List();
        bool empty() const;
        void pushback(int data);
        void pushfront(int data);
        int size();
        void popfront();
        void popback();
        Iterator begin();
        Iterator end();
        Iterator insert(Iterator it, int data);
        Iterator erase(Iterator it);
    private:
        Link *head;
        Link *tail;
        int num;
};
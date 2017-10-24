#pragma once

#include <iostream>
#include "Iterator.h"
#include <cstdlib>

class List {
    public:
            List() {head=NULL;tail=NULL;};
            ~List() {}
            bool empty() const;
            void push_back(int x);
            void push_front(int x);
            int size();
            void popback(int x);
            void popfront(int x);
            Iterator begin();
            Iterator end();
            void insert(int x);
            void erase(Iterator);

    private:
        Link *head, *tail;
};

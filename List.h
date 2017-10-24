#pragma once

#include <iostream>
#include "Iterator.h"
#include <cstdlib>

class List {
    public:
            List() {head=NULL;tail=NULL;};
            ~List();
            bool empty() const;
            void push_back(int x);
            void push_front(int x);
            int size();
            void popback();
            void popfront();
            Iterator begin();
            Iterator end();
            void insert(Iterator it,int x);
            Iterator erase(Iterator it);

    private:
        Link *head, *tail;
};
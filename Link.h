#pragma once

#include "Iterator.h"
#include "List.h"

class Link {
    public:
            Link(int x);

    private:
        friend class Iterator;
        friend class List;
        int data;
        Link *next, *first;
        
};
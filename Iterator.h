#pragma once

#include "List.h"
#include "Link.h"

class List;
class Link;

class Iterator {
    public:
        Iterator();
        void operator++();
        void operator--();
        int & operator*();
        friend class List;
    private:
        Link *List;
        node *position;
        List *container;

};

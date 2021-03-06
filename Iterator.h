#pragma once
#include "Link.h"

class Iterator {
    public:
        int & operator*();
        void operator++();
        bool operator==(const Iterator & rhs);
    private:
        Iterator(Link* link) : link(link) {}
        Link* link;
        friend class List;
};

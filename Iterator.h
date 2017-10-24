#pragma once

#include "Link.h"

class List;

class Iterator {
    public:
        Iterator();
        void operator++();
        int & operator*();
        friend class List;
    private:
        Link *position;
        List *container;

};
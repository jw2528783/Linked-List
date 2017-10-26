#include "Iterator.h"

int& Iterator::operator*(){
    return link->data;
}

void Iterator::operator++(){
    link=link->next;
}

bool Iterator::operator==(const Iterator & x){
    return link==x.link;
}
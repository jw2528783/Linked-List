#include "Iterator.h"
#include <iostream>
#include <cassert>

Iterator::Iterator(){
    position=NULL;
    container=NULL;
}

void Iterator::operator++(){
	assert(position!=NULL);
	position=position->next;
}

int & Iterator::operator*(){
	assert(position != NULL);
	return position->data;
}
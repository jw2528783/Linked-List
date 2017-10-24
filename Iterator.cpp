#include "Iterator.h"
#include <iostream>

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

bool Iterator::operator==(const Iterator & rhs){
	return position == rhs.position;
}

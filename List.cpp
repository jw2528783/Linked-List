#include "List.h"
#include <iostream>

List::~List(){
    if(!empty()){
            Link * ptr = head;
            while (ptr != tail){
                    ptr = ptr->next;
                    delete ptr->first;
            }
    }
    delete tail;
}

bool List::empty() const {
    if(head==NULL && tail==NULL)return true;
    else return false;
}

void List::push_back(int x){
    Link* newnode=new Link(x);
    if(tail==NULL){
        head=newnode;
        tail=newnode;
    }
    //attach to end of list
    else{
        newnode->first=tail;
        tail->next=newnode;
        tail=newnode;
    }
}

void List::push_front(int x){
    Link* newnode=new Link(x);
    if(tail==NULL){
        head=newnode;
        tail=newnode;
    }
    //attach to front of list
    else{
        newnode->next=head;
        head->first=newnode;
        head=newnode;
    }
}

int List::size(){
    Iterator it;
    int x = 1;
    it.position = head;
    while(it.position!=tail){
            ++x;
            ++it;
    }
    return x;     
}

void List::popback(){
    tail = tail->first;
    tail->next = NULL;
}
void List::popfront(){
    head = head->next;
    head->first = NULL;
}

Iterator List::begin(){
    Iterator it;
    it.position=head;
    it.container=this;
    return it;
}

Iterator List::end(){
    Iterator it;
    it.position = NULL;
    it.container = this;
    return it;
}

void List::insert(Iterator it, int x){
    if(it.position == NULL){
            push_back(x);
            return;
    }
    Link* after = it.position;
    Link* before = after->first;
    Link* new_link = new Link(x); 
    new_link->first = before;
    new_link->next = after;
    after->first = new_link;
    if(before == NULL)
            head = new_link;
    else
            before->next = new_link;
}

Iterator List::erase(Iterator it){
    Link* erase = it.position;
    Link* before = erase->first;
    Link*  after = erase->next;
    if(erase == head)
            head = after;
    else
            before->next = after;
    if(erase == tail)
            tail = before;
    else
            after->first = before;
    delete erase;
    Iterator x;
    x.position = after;
    x.container = this;
    return x;
}

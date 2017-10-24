#include <iostream>
#include <cstdlib>
#include <cassert>
#include "List.h"
#include "Iterator.h"
#include "node.h"
#include "Link.h"

using namespace std;


node::node(int x){
    data=x;
    first=NULL;
    next=NULL;
}

Iterator::Iterator(){
    position=NULL;
    container=NULL;
}

void List::push_back(int x){
    node* newnode=new node(x);
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
    node* newnode=new node(x);
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
    
}

bool List::empty() const {
    if(head==NULL && tail==NULL)return true;
    else return false;
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

int main(int argc, char** argv) {
    	List a;
	assert(a.empty() == true);
        a.push_back(17);
	assert(a.empty() == false);
	a.push_front(3);
	a.push_back(10);
	//assert(a.size() == 3);
	Iterator it = a.begin();	
	assert(*it == 3);
	++it;
	assert(*it == 17);
	++it;
	assert(*it == 10);
	++it;
        /*
	assert(it == a.end());
	it = a.begin();
	assert(*it == 3);
	*it += 1;
	cout << *it << endl;
*/
	cout << "All tests passed." << endl;
    return 0;
}
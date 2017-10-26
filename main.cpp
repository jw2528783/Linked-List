#include <iostream>
#include <cassert>
#include "List.h"

using namespace std;

//test size
void test1(){
    List a;
    assert(a.empty() == true);
    assert(a.size() == 0);
    /*
    Iterator it = a.begin();
    Iterator end = a.end();
    assert(it == end);
    assert(it.operator==(end));*/
    a.pushback(3);
    assert(a.empty() == false);
    assert(a.size() == 1);
}

//test pushback and pushfront
void test2(){
    List a;
    a.pushback(1);
    a.pushback(2);
    assert(a.empty() == false);
    assert(a.size() == 2);
    a.pushback(3);
    a.pushback(4);
    a.pushfront(0);
    assert(a.size() == 5);
}

//test pushback and pushfront with iterator
void test3(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();
    assert(it == end);

    a.pushback(1);
    a.pushback(2);
    a.pushback(3);
    it = a.begin();
    assert(*it == 1);
    ++it;
    assert(*it == 2);
    ++it;
    assert(*it == 3);
}

//test popback and popfront
void test4(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();
    assert(it.operator == (end));

    a.pushback(2);
    a.pushfront(3);
    a.pushback(1);
    a.pushback(0);
    assert(a.size() == 4);

    a.popback();
    a.popfront();
    a.popback();
    assert(a.size() == 1);
    it = a.begin();
    assert(*it == 2);
}

//test erase
void test5(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();

    a.pushback(0);
    it = a.begin();
    it = a.erase(it);

    a.pushback(1);
    a.pushback(2);
    a.pushback(3);
    it = a.begin();
    assert(*it == 1);
    ++it;
    it = a.erase(it);
    assert(*it == 3);
    assert(a.size() == 2);
}

//testing insert
void test6(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();
    it = a.insert(it, 1);
    assert(*it == 1);
    ++it;
    it = a.insert(it, 2);
    assert(*it == 2);
    assert(a.size() == 2);
}

int main(int argc, char * args[]) {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    cout<<"All Tests Passed"<<endl;
}
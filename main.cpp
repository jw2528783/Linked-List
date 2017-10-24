#include <iostream>
#include <cstdlib>
#include <cassert>
#include "List.h"
#include "Link.h"
#include "Iterator.h"

using namespace std;

int main(int argc, char** argv) {
    	List a;
	assert(a.empty() == true);
	a.push_back(17);
	assert(a.empty() == false);
	a.push_front(3);
	a.push_back(10);
	assert(a.size() == 3);
	Iterator it = a.begin();	
	assert(*it == 3);
	++it;
	assert(*it == 17);
	++it;
	assert(*it == 10);
	it = a.begin();
	assert(*it == 3);
	*it += 1;
	assert(*it == 4);
	++it;
	a.insert(it, 29);
	it = a.begin();
	cout << *it << endl;
	++it;
	cout << *it << endl;
	++it;
	cout << *it << endl;
	++it;
	cout << "All tests passed." << endl;
}
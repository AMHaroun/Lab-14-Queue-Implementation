#pragma once
#include <string>
#include <node.h>
using namespace std;

class Iterator {
public:
	Iterator();
	string get() const; //value of current node
	void next(); // move to next node
	void previous(); // move to previous node
	bool equals(Iterator b) const;
private:
	Node* position; // current position on list
	Node* last; // last position on list
	friend class List;
};

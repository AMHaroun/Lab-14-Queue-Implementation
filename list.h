#include <iterator.h>
#include <string>
#include <node.h>

class List {
	public:
List();
	void push_back(string s); // append node
	void insert(Iterator pos, string s);
	Iterator erase(Iterator pos);
	Iterator begin(); // assign begin node
	Iterator end(); // assign last node to itera
	bool empty();
	string front();
	void pop_front();

private:
	Node* first;
	Node* last;
};
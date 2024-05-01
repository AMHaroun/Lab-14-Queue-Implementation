#include <list.h>
#include <iterator.h>
#include <cassert>
#include <node.h>
#include <stdexcept>

List::List() {
	first = NULL;
	last = NULL;
}
void List::push_back(string s) {
Node* newnode = new Node(s);
	if (last == NULL) /* list is empty */ {
		first = newnode;
		last = newnode;
	}
	else {
		newnode->previous = last;
		last->next = newnode;
		last = newnode;
	}
}
void List::insert(Iterator iter, string s) {
	if (iter.position == NULL) { // pass the end of list
		push_back(s);
		return;
	}
	Node* after = iter.position;
	Node* before = after->previous;
	Node* newnode = new Node(s);
	newnode->previous = before;
	newnode->next = after;
	after->previous = newnode;
	if (before == NULL) /* insert at beginning */
		first = newnode;
	else
		before->next = newnode;
}
Iterator List::erase(Iterator i) {
	Iterator iter = i;
	assert(iter.position != NULL); // not empty
	Node* remove = iter.position;
	Node* before = remove->previous;
	Node* after = remove->next;
	if (remove == first)
		first = after;
	else
		before->next = after;
	if (remove == last)
		last = before;
	else
		after->previous = before;
	iter.position = after;
	delete remove;
	return iter;
}

bool List::empty() {
    return first == nullptr;
}

string List::front() {
    if (first != nullptr) {
        return first->data;
    }
    throw logic_error("Queue is empty");
}

void List::pop_front() {
    if (first != nullptr) {
        Node* temp = first;
        first = first->next;
        if (first != nullptr) {
            first->previous = nullptr;
        } else {
            last = nullptr;
        }
        delete temp;
    } else {
        throw logic_error("Queue is empty");
    }
}

#include <node.h>

Node::Node(string s) {
	data = s;
	previous = NULL;
	next = NULL;
}
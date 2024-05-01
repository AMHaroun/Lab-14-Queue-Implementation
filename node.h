#include <string>
using namespace std;
#pragma once

class Node {
	public:
		Node(string s);
	private:
		string data;
		Node* previous;
		Node* next;
		friend class List;
		friend class Iterator;
};
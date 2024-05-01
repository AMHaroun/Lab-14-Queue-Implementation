#include <string>
#include <iterator.h>
#include <cassert>
using namespace std;

Iterator::Iterator():position(NULL),last(NULL) { }

string Iterator::get() const {
	assert(position != NULL);
	return position->data;
}
void Iterator::next() {
	assert(position != NULL); // not to pass last
	position = position->next;
}

void Iterator::previous() {
	if (position == NULL)
		position = last;
	else position = position->previous;
		assert(position != NULL); // not to pass first
	}
bool Iterator::equals(Iterator b) const {
	return position == b.position;
}

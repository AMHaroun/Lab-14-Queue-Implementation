#include <list.h>
#include <iostream>
using namespace std;

int main() {
    List queue;

    // Push numbers 25 to 29 into the queue
    for (int i = 25; i <= 29; ++i) {
        queue.push_back(to_string(i));
    }

    // Output the numbers
    while (!queue.empty()) {
        cout << queue.front() << " ";
        queue.pop_front();
    }
    cout << endl;

    return 0;
}

#include "common.h"

#include "ts_pqueue.h"

int main() {

    ts_priority_queue<std::chrono::milliseconds> myQueue;
    myQueue.push(std::chrono::milliseconds(3000));
    myQueue.push(std::chrono::milliseconds(5000));
    myQueue.push(std::chrono::milliseconds(2000));
    myQueue.push(std::chrono::milliseconds(3000));

    while (!myQueue.empty()) {
        const auto& top = myQueue.top();
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(top).count() << std::endl;
        myQueue.pop();
    }

    return 0;
}
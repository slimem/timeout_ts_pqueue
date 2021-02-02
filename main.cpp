#include "common.h"

#include "ts_pqueue.h"

int main() {

    ts_priority_queue<std::chrono::milliseconds> myQueue;
    myQueue.push(std::chrono::milliseconds(3000));
    myQueue.push(std::chrono::milliseconds(5000));
    myQueue.push(std::chrono::milliseconds(2000));
    myQueue.push(std::chrono::milliseconds(3000));

    std::chrono::milliseconds next(0);
    while (!myQueue.empty()) {

        const auto top = myQueue.top();
        myQueue.pop();
        next = myQueue.top();
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(top).count() << std::endl;
        std::this_thread::sleep_for(top);
        std::cout << "----\n";
    }

    return 0;
}
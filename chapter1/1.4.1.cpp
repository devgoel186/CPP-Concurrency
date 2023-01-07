#include <iostream>
#include <thread>
// using namespace std;

void hello()
{
    std::cout << "Hello concurrency" << std::endl;
}

int main()
{
    std::thread t(hello); /*1*/
    t.join();
}

/*
The point 1 marks the initial function of
any thread that is generated. The original
program begins from main() as its initial
function.
join() is required for instructing the
main/intial thread to wait for the
spawned thread(s), otherwise, the initial
thread can go and finish the execution.
*/
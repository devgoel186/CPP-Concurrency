# Chapter 1 - Hello, world of concurrency in C++

## Some intro
- Computers with a single processor , or a single processing unit or core, can do one bit of a task and then another. This is called task switching
- This gives an illusion of concurrency
- Computers with multiple processors, or more than one core on a single chip are capable of performing hardware concurrency

## Concurrency with multiple processes
- advantages of concurrent processes:
    - complicated to set up, or slow, often both
    - there's an inherent overhead in running multiple processes
- disadvantages of concurrent processes:
    - there's protection code in OSs to prevent interaction between processes, which helps in safe concurrent code
    - over a network, concurrency can help increase parallelism and performance

## Concurrency with multiple threads
- 
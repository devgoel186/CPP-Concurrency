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
- advantages: 
    - low overhead because of shared address space and lack of protection of data between threads
- disadvantages:
    - data seen by each thread must be consistent as it is shared between threads

## Achieving concurrency
- By dividing tasks - Task parallelism
- By dividing tasks - Data parallelism

## When not to use concurrency
- Unless the potential gain in performance is significant enough to justify the additional costs of maintaining multithreaded code, don't use concurrency
- There's an inherent overhead associated with launching a thread, and depending on the number of threads launched and type of task, it might be beneficial, or it may make matters worse
- Each thread requires a separate stack space, this can clog up memory/address space
- More threads = more context switching
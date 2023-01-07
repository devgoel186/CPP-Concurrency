# Chapter 1 - Hello, world of concurrency in C++

## Some intro
- Computers with a single processor , or a single processing unit or core, can do one bit of a task and then another. This is called task switching
- This gives an illusion of concurrency
- Computers with multiple processors, or more than one core on a single chip are capable of performing hardware concurrency

## Concurrency with multiple processes
- Advantages of concurrent processes:
    - Complicated to set up, or slow, often both
    - There's an inherent overhead in running multiple processes
- Disadvantages of concurrent processes:
    - There's protection code in OSs to prevent interaction between processes, which helps in safe concurrent code
    - Over a network, concurrency can help increase parallelism and performance

## Concurrency with multiple threads
- Advantages: 
    - Low overhead because of shared address space and lack of protection of data between threads
- Disadvantages:
    - Data seen by each thread must be consistent as it is shared between threads

## Achieving concurrency
- By dividing tasks - Task parallelism
- By dividing tasks - Data parallelism

## When not to use concurrency
- Unless the potential gain in performance is significant enough to justify the additional costs of maintaining multithreaded code, don't use concurrency
- There's an inherent overhead associated with launching a thread, and depending on the number of threads launched and type of task, it might be beneficial, or it may make matters worse
- Each thread requires a separate stack space, this can clog up memory/address space
- More threads = more context switching

# Concurrency support in C++
- 1998 C++ standard doesn't acknowledge the existence of threads
- C++ STL has been extended to not only include a thread-aware memory model, but also include classes for managing threads, protecting shared data, syncing operations between threads, and low-level atomic operations, all this starting from C++ 11
- In particular, the [Boost thread library](https://www.boost.org/) was used as the primary model on which the new library was based, with many classes sharing names and structure with the ones from Boost

__Note__: Read up on RAII (Resource Acquisition is Initialization)

# Platform-specific facilities
- Although C++ thread library provides reasonably comprehensive facilities for multithreading and concurrency, there do exist platform-specific facilities
- Availability of a native_handle() member function that allows the underlying implementation to be directly manipulated using a platform-specific API
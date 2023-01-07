# Chapter 2 - Managing threads

## Basic thread management

- All C++ programs spawn one thread, that is the thread running main()
- A thread can be a function object that takes additional parameters and performs a series of independent operations
- As with much of C++ STL, std::thread works with any callable type, so you can pass an instance of a class with a function call operator to the std::thread constructor instead as in **2.1.1.cpp**.

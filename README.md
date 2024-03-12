# Philosophers Project





## Introduction

The Philosophers project at 42 School is an implementation challenge inspired by the famous Dining Philosophers problem in computer science, which demonstrates synchronization issues and techniques for resolving them. This project aims to practice and understand multithreading, mutexes, semaphores, and processes within a programming context. The task is to simulate a scenario where philosophers sit at a round table, doing one of three things: eating, thinking, or sleeping.

![philo](https://github.com/Gabri177/philosopher/assets/152025617/63efe050-57e9-4a4c-aff1-8670e8f239d3)


## Technical Stack

- **Language**: C
- **Concurrency Libraries**: POSIX Threads (pthreads)
- **Synchronization Primitives**: Mutexes and Semaphores

## Implementation

### Overview

The implementation involves creating a simulation where multiple philosopher threads run concurrently, each requiring two forks (or mutexes) to eat. Philosophers must not starve to death, meaning the implementation must ensure that each philosopher gets a chance to eat within a certain time limit.



### Key Features

- **Philosopher Threads**: Each philosopher is represented as a thread, ensuring concurrent execution.
- **Mutexes for Forks**: Each fork is represented by a mutex, preventing simultaneous access by multiple philosophers.
- **Deadlock Prevention**: Implemented a strategy to prevent deadlock, ensuring no philosopher starves by controlling the order of fork acquisition.
- **Life Cycle Simulation**: Each philosopher's life cycle (eating, thinking, sleeping) is simulated accurately, respecting given constraints (time to die, time to eat, and time to sleep).

### Challenges and Solutions

- **Deadlock**: Addressed by designing a fork pickup protocol that prevents circular wait conditions.
- **Starvation**: Solved by introducing dining time checks and adjusting sleep times, ensuring fair access to resources.
- **Synchronization**: Managed through careful use of mutexes and semaphores to synchronize access to shared resources.

## How to Use

1. **Clone the Repository**: `git clone git@github.com:Gabri177/philosopher.git`
2. **Compile the Program**: Use the provided Makefile, typically with a command like `make`.
3. **Run the Simulation**: Execute the binary with the required arguments (number of philosophers, time to die, time to eat, time to sleep, [optional] number of times each philosopher must eat).

## Conclusion

The Philosophers project is not just an academic exercise but a practical demonstration of critical concepts in concurrency and synchronization within computer science. It showcases the importance of resource management, deadlock prevention, and thread synchronization in developing applications that require concurrent execution of tasks.

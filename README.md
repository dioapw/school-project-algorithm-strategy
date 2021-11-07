# Minimization of Time Scheduling System

## Brute Force
It is a straight-forward approach to solving a problem, which is usually based on a problem statement and a definition of the concepts involved.

**Advantage**
- Can solve almost any problem.
- The method is simple, so it's Easy.
- Generate feasible algorithms for search, sort, string, and matrix search.
- Generate algorithms for computational tasks such as addition or multiplication of n numbers and finding the minimum or maximum element in a list.

**Disadvantage**
- Rarely produces efficient algorithms.
- Some slow brute force algorithms.
- Not as constructive/creative as other problem-solving techniques.

## Greedy
It is the most popular method for solving optimization problems.

**General Schematic**
- Candidate set
- Set of solutions
- Selection function
- Eligibility function
- Objective Function

## Problem Case
A server (can be a processor, pump, cashier at a bank, etc.) has n clients that must be served. The service time for each customer is predetermined, that is, customer “i” takes time “ti”, If the main goal is to minimize the total time in the system.

<p align="center">
  <img src="https://github.com/dioapw/school-project-algorithm-strategy/blob/main/formula.png" alt="Formula">
</p>

Since the number of subscribers is constant, minimizing the time in the system is equivalent to minimizing the average time.

### Example
Suppose we have three customers with the time unit “second”
```
t1 = 5, t2 = 10, and t3 = 3
```
Then the six possible sequences of service are

![Alt text](https://user-images.githubusercontent.com/55073908/140614882-5d2914e2-e765-4b45-a46c-8ad3afa84358.png)

Of all the total server time usage above, the minimum waiting time to serve clients is 29 seconds.

### Asymptotic Time Complexity

| Brute Force  | Greedy       |
| -----------|:-------------:|
| O(N!)       | O(N)             |

### Execution Time Comparison
To find out the comparison of execution time between the greedy algorithm strategy and the brute algorithm strategy, an experimental process is carried out by entering the number of different inputs.

![Alt text](https://user-images.githubusercontent.com/55073908/140615018-f464fadc-1869-4917-8f0a-0b3a39886ad0.png)

From the table above, we get a graph

![Alt text](https://user-images.githubusercontent.com/55073908/140615030-a1789d52-f7a5-4232-be3b-38698c259f47.png)

# Conclusion
- The difference in execution time between the Brute force algorithm and the Greedy algorithm is very far, because the brute force algorithm has a factorial asymptotic time complexity and the Greedy algorithm has a linear asymptotic time complexity.
- Execution time using Greedy algorithm strategy is very fast but, the solution is not always optimal. The brute force algorithm strategy is slow in terms of execution time, but it definitely gets the optimal solution. Of the two algorithm strategies, there is no better algorithm because depending on the case, both algorithms have their respective advantages and disadvantages, if the case requires an optimal solution then use the brute force algorithm strategy and if the case only requires fast execution time then use the strategy greedy algorithm.



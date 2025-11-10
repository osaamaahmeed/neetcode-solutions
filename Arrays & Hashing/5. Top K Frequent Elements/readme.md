First Solution (Worst):
1. Create a unordered map to store the frequancy of every number

2. Create a vector of pairs to store the same frequancey data but vise versa
so the first value is the frequancey and the second value is the number itself
why? to use the premade sort function so it sort it based on the frequncy

3. loop over the last vector form the end to get the answer.

Time Complexity: O(N * Log n)
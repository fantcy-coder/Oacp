Greedy Approach:
The problem requires us to minimize the resulting number by removing k digits from the given number num.
A greedy approach is suitable because at each step (processing each digit), we make a locally optimal choice (keeping the smallest possible digit) with the aim of achieving the overall optimal solution (smallest resulting number).
By prioritizing smaller digits for the most significant places, we ensure that the resulting number is minimized.
Step by step
Initialize an empty vector.
Traverse each digit of num.
For each digit, while the vector is not empty and k is greater than zero, check if the current digit is smaller than the last element of vector. If so, remove this last element from the vector and decrement k.
Push the current digit into vector.
After processing all digits, handle remaining k (if any) by popping from the stack.
Convert from vector to string and remove any leading zeros.
Complexity
Time complexity: O(n+k)O(n+k)O(n+k) ~O(n)O(n)O(n)
Space complexity: O(n)O(n)O(n)
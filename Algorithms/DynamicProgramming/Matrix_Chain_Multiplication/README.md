# Matrix chain multiplication
Matrix chain multiplication (also known as the matrix chain ordering problem) is an optimization problem that involves determining the most efficient way to multiply a given sequence of matrices. The difficulty is not to do the multiplications themselves, but rather to determine the order of the matrix multiplications involved. Dynamic programming might be used to overcome the problem.
#### Generalizations
Given a linear sequence of objects, an associative binary operation on those items, and a mechanism to compute the cost of executing that operation on any two given objects (as well as all partial outcomes), compute the lowest cost way to group the objects to apply the operation over the sequence.

#### Key 
```sh
dp[i][j]=dp[i][k]+dp[k+1][j]+(a[i-1]*a[j]*a[k});
```

### Problems
- matrix-chain-multiplication [GFG](https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/)
- Printing matrix-chain-multiplication
- palindromic-patitioning [GFG](https://www.geeksforgeeks.org/palindrome-partitioning-dp-17/)
- boolean-parenthesization [GFG](https://www.geeksforgeeks.org/boolean-parenthesization-problem-dp-37/)
- check-if-a-string-is-a-scrambled-form-of-another-string [GFG](https://www.geeksforgeeks.org/check-if-a-string-is-a-scrambled-form-of-another-string/)
- egg-dropping-puzzle [GFG](https://www.geeksforgeeks.org/egg-dropping-puzzle-dp-11/) | [LeetCode](https://leetcode.com/problems/super-egg-drop/)

# Longest common subsequence
The longest common subsequence (LCS) problem is the problem of finding the longest subsequence common to all sequences in a set of sequences (often just two sequences). It differs from the longest common substring problem: unlike substrings, subsequences are not required to occupy consecutive positions within the original sequences. 
The longest common subsequence problem is a classic computer science problem, the basis of data comparison programs such as the diff utility, and has applications in computational linguistics and bioinformatics. It is also widely used by revision control systems such as Git for reconciling multiple changes made to a revision-controlled collection of files.

### Sub-string | Sub-Sequence | Sub-set
Consider an array:
```sh
 {1,2,3,4}
```
**Subarray** : contiguous sequence in an array i.e.
```sh
{1,2},{1,2,3}
```
**Subsequence**: Need not to be contiguous, but maintains order i.e.
```sh
{1,2,4}
```
**Subset**: Same as subsequence except it has empty set i.e.
```sh
 {1,3},{}
```
Given an array/sequence of size n, possible
```sh
Subarray = n*(n+1)/2
Subseqeunce = (2^n) -1 (non-empty subsequences)
Subset = 2^n
```
## Problems:
- Largest common Subsequence [LeetCode](https://leetcode.com/problems/longest-common-subsequence/) [GFG](https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1)
- Longest Common Substring [GFG](https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1)
- Shortest Common Supersequence [LeetCode](https://leetcode.com/problems/shortest-common-supersequence/) [GFG](https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1)
- Minimum number of deletions and insertions [LeetCode](https://leetcode.com/problems/delete-operation-for-two-strings/submissions/) [GFG](https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1)
- Longest Repeating Subsequence [GFG](https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1)
- Find length of longest subsequence [GFG](https://practice.geeksforgeeks.org/problems/find-length-of-longest-subsequence4905/1#)
- String Subsequence [GFG](https://practice.geeksforgeeks.org/problems/find-number-of-times-a-string-occurs-as-a-subsequence3020/1#)
- Subsequence Pattern Matching
#### Plaindromic
- Longest Palindromic Subsequence [Leetcode](https://leetcode.com/problems/longest-palindromic-subsequence/)
- Longest Palindromic Substring [LeetCode](https://leetcode.com/problems/longest-palindromic-substring/)
- Palindromic Substrings [LeetCode](https://leetcode.com/problems/palindromic-substrings/)
- Minimum deletion in a string to make it as Palindrome [GFG](https://www.geeksforgeeks.org/minimum-number-deletions-make-string-palindrome/)
- Minimum insertion in a string to make it as Palindrome [GFG](https://www.geeksforgeeks.org/minimum-insertions-to-form-a-palindrome-dp-28/) | [LeetCode](https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/)

Fibonacci numbers
The Fibonacci numbers are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation 

Fn = Fn-1 + Fn-2
with seed values 

F0 = 0 and F1 = 1.

int fib(int n)
{
    int f[n + 2];
    int i;
 
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
 }
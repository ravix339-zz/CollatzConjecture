CollatzConjecture
=================

Command line function that allows user to test cases for Collatz Conjecture

Collatz Conjecture Overview:
  The Collatz Conjecture is a statement that states that for every positive integer above 0, at some point in time using the
  following function, will equal 1. The function, f(x), states that if x%2 = 1, then f(x) = 3x+1. If x % 2 = 0, then f(x) =
  x/2. By constantly repeating this function, the conjecture states that any positive integer above 0 will equal 1 in 0 or
  more iterations of the function. 
  
Program Overview:
  The program allows the user to change the max value of x (MAX) and the maximum count (COUNTMAX). The program will then
  test numbers between 1 and MAX (inclusive) that reach 1 in less than COUNTMAX iterations of the program. Since the
  program uses unsigned long longs as the numbers, the max value for COUNTMAX and MAX is 18,446,744,073,709,551,615.
  For MAX, the value should be less however, due to the fact that (18,446,744,073,709,551,615 *3) + 1 causes an overflow.

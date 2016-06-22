# 11006---Set-Intersection-
practice
Description
Given two sets of numbers, output their intersection set.

 
Input
There are multiple test cases.

Each case contains four lines.

The first line begins with an integer N.

The second line contains N integers, representing the numbers in the first set.

The third line has one integer M, and the fourth line contains M integers, represent the numbers in the second set.

All the numbers are 32 bit signed integers. All the numbers in the set are listed in ascending order and are unique.

The input is terminated if N = 0.

For Case 1, 1 <= N, M <= 103
For Case 2, 1 <= N, M <= 104
For Case 3, 1 <= N, M <= 105
For Case 4, 1 <= N, M <= 106

Output
For each test case, print the intersection of the two sets. Output each number in ascending order and separate them by a space. If the intersection of the two sets is an empty set, print "empty" (without quotes).

Sample Input
3
1 2 3
3
1 2 3
3
1 3 5
3
2 4 6
3
1 2 4
3
1 3 5
0 
EOF
Sample Output
1 2 3
empty
1 
EOF

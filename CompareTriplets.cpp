/*

Alice and Bob each created one problem. A reviewer rates the two challenges, awarding points on a scale from  to  for three categories: problem clarity, originality, and difficulty.

We define the rating for Alice's challenge to be the triplet , and the rating for Bob's challenge to be the triplet .

Your task is to find their comparison points by comparing  with ,  with , and  with .

If a_i > b_i, then Alice is awarded  point.
If a_i < b_i, then Bob is awarded  point.
If a_i = b_i, then neither person receives a point.
Comparison points is the total points a person earned.

Given A and B, can you compare the two challenges and print their respective comparison points?

Input Format

The first line contains  space-separated integers, a_0, a_1, and a_2, describing the respective values in triplet A.
The second line contains  space-separated integers, b_0, b_1, and b_2, describing the respective values in triplet B.

Constraints

1 <= a_i <= 100
1 <= b_i <= 100

Output Format

Print two space-separated integers denoting the respective comparison points earned by Alice and Bob.

Sample Input

5 6 7
3 6 10
Sample Output

1 1
Explanation

In this example:

A = (a_0, a_1, a_2) = (5, 6, 7)
B = (b_0, b_1, b_2) = (3, 6, 10)

Now, let's compare each individual score:

a_0 > b_0, so Alice receives  point.
a_1 = b_1, so nobody receives a point.
a_2 < b_2, so Bob receives  point.
Alice's comparison score is 1, and Bob's comparison score is 1. Thus, we print 1 1 
(Alice's comparison score followed by Bob's comparison score) on a single line.
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
	int a0;
	int a1;
	int a2;
	cin >> a0 >> a1 >> a2;
	int b0;
	int b1;
	int b2;
	cin >> b0 >> b1 >> b2;
	int a = 0;
	int b = 0;
	if (a0 < b0) {
		b += 1;
	}
	if (a0 > b0) {
		a += 1;
	}
	if (a1 < b1) {
		b += 1;
	}
	if (a1 > b1) {
		a += 1;
	}
	if (a2 < b2) {
		b += 1;
	}
	if (a1 > b2) {
		a += 1;
	}
	cout << a << " " << b;
	return 0;
}
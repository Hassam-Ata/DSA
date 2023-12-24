// C++ recursive function to 
// solve tower of hanoi puzzle 
#include <bits/stdc++.h> 
using namespace std; 

void towerOfHanoi(int n, char A, char B, 
				char C) 
{ 
	if (n == 0) { 
		return; 
	} 
	towerOfHanoi(n - 1, A, C, B); 
	cout << "Move disk " << n << " from rod " << A 
		<< " to rod " << C << endl; 
	towerOfHanoi(n - 1, B, A, C); 
} 

// Driver code 
int main() 
{ 
	int N = 3; 

	// A, B and C are names of rods 
	towerOfHanoi(N, 'A', 'B', 'C'); 
	return 0; 
} 

// This is code is contributed by rathbhupendra

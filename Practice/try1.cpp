
#include <bits/stdc++.h>
using namespace std;

int const MAX = 1000001;
bool prime[MAX];

void SieveOfEratosthenes()
{
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= MAX; p++){
		if (prime[p] == true){
			for (int i = p * p; i <= MAX; i += p)
				prime[i] = false;
		}
	}
}
// Driver code
int main()
{

	return 0;
}

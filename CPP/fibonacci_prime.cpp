#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

class PrimeFibonacci{

};
bool isSquare(int n)
{
	int sr = sqrt(n);
	return (sr * sr == n);
}

void printPrimeAndFib(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= n; p++) {


		if (prime[p] == true) {

			for (int i = p * 2; i <= n; i += p)
				prime[i] = false;
		}
	}


	for (int i=2; i<=n; i++){
		if (prime[i] && (isSquare(5 * i * i + 4) > 0 ||
						isSquare(5 * i * i - 4) > 0))
						{
							cout << i << " ";
						}
	}

				
}


int main()
{
	int n = 100;
	printPrimeAndFib(n);
	return 0;
}
 
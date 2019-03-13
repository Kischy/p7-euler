#include <iostream>


#include "PrimeNumbers.h"

int main(int argc, char **argv)
{
	unsigned long long p7_answ = 0;

	PrimeNumbers primenumbers;

	p7_answ = primenumbers.get_prime(10001);


	std::cout << "The answer to the seventh problem of ProjectEuler.Net is " << p7_answ << ".\n";

	return 0;
}
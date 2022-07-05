#pragma once
#include <iostream>
#include <vector>

class PrimeChecker
{
public:
	bool check;
	std::vector<int> primes_vec;

	static void is_prime(const int& number);

	static void prime_numbers_smaller_than(const int& number);
};


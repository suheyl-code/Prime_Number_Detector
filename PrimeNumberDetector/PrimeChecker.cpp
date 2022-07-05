#include "PrimeChecker.h"

void PrimeChecker::is_prime(const int& number)
{
	bool check{ false };
	std::vector<int> primes_vec{};

	for (size_t i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			check = true;
			break;
		}
	}
	if (!check)
	{
		primes_vec.push_back(number);
	}

	if (primes_vec.size() > 0)
	{
		for (const auto& var : primes_vec)
		{
			std::cout << var << "  ";
		}
	}
}

void PrimeChecker::prime_numbers_smaller_than(const int& number)
{
	for (size_t i = number; i > 1; i--)
	{
		is_prime(i);
	}
}

#include "PrimeChecker.h"
#include <chrono>

struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;

	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "Timer took " << ms << "ms\n";
	}
};

const int& menu()
{
	std::cout << "Enter an Integer: ";
	int num{};
	std::cin >> num;
	return num;
}

int main()
{
	auto r_menu = menu();
	std::cout << "List of Prime Numbers equal or less than '" << r_menu << "':\n";
	Timer timer;
	PrimeChecker::prime_numbers_smaller_than(r_menu);
	std::cout << std::endl;
}


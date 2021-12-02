#include <string>
#include "Utility.hpp"

class DayXX
{
public:

	static int part1_solver(std::vector<std::string> input)
	{

	}

	static int part2_solver(std::vector<std::string> input)
	{

	}


	static void runChallenge()
	{
		std::vector<std::string> dayXXdata = parseFile<std::string>("datasample/dayXX.txt");
		std::cout << "Part 1 Answer: " << part1_solver(dayXXdata) << std::endl;
		std::cout << "Part 2 Answer: " << part2_solver(dayXXdata) << std::endl;
	}
};
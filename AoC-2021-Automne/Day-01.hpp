#include "Utility.hpp"

class Day01 {

public:

	static int part1_solver(std::vector<int> input)
	{
		auto count = 0;
		int lastDepth = NULL;

		for (const auto& currentDepth : input)
		{
			// Initialization
			if (lastDepth == NULL) {
				lastDepth = currentDepth;
				continue;
			}

			if (lastDepth < currentDepth)
				count++;

			lastDepth = currentDepth;
		}

		return count;
	}

	static int part2_solver(std::vector<int> input)
	{
		std::vector<int> sumVector;
		while (input.size() >= 3)
		{
			sumVector.push_back(
				input[0] + input[1] + input[2]
			);
			input.erase(input.begin());
		}
		return part1_solver(sumVector);
	}

	static void runChallenge()
	{
		std::vector<int> day01data = parseFile<int>("datasample/day01.txt");
		std::cout << "Part 1 Answer: " << part1_solver(day01data) << std::endl;
		std::cout << "Part 2 Answer: " << part2_solver(day01data) << std::endl;
	}

};
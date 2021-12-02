#include <string>
#include "Utility.hpp"
#include <Windows.h>

class Day02
{
public:

	static int part1_solver(std::vector<std::string> input)
	{
		auto position = 0;
		auto depth = 0;

		for (auto i = 0; i < input.size(); i += 2)
		{
			std::string direction = input[i];
			int distance = std::stoi(input[i+1]);

			if (direction == "forward")
				position += distance;
			else if (direction == "up")
				depth -= distance;
			else if (direction == "down")
				depth += distance;
		}

		return position * depth;
	}

	static int part2_solver(std::vector<std::string> input)
	{
		auto position = 0;
		auto depth = 0;
		auto aim = 0;

		for (auto i = 0; i < input.size(); i += 2)
		{
			std::string direction = input[i];
			int distance = std::stoi(input[i + 1]);

			if (direction == "forward") {
				position += distance;
				depth += aim * distance;
			}
			else if (direction == "up")
				aim -= distance;
			else if (direction == "down")
				aim += distance;

		}

		return position * depth;
	}


	static void runChallenge()
	{
		std::vector<std::string> day02data = parseFile<std::string>("datasample/day02.txt");
		std::cout << "Part 1 Answer: " << part1_solver(day02data) << std::endl;
		std::cout << "Part 2 Answer: " << part2_solver(day02data) << std::endl;
	}
};
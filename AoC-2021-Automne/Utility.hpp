#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <filesystem>


// Shamelessly stolen and adapted from https://stackoverflow.com/a/32428334/9368926
template<typename T>
static std::vector<T> parseFile(std::filesystem::path path)
{
	std::vector<T> fileData;
    std::ifstream inputFile(path);

    if (inputFile.good()) {
        T current_var;
        while (inputFile >> current_var) {
            fileData.push_back(current_var);
        }

        inputFile.close();

#ifdef _DEBUG
        std::cout << "Vec: ";
        for (const auto &var: fileData) {
            std::cout << var << " ";
        }

        std::cout << std::endl << fileData.size() << std::endl;
#endif
    }
    else {
        std::cerr << "Error!" << std::endl;
        _exit(EXIT_FAILURE);
    }

    return fileData;
}
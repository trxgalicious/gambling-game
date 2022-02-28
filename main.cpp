#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <sstream>

int main()
{
    int input;
    int playAgain;

    std::string line;
    std::vector<std::string> lines;

    srand(time(NULL));

    std::ifstream file("numbers.txt");

    int total_lines = 0;
    while (std::getline(file, line))
    {
        total_lines++;
        lines.push_back(line);
    }

    int random_number = rand() % total_lines;
    // std::cout << lines[random_number];
    std::stringstream l(lines[random_number]);
    int x;
    l >> x;

    std::cout << "Please enter a number: ";
    std::cin >> input;

    while (input != x && input <= 100)
    {
        std::cout << "Try again! Enter a number: ";
        std::cin >> input;
    }

    if (input == x)
    {
        std::cout << "Congratulations you won!\n";
    }
    return 0;
}
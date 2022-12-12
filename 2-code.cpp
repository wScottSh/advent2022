// https://adventofcode.com/2022/day/2
// define all possible answers
// A X -> draw (1 + 3) = 4
// A Y -> win (2 + 6) = 8
// A Z -> lose (3 + 0) = 3
// B X -> lose (1 + 0) = 1
// B Y -> draw (2 + 3) = 5
// B Z -> win (3 + 6) = 9
// C X -> win (1 + 6) = 7
// C Y -> lose (2 + 0) = 2
// C Z -> draw (3 + 3) = 6

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <utility>

int main()
{
    // define variable to work with
    int totalScore = 0;
    std::map<std::string, int> scoreSheet = {
        {"A X", 4},
        {"A Y", 8},
        {"A Z", 3},
        {"B X", 1},
        {"B Y", 5},
        {"B Z", 9},
        {"C X", 7},
        {"C Y", 2},
        {"C Z", 6},
    };

    // Import file
    std::ifstream rounds("2-data.txt");
    std::string line;
    while (getline(rounds, line))
    {
        // Import file
        std::ifstream rounds("2-data.txt");
        std::string line;
        
        // iterate through the file, but translate each line into the number
        while (getline(rounds, line))
        {
            // // Use the find method to look up the value for the current line
            // auto it = values.find(line);
            // if (it != values.end())
            // {
            //     // If the line is found in the map, add each iteration to a variable 'score'
            //     totalScore += it->second;
            // }
        }
    }
    
    // print out the final 'score'
    std::cout << "test score: " << totalScore << std::endl;
}





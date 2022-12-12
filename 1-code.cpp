#include <iostream>
#include <fstream>
#include <vector>

int main() {
    // open the file to be worked with
    std::ifstream input("1-data.txt");
    
    // read the data and save it to a variable
    std::vector<int> calories;
    int calorie;
    while (input >> calorie)
    {
        calories.push_back(calorie);
    }

    // close the input file (for garbage colletion?)
    input.close();
    
    // write a function that separates the chunks newline separated chunks of data into a bunch of list/array (whatver they're called in C++)
    
}

// define the data as a variable
// write a function that iterates through every chunk and adds them together, pushing those into a new array
// return the highest number

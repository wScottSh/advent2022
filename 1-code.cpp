#include <iostream>     // for printing the results
#include <fstream>      // reads files
#include <vector>       // lets me build a vector array
#include <algorithm>    // brings in max_element

using namespace std;    // makes the code more readable so I don't have to write std:: in 
                        // front of everything

int main()  // the main function that is executed by c++
{
    // set up my variables: a vector to store data and temporary varibles to iterate
    vector<int> totals;     // defines a vector of integers called `totals`
    int current_elf = 0;    // defines current_elf for iterating
    int total = 0;          // defines total for an individual elf

    ifstream data_file("1-data.txt");   // open the file
    string line;                        // define a `line` variable for storing strings of data
    while (getline(data_file, line))    // iterate through the file looking at each line for a string
    {
        if (line.empty())               // look for a new elf via empty line separators
        {                               // then move to the next elf
            totals.push_back(total);    // puts the current total into the totals vector
            total = 0;                  // resets total back to 0
            current_elf++;              // iterates to the next elf
        }
        else                            // otherwise...
        {                               // do the actual adding
            total += stoi(line);        // convert the line into an int and add it to total
        }
    }

    // Print all the things
    auto first_highest = max_element(totals.begin(), totals.end());
    cout << "The first highest has " << *first_highest << " calories." << endl;
    totals.erase(first_highest);    // Use the iterator to erase the element from the vector

    // Find the second highest element in the updated vector
    auto second_highest = max_element(totals.begin(), totals.end());
    cout << "The second highest has " << *second_highest << " calories." << endl;
    totals.erase(second_highest);   // Use the iterator to erase the second highest element from the vector

    // Find the third highest element in the updated vector
    auto third_highest = max_element(totals.begin(), totals.end());
    cout << "The third highest has " << *third_highest << " calories." << endl;
    
    return 0;   // indicate the program ran successfully
}
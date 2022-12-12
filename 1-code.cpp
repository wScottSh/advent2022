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
    totals.push_back(total); // add the total for the final elf
    int max_total = *max_element(totals.begin(), totals.end()); // define the range and find the max
    cout << "Elf " << current_elf << " carried the most calories with " << max_total << "." << endl;    // print the output

    return 0;   // indicate the program ran successfully
}

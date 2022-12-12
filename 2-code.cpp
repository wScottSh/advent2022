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

// Import file
// iterate through the file, but translate each line into the number
    // use the above table to make a switch table [if line == 'A X' -> 4]
// add each iteration to a variable 'score'
// print out the final 'score'
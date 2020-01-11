//Given a string, write a function to check if it is a permutation of a palindrome. A palindrome is a word or phrase
//that is same forwards and backwards. A permutation is rearrangement of letters. The palindrome does not need to be limited
//to just dictionary words.
//EXAMPLE:
//Input: Tact Coa
//Ourput: True(permutations: taco cat, atco cta, etc.)
//RUNTIME: sort: n log n. Check for palindrome: n/2
//total runtime n long n + n/2 = n log n

#include <iostream>
#include "perm.h"
#include <algorithm>

int main() {
    std::string input, output;
    std::cout << "Please enter a input string: ";
    std::getline(std::cin, input);
    std::cout << "Please enter a output string: ";
    std::getline(std::cin, output);

    if(isPerm(input, output))
        std::cout << "The output string is a Palindrome Permutation of input string!";
    else
        std::cout << "The output string is NOT a Palindrome Permutation of input string!" << std::endl;
    return 0;
}

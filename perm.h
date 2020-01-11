//
// Created by Shweta on 1/11/2020.
//

#ifndef INC_1_4_PALINDROME_PERMUTATION_PERM_H
#define INC_1_4_PALINDROME_PERMUTATION_PERM_H

#include <algorithm>

bool isPerm(std::string input, std::string output){
    int sizeInput = input.size();
    int sizeOutput = output.size();
    //if input and output strings are not the same size return false
    if(sizeInput != sizeOutput)
        return false;
    //to check permutation: sort the strings and check if they are equal
    std::string inputString = "";
    std::string outputString = "";
    //convert the chars in each string to lower and then copy it to the new string
    for(int i = 0; i < input.size(); i++){
        inputString += tolower(input[i]);
        outputString += tolower(output[i]);
    }
    std::sort(inputString.begin(), inputString.end());
    std::sort(outputString.begin(), outputString.end());
    //if input and output strings are not equal return false
    if(inputString != outputString)
        return false;
    //check for palindrome: compare the end chars in the output string and continue to check for palindrome
    int end = output.size() - 1;
    int begin = 0;
    while(begin == end || begin < end){
        //compare the lowercase of both sides
        if(tolower(output[begin]) != tolower(output[end]))
            return false;
        //if the next char in either direction is a space ignore it by moving one space forward or backwards
        if(isspace(output[begin + 1]))
            begin++;
        if(isspace(output[end - 1]))
            end--;
        //continue with incrementing the begin and decrementing the back
        begin++;
        end--;
    }
    return true;
}
#endif //INC_1_4_PALINDROME_PERMUTATION_PERM_H

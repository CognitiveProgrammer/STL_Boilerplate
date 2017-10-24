/*
 * MIT Licence
 * Copyright 2017 @9lean
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files(the "Software"), to deal in the
 * Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and / or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject to the following conditions :
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
 * THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * visit https://github.com/9lean/STL_Boilerplate for description of the code
 */
#include <iostream>
#include <vector>
#include <algorithm>

// This function will demonstrate how to create and print STL arrays
void CreateAndPrintVector() {
    std::vector<int> vFirst = { 1,2,3,4,5 };
    // vectors can dynamically increase its size
    vFirst.push_back(6);
    vFirst.push_back(7);
    // Print using C++11 for loop
    for (auto &val : vFirst)
        std::cout<<val<<std::endl;
    
    std::vector<int> vSecond { 10,20,30,40,50 };
    vSecond.push_back(60);
    vSecond.push_back(70);
    // Printing using Iterator Based for loop
    for (std::vector<int>::iterator itr = vSecond.begin(); itr != vSecond.end(); itr++)
        std::cout<<*itr<<std::endl;
}

// This function will demonstrate how to access and change the contents of an STL Array
void AccessAndChangeVectorContents() {
    std::vector<int> vFirst { 1,2,3,4,5 };
    // Using [] operator
    vFirst [2] = vFirst[2] + 200;
    std::cout<<vFirst[2]<<std::endl;
    // using .at(...) function
    vFirst.at(3) = vFirst.at(3) + 300;
    std::cout<<vFirst.at(3)<<std::endl;
}
// This function will demonstrate how to erase from a vector container
void EraseFromVector() {
    std::vector<int> vFirst { 1,2,3,4,5 };
    // Erase 2 and 4
    vFirst.erase(vFirst.begin() + 1);
    // After first erase the vector will be {1,3,4,5}
    vFirst.erase(vFirst.begin() + 2);
    // Print using C++11 for loop
    for (auto &val : vFirst)
        std::cout<<val<<std::endl;
}

// This function will demonstrate how to use erase remove idiom to
// remove multiple elements from an array
void EraseRemoveIdiom() {
    std::vector<int> vFirst { 1,2,3,4,5,6,7,8,9,10 };
    // Erase all even numbers
    vFirst.erase(std::remove_if(vFirst.begin(), vFirst.end(), [](int val) {
        if(val % 2 != 0)
            return true;
        return false;
    }),vFirst.end());
    // Print using C++11 for loop
    for (auto &val : vFirst)
        std::cout<<val<<std::endl;
}

int main() {
    CreateAndPrintVector();
    std::cout<<"----------------------------------------------------"<<std::endl;
    AccessAndChangeVectorContents();
    std::cout<<"----------------------------------------------------"<<std::endl;
    EraseFromVector();
    std::cout<<"----------------------------------------------------"<<std::endl;
    EraseRemoveIdiom();
    return 1;
}

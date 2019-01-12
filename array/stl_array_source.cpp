/*
 * MIT Licence
 * Copyright 2017 @CodesBay
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
#include <array>

// This function will demonstrate how to create and print STL arrays
void CreateAndPrintArray() {
    std::array<int, 5> arrFirst = { 1,2,3,4,5 };
    // Print using C++11 for loop
    for (auto &arrval : arrFirst)
        std::cout<<arrval<<std::endl;
    
    std::array<int, 5> arrSecond { 10,20,30,40,50 };
    // Printing using Iterator Based for loop
    for (std::array<int, 5>::iterator itr = arrSecond.begin(); itr != arrSecond.end(); itr++)
        std::cout<<*itr<<std::endl;
}

// This function will demonstrate how to access and change the contents of an STL Array
void AccessAndChangeArrayContents() {
    std::array<int, 5> arrFirst { 1,2,3,4,5 };
    // Using [] operator
    arrFirst [2] = arrFirst[2] + 200;
    std::cout<<arrFirst[2]<<std::endl;
    // using .at(...) function
    arrFirst.at(3) = arrFirst.at(3) + 300;
    std::cout<<arrFirst.at(3)<<std::endl;
}

int main() {
    CreateAndPrintArray();
    std::cout<<"----------------------------------------------------"<<std::endl;
    AccessAndChangeArrayContents();
    
}

// Constructing stacks
#include <iostream>
#include <stack>
#include <vector>
#include <deque>

int main()
{
    std::deque<int> mydeque (3,100); // deque with 3 elements
    std::vector<int> myVector(2,2000); // vector with 2 elements 

    std::stack<int> first ; // empty stack
    std::stack<int> second (mydeque); // stack initialized to copy of deque

    std::stack<int, std::vector<int> > thrid; // empty stack using vector
    std::stack<int, std::vector<int> > fourth (myVector); // 

    std::cout << "Size of first: " << first.size() << "\n";
    std::cout << "Size of second: " << second.size() << "\n";
    std::cout << "Size of thrid: " << thrid.size() << "\n";
    std::cout << "Size of fourth: " << fourth.size() << "\n";

    return 0; 
}
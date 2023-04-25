/*
    Given s w/ '(, ), {, }, [, ]', determine if valid
    Ex. s = "()[]{}" -> true, s = "(]" -> false

    Stack of opens, check for matching closes & validity

    Time: O(n)
    Space: O(n)
*/
#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
        stack<char> open;
        unordered_map<char, char> parens = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };
        
        for (const auto& c : s) {
            if (parens.find(c) != parens.end()) {
                // if input starts with a closing bracket.
                if (open.empty()) {
                    return false;
                }

                if (open.top() != parens[c]) {
                    return false;
                }

                open.pop();
            } else {
                open.push(c);
            }
        }
        
        return open.empty();
}


int main(){

    string s1 = "()";
    std::cout << isValid(s1) << "\n";
    string s2 = "()[]{}";
    std::cout << isValid(s2) << "\n";
    string s3 = "({})";
    std::cout << isValid(s3) << "\n";
    string s4 = "[(]";
    std::cout << isValid(s4) << "\n";

    return 0;
}



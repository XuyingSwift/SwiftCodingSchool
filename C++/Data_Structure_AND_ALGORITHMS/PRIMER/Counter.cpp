#include <iostream>
// A class consists of members. member vairbales and member functions
class Counter
{
private:
    int count; // the counter's value
// public interface and these entites that users of the class are allowed to access.
public:
    Counter(); // initialization 
    int getCount(); // get the current count
    void increaseBy(int x); // add x to the count
    ~Counter();
};

Counter::Counter() // constructor A constructor’s job is to initialize the values of the class's member variables.
{
    count = 0;
}

int Counter::getCount() // get current count
{
    return count;
}

void Counter::increaseBy(int x) // add x to the count
{
    count += x;
}
Counter::~Counter() 
{
}

int main()
{
    Counter ctr; // an instance of Counter
    std::cout << ctr.getCount() << '\n';
    ctr.increaseBy(3);
    std::cout << ctr.getCount() << '\n';
    ctr.increaseBy(5);
    std::cout << ctr.getCount() << '\n';
}

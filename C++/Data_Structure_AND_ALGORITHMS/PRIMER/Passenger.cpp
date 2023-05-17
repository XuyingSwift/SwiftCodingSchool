#include <iostream>
#include <string>
using namespace std;

class Passenger
{
private:
    /* data */
    string   name;        // passenger name;
    //MealType mealPref;    // meal preference
    bool     isFreqFlyer; // is a frequent flyer?
    string   freqFlyerNo; // frequent flyer number
public:
    Passenger();                   // constructor 
    Passenger(const string& nm, const string& ffn); // constructor given member values
    // The keyword “const” indicates that the member function isFrequentFlyer is an accessor. which only read class data
    const bool isFrequentFlyer();  // is this a frequent flyer
    void makeFreuentFlyer(const string& newFreqFlyerNO);
    const string getFreqFlyerNo();
    const string getName();
    ~Passenger();
};

Passenger::Passenger(/* args */)
{
    name = "--NO NAME--";
    isFreqFlyer = false;
    freqFlyerNo = "NONE";
}

Passenger::Passenger(const string& nm, const string& ffn) // constructor given member values
{
    name = nm;
    isFreqFlyer = (ffn != "NONE"); // true only if ffn given
    freqFlyerNo = ffn;
}

// Passenger::Passenger(const Passenger& pass)
// {
//     name = pass.name;
//     isFreqFlyer = pass.isFreqFlyer;
//     freqFlyerNo = pass.freqFlyerNo;
// }

const bool Passenger::isFrequentFlyer()
{
    return isFreqFlyer;
}

const string Passenger::getFreqFlyerNo()
{
    return freqFlyerNo;
}

const string Passenger::getName()
{
    return name;
}

void Passenger::makeFreuentFlyer(const string& newFreqFlyerNo)
{
    isFreqFlyer = true;
    freqFlyerNo = newFreqFlyerNo;
}
// A constructor is called when a class object comes into existence. 
// A destructor is a member function that is automatically called when a class object ceases to exist.
Passenger::~Passenger()
{
}

int main()
{
    Passenger pass; // pass is a Passenger
    if (!pass.isFrequentFlyer()) // not ready a frequent flyer?
    {
        pass.makeFreuentFlyer("123456789"); // set pass's freq flyer number
    }

    std::cout << pass.getFreqFlyerNo() << "\n";

    Passenger p1;                            // default constructor
    Passenger p2("John Smith", "999999999"); // second constructor
    Passenger p3("HAPPY", "213213213132"); 
    Passenger p4(p3);                        // cpied from p3
    Passenger* pp1 = new Passenger;          // default constructor
    //Passenger* pp2 = new Passenger("Peter", "45464654654");
    std::cout << p2.getName() << " : " << p2.getFreqFlyerNo() << '\n';
    std::cout << p4.getName() << " : " << p4.getFreqFlyerNo() << '\n';
    //std::cout << pp2->getName() << " : " << pp2->getFreqFlyerNo() << "\n";
    // If a class object comes into existence dynamically using the new operator, 
    // the destructor will be called when this object is destroyed using the delete operator.
    delete(pp1);
    //delete(pp2);

    return 0;
}

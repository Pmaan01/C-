#include <iostream>
#include <string>

using namespace std;
class Animal
{
private:
    size_t  count{};
    string name{};

protected:  // access given to subclasses from the superclass
    Animal(string str) : name(str), count(0)
    {
        std::cout << "Animal " <<str<< " is created\n";
    }
    ~Animal()
    {
        std::cout << "Animal " << name << " is being destroyed ";
    }

public:

   string getName() const
    {
        return name;
    }

   size_t getCount() const
   {
       return count;
   }
};

class Dog : public Animal //inheritance// dog has all that animal have.
{
public:

    Dog(std::string n, bool tail) : Animal(n) , hasTail(tail)
    {
        std::cout << "A dog is created\n";

    }
    ~Dog()
    {
        std::cout << "A dog is delteted\n";
    }
private:
    bool hasTail;

};

class Bear : public Animal
{
public:
    enum BearType{ Black, Brown, Grizzly };

    Bear(std::string n, BearType t) : Animal(n), theType(t)
    {
        std::cout << "A Bear is created\n";

    }
    ~Bear()
    {
        std::cout << "A dog is delteted\n";
    }
private:
    BearType theType;


};

int main()
{
    Dog mydog("Strom", false);
    Dog myneighborDog("Hannah", true);

    Bear sfuBear("aiBear", Bear::BearType::Black);

        return 0;

}
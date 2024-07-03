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

/* The following example implements a simple class hierarchy for cars. here we are going to see "multiple inheritance", Amoung other things.*/

class Vehicle //base class for any vehicle
{

protected: // it cannot be used for creating independent vehicle from outside.

    Vehicle(std::string n) :name(n), color("black"), weight(0), power(0), primeMover("")
    {
        std::cout << "Vehicle " << name << " created.\n";
    
    }

    ~Vehicle()
    {
        std::cout << "~Vehicle " << name << " is being deleted.\n";
    }

    //setters and getters

    void setColor(std::string c)
    {
        color = c;
    }

    std::string getColor() const
    {
        return color;
    }
    public:
                                                //virtual will make prevoius version disappear as in overriding new version will be used everywhere like for pointer. only for the classes those overrided the function only.
        virtual float speedAverage() const = 0; // makes a abstract of the base class cannot use the class even with public/
                                               // only one method is pure means = 0 makes the whole class and functions just an abstract. 
                                               // // every subclass should have pure abstract function called interface 
    
   
protected:  
    std::string name{};
    std::string color;
    int weight;
    int power;  //in horsepower unit
    std::string primeMover; // method of locomotion like jetengine, wheel, wind, sliding
};

class GasVehicle : public Vehicle
{
public:
    GasVehicle(std::string n) : Vehicle(n)
    {
        primeMover = "GasEngine";
        std::cout << "GasVehicle " << name << " created.\n";

    };

    ~GasVehicle()
    {
        std::cout << "~GasVehicle " << name << " is being deleted.\n";
    }
    float speedAverage() const { return 30; }
private:

    float engineSize;  ///size of gas engine, usually in litre
    float mpl;  ///means miles per litre

    
};


class ElectricVehlicle : public Vehicle
{


public:

    ElectricVehlicle(std::string n) : Vehicle(n), numOfBatteries(1), batteryCapacity(0), mpc(0)
    {

        std::cout << "ElectricVehlicle " << name << " created.\n";
    }


    ~ElectricVehlicle()
    {
        std::cout << "~ElectricVehlicle " << name << " is being deleted.\n";
    }

    
private:
    int numOfBatteries;
    float batteryCapacity;
    float mpc; //milage per charge
    float speedAverage() const { return 0; }

};

class HybridVehicle: public GasVehicle, public ElectricVehlicle
{
public:

    HybridVehicle(std::string n): GasVehicle(n), ElectricVehlicle(n)
    {
        std::cout << "HybridVehlicle " << n << " created.\n";
    }

    ~HybridVehicle()
    {
        std::cout << "~ElectricVehlicle "  << " is being deleted.\n";
    }
    float speedAverage() const { return 0; }
};
int main()
{
    // Dog mydog("Strom", false);
    // Dog myneighborDog("Hannah", true);


    // Bear sfuBear("aiBear", Bear::BearType::Black);
   //Vehicle ghostVehicle("ImaginaryVehicle");
    GasVehicle gCar("Ford ");

    std::cout << gCar.speedAverage();
    ElectricVehlicle eCar("C V");
    HybridVehicle hCar("T P");

    return 0;

}
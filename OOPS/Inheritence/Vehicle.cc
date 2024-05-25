#include <iostream>
using namespace std;
class Vehicle
{
protected:
    int mileage;
    int price;
    virtual void display() = 0;
};
class Car : public Vehicle
{
protected:
    float ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;

public:
    virtual void display() = 0;
};
class Bike : public Vehicle
{
protected:
    int numberCylinders;
    int numberGears;
    string coolingType;
    string wheelType;
    int fuelTanksize;
    virtual void display() = 0;
};
class Audi : public Car
{
    string modelType;

public:
    void getDetails()
    {
        cout << "Audi" << endl;
        cout << "Enter Mileage: ";
        cin >> mileage;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Ownership Cost: ";
        cin >> ownershipCost;
        cout << "Enter Warranty(By years): ";
        cin >> warranty;
        cout << "Enter Seating capacity: ";
        cin >> seatingCapacity;
        cout << "Enter Fuel type(Diesel or Petrol): ";
        cin >> fuelType;
        cout << "Enter Model type: ";
        cin >> modelType;
    }
    void display()
    {
        cout << "Audi" << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
        cout << "Ownership Cost: " << ownershipCost << endl;
        cout << "Warranty(By years): " << warranty << endl;
        cout << "Seating capacity: " << seatingCapacity << endl;
        cout << "Fuel type(Diesel or Petrol): " << fuelType << endl;
        cout << "Model type: " << modelType << endl;
    }
};
class Ford : public Car
{
    string modelType;

public:
    void getDetails()
    {
        cout << "Ford" << endl;
        cout << "Enter Mileage: ";
        cin >> mileage;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Ownership Cost: ";
        cin >> ownershipCost;
        cout << "Enter Warranty(By years): ";
        cin >> warranty;
        cout << "Enter Seating capacity: ";
        cin >> seatingCapacity;
        cout << "Enter Fuel type(Diesel or Petrol): ";
        cin >> fuelType;
        cout << "Enter Model type: ";
        cin >> modelType;
    }
    void display()
    {
        cout << "Ford" << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
        cout << "Ownership Cost: " << ownershipCost << endl;
        cout << "Warranty(By years): " << warranty << endl;
        cout << "Seating capacity: " << seatingCapacity << endl;
        cout << "Fuel type(Diesel or Petrol): " << fuelType << endl;
        cout << "Model type: " << modelType << endl;
    }
};
class Bajaj : public Bike
{
    string makeType;

public:
    void getDetails()
    {
        cout << "Bajaj" << endl;
        cout << "Enter Mileage: ";
        cin >> mileage;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number cylinders: ";
        cin >> numberCylinders;
        cout << "Enter Number gears: ";
        cin >> numberGears;
        cout << "Enter Cooling type(Air, Liquid or Oil): ";
        cin >> coolingType;
        cout << "Enter Wheel Type(Alloys or Spokes): ";
        cin >> wheelType;
    }
    void display()
    {
        cout << "Bajaj" << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
        cout << "Number cylinders: " << numberCylinders << endl;
        cout << "Number gears: " << numberGears << endl;
        cout << "Cooling type(Air, Liquid or Oil): " << coolingType << endl;
        cout << "Wheel Type(Alloys or Spokes) :" << wheelType << endl;
    }
};
class TVS : public Bike
{
    string makeType;

public:
    void getDetails()
    {
        cout << "TVS" << endl;
        cout << "Enter Mileage: ";
        cin >> mileage;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number cylinders: ";
        cin >> numberCylinders;
        cout << "Enter Number gears: ";
        cin >> numberGears;
        cout << "Enter Cooling type(Air, Liquid or Oil): ";
        cin >> coolingType;
        cout << "Enter Wheel Type(Alloys or Spokes): ";
        cin >> wheelType;
    }
    void display()
    {
        cout << "TVS" << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
        cout << "Number cylinders: " << numberCylinders << endl;
        cout << "Number gears: " << numberGears << endl;
        cout << "Cooling type(Air, Liquid or Oil): " << coolingType << endl;
        cout << "Wheel Type(Alloys or Spokes):" << wheelType << endl;
    }
};
int main()
{
    Audi carAudi;
    Ford carFord;
    Bajaj bikeBajaj;
    TVS bikeTVS;
    carAudi.getDetails();
    carAudi.display();
    cout << "\n";
    carFord.getDetails();
    carFord.display();
    cout << "\n";
    bikeBajaj.getDetails();
    bikeBajaj.display();
    cout << "\n";
    bikeTVS.getDetails();
    bikeTVS.display();
}
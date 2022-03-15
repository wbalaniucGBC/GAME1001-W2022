#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CostInfo
{
	double food,	// Food costs
		medical,	// Medical costs
		license,	// License fee
		misc;		// Miscellanous costs
};

struct PetInfo
{
	string name;	// Pet name
	string type;	// Pet type
	int age;		// Pet age

	// Medical costs
	CostInfo cost;	// Cost information

	// Default constructor
	PetInfo()
	{
		name = "unknown";
		type = "unknwon";
		age = 0;
		cost.food = cost.medical = cost.license = cost.misc = 0.00;
	}
};

//int main()
//{
//	// Define a PetInfo structure variable called pet
//	PetInfo pet;
//
//	pet.name = "Duke";
//	pet.type = "Cat";
//	pet.age = 6;
//	pet.cost.food = 300.00;
//	pet.cost.medical = 200.00;
//	pet.cost.license = 7.00;
//
//	// Display the total annual costs for the pet
//	cout << fixed << showpoint << setprecision(2);
//	cout << "Annual costs for my " << pet.age << "-year-old " << pet.type << " "
//		<< pet.name << " are $" << (pet.cost.food + pet.cost.medical +
//			pet.cost.license + pet.cost.misc) << endl;
//
//	return 0;
//}
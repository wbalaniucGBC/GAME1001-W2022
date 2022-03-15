#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct InvItem
{
	int partNum;
	string description;
	int onHand;
	double price;
};

// Function prototypes
InvItem getItemData();

void showItem(const InvItem &);		

//int main()
//{
//	InvItem part;
//
//	part = getItemData();
//	showItem(part);
//	
//	return 0;
//}

// getItemData
InvItem getItemData()
{
	InvItem item;

	cout << "Enter the part number: ";
	cin >> item.partNum;
	cout << "Enter the part description: ";
	cin.get();
	getline(cin, item.description);
	cout << "Enter the quantity on hand: ";
	cin >> item.onHand;
	cout << "Enter the unit price: ";
	cin >> item.price;

	return item;
}

void showItem(const InvItem& item)
{
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Part Number   : " << item.partNum << endl;
	cout << "Description   : " << item.description << endl;
	cout << "Units on Hand : " << item.onHand << endl;
	cout << "Price         : $" << item.price << endl;
}
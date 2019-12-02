#include <iostream>
using namespace std;

// Iphone class with four attributes
class Iphone{
	public:
		string name;
		int price;
		float screenSize;
		string waterResist;
};

int main(){
	
	// Create an object of Iphone -> pro
	Iphone pro;
	pro.name = "Iphone 11 Pro";
	pro.price = 67990;
	pro.screenSize = 5.8;
	pro.waterResist = "4m";
	
	// Create an object of Iphone -> proMax
	Iphone proMax;
	proMax.name = "Iphone 11 Pro Max";
	proMax.price = 73990;
	proMax.screenSize = 6.5;
	proMax.waterResist = "4m";
	
	// Create an object of Iphone -> elev
	Iphone elev;
	elev.name = "Iphone 11";
	elev.price = 47990;
	elev.screenSize = 6.1;
	elev.waterResist = "2m";
	
	// Print attribute values
	cout << endl << pro.name << "\t" << proMax.name << "\t" << elev.name;
	cout << endl << pro.price << "\t\t" << proMax.price << "\t\t\t" << elev.price;
	cout << endl << pro.screenSize << "\t\t" << proMax.screenSize << "\t\t\t" << elev.screenSize;
	cout << endl << pro.waterResist << "\t\t" << proMax.waterResist << "\t\t\t" << elev.waterResist;
	
	return 0;
}

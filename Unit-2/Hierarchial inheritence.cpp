

#include <iostream>
using namespace std;
/*Hierarchical inheritance : multiple derived classes inherit from a single base class. Each derived class shares
the common properties and member functions of the same base class while having its own additional features
*/
class Vehicle {
public:
	void start() {
		cout<<"Engine Started \n";
	}
	void Stop() {
		cout<<"Engine off \n";

	}
};
class Bike: public Vehicle {
public:
	void wheelie() {
		cout<<"Performing a wheelie \n";
	}
};

class Car: public Vehicle {
public:
	void donut() {
		cout<<"Making donuts on road \n";
	}
};
int main()
{
	Car Nissan;
	Bike Bullet;
	Bullet.start();
	Bullet.wheelie();
	Bullet.Stop();
	Nissan.start();
	//  Nissan.wheelie(); and Bullet.donut() give error
	Nissan.donut();
	Nissan.Stop();

	return 0;
}
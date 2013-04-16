#include <iostream>
#include "car.h"

void main()
{
	Car * c = new Car("Volga", 5);
	Bus * b = new Bus("Ikarus", 45, 20);

	c->printInfo();
	b->printInfo();

	c = new Bus("Mercedes", 150, 50);

	c->printInfo();
}
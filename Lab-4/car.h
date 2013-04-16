class Car
{
protected:
	int speed;
	char* name;
public:
	Car()
	{
		name = new char[0];
		speed = 0;
	}
	Car(char * name, int speed)
	{
		this->name = name;
		this->speed = speed;
	}
	void virtual printInfo()
	{
		std::cout<<"Name: "<<name<<std::endl<<"Speed: "<<speed<<std::endl;
	}
};
class Bus : public Car
{
private:
	int passengers;
public:
	Bus()
	{
		name = new char[0];
		speed = 0;
		passengers = 0;
	}
	Bus(char * name, int speed, int maxPassengers)
	{
		this->name = name;
		this->speed = speed;
		this->passengers = maxPassengers;
	}
	void printInfo()
	{
		Car::printInfo();
		std::cout<<"Max Passengers: "<<passengers<<std::endl;
	}
};
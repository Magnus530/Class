#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class cars
{
protected:
	int secretSpeed = 8;
	std::string secretType;
public:
	int speed = 2;
	std::string type;
public:
	int drive(int speed)
	{
		speed = 6;
		return(speed);
	}

	std::string purchase(std::string type)
	{
		type += "purchased";
		return(type);
	}

	friend class borrowCar;
};

class honda : cars
{
private:
	int hondaSpeed = 2, hS = 0;
	std::string hType;
public:
	void carsList()
	{
		std::cout << "Honda speed: " << hondaSpeed;
		hS = drive(hondaSpeed);
		std::cout << "\nNew Honda speed: " << hS << "\n";
	}

	void carInfo()
	{
		type = "Honda";
		std::cout << type << "\n";
		hType = purchase(type);
		std::cout << hType << "\n";
	}
}h;

class dodge : cars
{
private:
	int dodgeSpeed = 3, dS = 0;
	std::string dType;
public:
	void carsList()
	{
		std::cout << "Dodge speed: " << dodgeSpeed;
		dS = drive(dodgeSpeed);
		std::cout << "\nNew Dodge speed: " << dS << "\n";
	}

	void carInfo()
	{
		type = "Dodge";
		std::cout << type << "\n";
		dType = purchase(type);
		std::cout << dType << "\n";
	}
}d;

class borrowCar : cars
{
private:
	int sS = 0;
public:
	void carsList()
	{
		std::cout << "\nSecret speed: " << secretSpeed;
		sS = drive(secretSpeed);
		std::cout << "\nNew secret speed: " << sS << "\n";
	}
}s;

int main()
{
	h.carsList();
	h.carInfo();
	d.carsList();
	d.carInfo();
	s.carsList();
}


/*This project file is used for testing code*/
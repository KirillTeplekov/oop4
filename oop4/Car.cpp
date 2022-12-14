#include "Car.h"
#include <sstream>



string Car::toString(unsigned int value)
{
	stringstream out;
	out << value;
	return out.str();
}

Car::Car() : trademark("default mark"), cyclinders(6), enginePower(100) {};

Car::Car(string _tMark, unsigned int _cyclinders, unsigned int _enginePower): trademark(_tMark), cyclinders(_cyclinders), enginePower(_enginePower) {};

string Car::getTrademark()
{
	return trademark;
}

void Car::setTrademark(string _tMark)
{
	trademark = _tMark;
}

string Car::getCyclinders()
{
	return toString(cyclinders);
}

void Car::setCyclinders(unsigned int amount)
{
	cyclinders = amount;
}

string Car::getEnginePower()
{
	return toString(enginePower);
}

void Car::setEnginePower(unsigned int value)
{
	enginePower = value;
}

void Car::raiseEnginePower(unsigned int value)
{
	enginePower += value;
}

void Car::reduceEnginePower(unsigned int value)
{
	if (value > enginePower)
		throw std::invalid_argument("?? ????????? ????????? ?? ???????? ??????? ????????");
	else
		enginePower -= value;
}

ostream& operator<<(ostream& out, const Car car)
{
	out << "Car " << car.trademark << " cycl.:" << car.cyclinders << " e.p.:" << car.enginePower;
	return out;
}

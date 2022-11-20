#include "Lorry.h"
#include <sstream>
#include <exception>

string Lorry::toString(unsigned int value)
{
	stringstream out;
	out << value;
	return out.str();
}

Lorry::Lorry()
{
	setTrademark("default lorry mark");
	setCyclinders(8);
	setEnginePower(500);
	setCapacity(1000);
}

Lorry::Lorry(string _tMark, unsigned char _cyclinders, unsigned int _enginePower, unsigned int _capacity)
{
	setTrademark(_tMark);
	setCyclinders(_cyclinders);
	setEnginePower(_enginePower);
	setCapacity(_capacity);
}

string Lorry::getCapacity()
{
	return toString(capacity);
}

void Lorry::setCapacity(unsigned int value)
{
	capacity = value;
}

void Lorry::raiseCapacity(unsigned int value)
{
	capacity += value;
}

void Lorry::reduceCapacity(unsigned int value)
{
	if (value > capacity)
		throw std::invalid_argument("Вы пытаетесь уменьшить на значение большее текущего");
	else
		capacity -= value;
}

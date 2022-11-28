#include "Lorry.h"
#include <sstream>
#include <exception>

Lorry::Lorry()
{
	a = new int;
	setTrademark("default lorry mark");
	setCyclinders(8);
	setEnginePower(500);
	setCapacity(1000);
}

Lorry::Lorry(string _tMark, unsigned int _cyclinders, unsigned int _enginePower, unsigned int _capacity) : Car(_tMark, _cyclinders, _enginePower), capacity(_capacity) {
	a = new int;
}

Lorry::~Lorry() {
	delete a;
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

ostream& operator<<(ostream& out, Lorry lorry)
{
	out << "Lorry " << lorry.getTrademark() << " cycl.:" << lorry.getCyclinders() << " e.p.:" << lorry.getEnginePower() << " cap.:" << lorry.getCapacity();
	return out;
}

#pragma once
#include "Car.h"
class Lorry : public Car
{
	unsigned int capacity;
	string toString(unsigned int  value);
public:
	/*
	Конструктор по умолчанию, создаёт экземпляр класса Lorry("default lorry mark", 8, 500, 1000)
	*/
	Lorry();

	/*
	Конструктор класса
	@param _tMark - марка машины
	@param _cyclinders - кол-во цилиндров
	@param _enginePower - мощность двигателя
	@param _capacity - грузоподъемность
	*/
	Lorry(string _tMark, unsigned char _cyclinders, unsigned int  _enginePower, unsigned int _capacity);

	/*
	Получить грузоподъемность
	@return - возвращает string (значение capacity)
	*/
	string getCapacity();

	/*
	Установить грузоподъемность
	@param value - грузоподъемность
	*/
	void setCapacity(unsigned int value);

	/*
	Увеличить грузоподъемность
	@param value - грузоподъемность
	*/
	void raiseCapacity(unsigned int value);

	/*
	Уменьшить грузоподъемность
	@param value - грузоподъемность
	*/
	void reduceCapacity(unsigned int value);
};


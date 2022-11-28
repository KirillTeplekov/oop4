#pragma once
#include <string>
#include <iostream>

using namespace std;

class Car
{
	string trademark;
	unsigned int cyclinders;
	unsigned int  enginePower;
protected:
	string toString(unsigned int  value);

public:
	/*
	Конструктор по умолчанию, создаёт экземпляр класса Car("default mark", 6, 100)
	*/
	Car();

	/*
	Конструктор класса
	@param _tMark - марка машины
	@param _cyclinders - кол-во цилиндров
	@param _enginePower - мощность двигателя
	*/
	Car(string _tMark, unsigned int _cyclinders, unsigned int  _enginePower);

	virtual ~Car() {}
	/*
	Получить марку машины
	@return - возвращает string (значение trademark)
	*/
	string getTrademark();

	/*
	Установить марку машины
	@param _tMark - марка машины
	*/
	void setTrademark(string _tMark);

	/*
	Получить кол-во цилиндров
	@return - возвращает string (значение сyclinders)
	*/
	string getCyclinders();

	/*
	Установить кол-во цилиндров
	@param amount - число цилиндров
	*/
	void setCyclinders(unsigned int amount);

	/*
	Получить мощность двигателя
	@return - возвращает string (значение enginePower)
	*/
	string getEnginePower();

	/*
	Установить мощность двигателя
	@param value - мощность двигателя
	*/
	void setEnginePower(unsigned int value);

	/*
	Увеличить мощность 
	@param value - мощность двигателя
	*/
	void raiseEnginePower(unsigned int value);

	/*
	Уменьшить мощность
	@param value - мощность двигателя
	*/
	void reduceEnginePower(unsigned int value);

	/*
	Потоковый вывод LongLong
	@param out - поток вывода
	@param car - выводимый Car
	@return - возвращает поток вывода
	*/
	friend ostream& operator<<(ostream& out, const Car car);
};


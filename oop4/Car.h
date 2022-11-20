#pragma once
#include <string>

using namespace std;

class Car
{
	string trademark;
	unsigned char cyclinders;
	unsigned int  enginePower;

	string toString(unsigned char amount);
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
	Car(string _tMark, unsigned char _cyclinders, unsigned int  _enginePower);

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
	void setEnginePower(unsigned value);

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
};


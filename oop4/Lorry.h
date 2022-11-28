#pragma once
#include "Car.h"

class Lorry : public Car
{
	unsigned int capacity;
	int* a;
public:

	/*
	����������� �� ���������, ������ ��������� ������ Lorry("default lorry mark", 8, 500, 1000)
	*/
	Lorry();

	/*
	����������� ������
	@param _tMark - ����� ������
	@param _cyclinders - ���-�� ���������
	@param _enginePower - �������� ���������
	@param _capacity - ����������������
	*/
	Lorry(string _tMark, unsigned int _cyclinders, unsigned int  _enginePower, unsigned int _capacity);

	~Lorry();
	/*
	�������� ����������������
	@return - ���������� string (�������� capacity)
	*/
	string getCapacity();

	/*
	���������� ����������������
	@param value - ����������������
	*/
	void setCapacity(unsigned int value);

	/*
	��������� ����������������
	@param value - ����������������
	*/
	void raiseCapacity(unsigned int value);

	/*
	��������� ����������������
	@param value - ����������������
	*/
	void reduceCapacity(unsigned int value);

	/*
	��������� ����� LongLong
	@param out - ����� ������
	@param lorry - ��������� Lorry
	@return - ���������� ����� ������
	*/
	friend ostream& operator<<(ostream& out, Lorry lorry);
};


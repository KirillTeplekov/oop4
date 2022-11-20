#pragma once
#include "Car.h"
class Lorry : public Car
{
	unsigned int capacity;
	string toString(unsigned int  value);
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
	Lorry(string _tMark, unsigned char _cyclinders, unsigned int  _enginePower, unsigned int _capacity);

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
};


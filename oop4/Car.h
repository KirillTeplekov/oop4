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
	����������� �� ���������, ������ ��������� ������ Car("default mark", 6, 100)
	*/
	Car();

	/*
	����������� ������
	@param _tMark - ����� ������
	@param _cyclinders - ���-�� ���������
	@param _enginePower - �������� ���������
	*/
	Car(string _tMark, unsigned int _cyclinders, unsigned int  _enginePower);

	virtual ~Car() {}
	/*
	�������� ����� ������
	@return - ���������� string (�������� trademark)
	*/
	string getTrademark();

	/*
	���������� ����� ������
	@param _tMark - ����� ������
	*/
	void setTrademark(string _tMark);

	/*
	�������� ���-�� ���������
	@return - ���������� string (�������� �yclinders)
	*/
	string getCyclinders();

	/*
	���������� ���-�� ���������
	@param amount - ����� ���������
	*/
	void setCyclinders(unsigned int amount);

	/*
	�������� �������� ���������
	@return - ���������� string (�������� enginePower)
	*/
	string getEnginePower();

	/*
	���������� �������� ���������
	@param value - �������� ���������
	*/
	void setEnginePower(unsigned int value);

	/*
	��������� �������� 
	@param value - �������� ���������
	*/
	void raiseEnginePower(unsigned int value);

	/*
	��������� ��������
	@param value - �������� ���������
	*/
	void reduceEnginePower(unsigned int value);

	/*
	��������� ����� LongLong
	@param out - ����� ������
	@param car - ��������� Car
	@return - ���������� ����� ������
	*/
	friend ostream& operator<<(ostream& out, const Car car);
};


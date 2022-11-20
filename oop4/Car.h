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
	����������� �� ���������, ������ ��������� ������ Car("default mark", 6, 100)
	*/
	Car();

	/*
	����������� ������
	@param _tMark - ����� ������
	@param _cyclinders - ���-�� ���������
	@param _enginePower - �������� ���������
	*/
	Car(string _tMark, unsigned char _cyclinders, unsigned int  _enginePower);

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
	void setEnginePower(unsigned value);

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
};


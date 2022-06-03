#pragma once

#include <cmath>	// ��� ���������� � ������� � ���������� ����������� �����
#include <iostream>

class SecondTask
{
public:
	SecondTask();


	void showData();	//showData() - ���������� ���������� ����� ������������� � ������� ����� 
	
	float calculateDistanceFromPointO1(std::pair<int, int>);		//���������� ���������� �� ����� �1, �� ������� �����
	float calculateDistanceFromPointO2(std::pair<int, int>);		//���������� ���������� �� ����� �2, �� ������� �����

	~SecondTask() = default;

	std::pair<int, int> Pn[5];

private:
	//������
	int O1[2];
	int O2[2];

	int R1;
	int R2;



};


#pragma once

#include <cmath>	// ƒл€ возведени€ в степень и вычислени€ квадратного корн€
#include <iostream>

class SecondTask
{
public:
	SecondTask();


	void showData();	//showData() - показывает координаты точек манипул€торов и целевой точки 
	
	float calculateDistanceFromPointO1(std::pair<int, int>);		//¬озвращает рассто€ние от точки ќ1, до целевой точки
	float calculateDistanceFromPointO2(std::pair<int, int>);		//¬озвращает рассто€ние от точки ќ2, до целевой точки

	~SecondTask() = default;

	std::pair<int, int> Pn[5];

private:
	//ƒанные
	int O1[2];
	int O2[2];

	int R1;
	int R2;



};


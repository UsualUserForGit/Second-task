#include "SecondTask.h"



SecondTask::SecondTask() : O1{ int(-10 + rand() % 20), int(-10 + rand() % 20) }, O2{ int(-10 + rand() % 20) , int(-10 + rand() % 20) },
R1(1 + rand() % 5), R2(1 + rand() % 5)
{
	for (int i = 0; i < 5; i++) 
	{
		Pn[i].first = int(-10 + rand() % 20), int(-10 + rand() % 20);
		Pn[i].second = int(-10 + rand() % 20), int(-10 + rand() % 20);
	}

}

void SecondTask::showData()
{
	std::cout << "Есть массив точек:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "{" << Pn[i].first << ", " << Pn[i].second << "}, ";
	}
	std::cout << std::endl << std::endl << "M1: ({"  << O1[0] << ", " << O1[1] << "}, " << R1 << ")" << std::endl;
	std::cout << "M2: ({" << O2[0] << ", " << O2[1] << "}, " << R2 << ")" << std::endl << std::endl;


}

float SecondTask::calculateDistanceFromPointO1(std::pair<int, int> pair)
{
	return float(sqrt(pow(pair.first - O1[0], 2) + pow(pair.second - O1[1], 2)));
}

float SecondTask::calculateDistanceFromPointO2(std::pair<int, int> pair)
{
	return float(sqrt(pow(pair.first - O2[0], 2) + pow(pair.second - O2[1], 2)));
}

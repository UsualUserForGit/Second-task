#include "SecondTask.h"

#include <ctime>
#include <vector>
#include <string>


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	SecondTask object;

	std::string chamber = "|           ";

	object.showData();

	std::cout << "Итерация     ";

	for (int i = 0; i < 5; ++i)
	{
		std::cout << "|" << i + 1 << "          ";
	}

	std::cout << std::endl << "Манипулятор 1";

	for (int i = 0; i < 5; ++i)
	{
		if (object.calculateDistanceFromPointO1(object.Pn[i]) < object.calculateDistanceFromPointO2(object.Pn[i]))
		{
			std::string tempString = ('{' + std::to_string(object.Pn[i].first) + ", " + std::to_string(object.Pn[i].second) + '}');
			chamber.insert(1, tempString);
			chamber.resize(12);
			std::cout << chamber;
		}
		else
		{
			chamber = "|           ";
			std::cout << chamber;
		}
	}

	std::cout << std::endl << "Манипулятор 2";

	for (int i = 0; i < 5; ++i)
	{
		if (object.calculateDistanceFromPointO1(object.Pn[i]) > object.calculateDistanceFromPointO2(object.Pn[i]))
		{
			std::string tempString = ('{' + std::to_string(object.Pn[i].first) + ", " + std::to_string(object.Pn[i].second) + '}');
			chamber.insert(1, tempString);
			chamber.resize(12);
			std::cout << chamber;
		}
		else
		{
			chamber = "|           ";
			std::cout << chamber;
		}
	}
	std::cout << std::endl;

	return 0;
}
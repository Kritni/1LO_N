#ifndef TRAIN_H
#define TRAIN_H

#include "Transport.h"

//Класс "поезд"
class Train : public Transport {
	int Сars_amount; //Число вагонов
public:
	void In_Data(ifstream& ifst); //Функция ввода информации о поезде
	void Out_Data(int Speed, int Distance, ofstream& ofst); //Функция вывода информации о поезде
	double Transport_Travel_time(int Speed, int Distance); //Функция подсчета времени транспорта в пути
	Train() {};
};

#endif // SPHERE_H

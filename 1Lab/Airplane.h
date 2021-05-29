#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Transport.h"

//Класс "самолет"
class Airplane : public Transport {
    int Flight_range; //Дальность полета
    int Load_capacity; //Грузоподъемность
public:
    void In_Data(ifstream& ifst); //Функция ввода информации о самолете
    void Out_Data(int Speed, int Distance, ofstream& ofst); //Функция вывода информации о самолете
    double Transport_Travel_time(int Speed, int Distance); //Функция подсчета времени транспорта в пути
    Airplane() {};
};

#endif // AIRPLANE_H

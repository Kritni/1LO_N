#ifndef TRAIN_H
#define TRAIN_H

#include "Transport.h"

//����� "�����"
class Train : public Transport {
    int �ars_amount; //����� �������
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � ������
    void Out_Data(int Speed, int Distance, ofstream& ofst); //������� ������ ���������� � ������
    double Transport_Travel_time(int Speed, int Distance); //������� �������� ������� ���������� � ����
    Train() {};
};

#endif // SPHERE_H

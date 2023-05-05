#include <iostream>
/*� ������1 �������� ������ ���������� �����2,
������� ��������� � ���� �� ������ ��� �������������, � ������ - ������� �����2 ������������� : ��� ���������� ��� ������ ������1 � ������ - 
�������? ����� ���������� �����2 �������� ������ */ 
/*�	� ������1 �������� ������ ���������� �����2, ������� ��������� � ���� �� ������ ��� �����������, � ������-������� �����2 �������������: 
��� ���������� ��� ������ ������1 � ������-�������? ����� ���������� ����� ��������� ������*/
/*�	� ������� ������ �������� ����� �������������, � � ������-������� �������� ����� � ����� �� ������: ����� ����� ����� ���������� ���
��������� � ������� ����� ��������� �� ������� �����, ����� ��������� �� �����-�������? ����� ������������� ������*/
/*�	� ������� ������ �������� ����� �����������, � � ������-������� �������� ����� � ����� �� ������: ����� ����� ����� ���������� ��� ���������
� ������� ����� ��������� �� ������� �����, ����� ��������� �� �����-�������? ����� ��������� ������*/
using namespace std;

class Vehicle {
protected:
	int power, velocity, distance;
	
public:
	Vehicle() {
		cout << "Vehicle:Vehicle()\n";
		power = 1;
		velocity = 1;
		distance = 1;
	}
	Vehicle(int power, int velocity, int distance) {
		cout << "Vehicle:Vehicle(int power, int velocity, int distance)\n";
		this->power = power;
		this->velocity = velocity;
		this->distance = distance;

	}
	Vehicle(const Vehicle& v) {
		cout << "Vehicle:Vehicle(const Vehicle& v)\n";
		this->power = v.power;
		this->velocity = v.velocity;
		this->distance = v.distance;
	}
	int count_cost() {
		cout << "Vehicle: count_cost()\n";
		return power * velocity;
	}
	 void total_price() {
		cout << "Vehicle: total_price()\n";
		int c = count_cost();
		cout << "The total price is "  << c * distance << endl;
	}
	 virtual int calc_frazzle() {
		 cout << "Vehicle:calc_frazzle()/n";
		 return distance * (power * 0.5) * 7;
	 }
	 void total_frazzle(int years) {
		 cout << "Vehicle:total_frazzle(int years)\n";
		 cout << "The time is " << years << ". The damage is " << calc_frazzle() * years << endl;


	 }
	 virtual void demonstrate() {
		 cout << "Vehicle:demonstrate()\n";
		 cout << "The power is " << this->power << ", the velocity is " << this->velocity << endl;
	 }
	 void represent() {
		 cout << "Vehicle:represent()\n";
		 cout << "This is the basic vehicle\n";
	 }
	virtual ~Vehicle() {
		cout << "Vehicle:~Vehicle()\n";
	}

};

class Truck : public Vehicle {
protected:
	int weight;
public:
	Truck() : Vehicle() {
		cout << "Truck:Truck()\n";
		this->weight = 5;
	}
	Truck(int power, int velocity, int distance, int weight) : Vehicle(power, velocity, distance), weight(weight) {
		cout << "Truck:Truck(int power, int velocity, int distance, int weight)\n";
	}
	Truck(const Truck& t) : Vehicle(t) {
		cout << "Truck:Truck(const Truck& t)\n";
		this->weight = weight;
	}
	int count_cost() {
		cout << "Truck: count_cost()\n";
		return power * velocity * weight;
	}
	int calc_frazzle() {
		cout << "Truck:calc_frazzle()\n";
		return distance * (power * 0.5) * (weight * 1.3) * 7;
	}
	void demonstrate() {
		cout << "Truck:demonstrate()\n";
		cout << "The power is " << this->power << ", the velocity is " << this->velocity << "the weight is " << this->weight << endl;
	}
	void represent() {
		cout << "Truck:represent()\n";
		cout << "This is the track made to transport heavy weights\n";
	}
	~Truck() {
		cout << "Truck:~Truck()\n";
	}


};
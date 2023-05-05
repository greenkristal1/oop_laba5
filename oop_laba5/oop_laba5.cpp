// oop_laba5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "pt1.cpp"
#include "pt2.cpp"
#include "pt3.cpp"
#include "pt4.cpp"
#include <memory>

using namespace std;

void func1(Base obj) {
	cout << "void func1(Base obj)\n";
}
void func2(Base* obj) {
	cout << "void func2(Base* obj)\n";
	//delete obj;

}
void func3(Base& obj) {
	cout << "void func3(Base& obj)\n";

}

Base func1() {
	cout << "Base func1()\n";
	Base b1;
	return b1;
}
Base* func2() {
	cout << "Base* func2()\n";
	Base b2;
	return NULL;
}
Base& func3() {
	cout << "Base& func3()\n";
	Base b3;
	return b3;
}
Base func4() {
	cout << "Base func4()\n";
	Base* b4 = new Base();
	return *b4;
}
Base* func5() {
	cout << "Base* func5()\n";
	Base* b5 = new Base();
	return b5;
}
Base& func6() {
	cout << "Base& func6()\n";
	Base* b6 = new Base();
	return *b6;
}


int main()
{
	setlocale(LC_ALL, "ru");
	//part1
	/*Point* p1 = new Point();
	p1->move();
	p1->show_props();
	Point* p2 = new PointV(2, 3, 4);
	p2->move();
	p2->show_props();
	delete p1;
	delete p2;*/



	//part2 
	/*Vehicle* v1 = new Truck(10, 4, 5, 3);
	v1->total_price();
	v1->total_frazzle(6);
	v1->demonstrate();
	v1->represent();
	delete v1;*/


	//part 3 
	/*srand(time(NULL));
	Person* m[10];
	for (int i = 0; i < 10; i++) {
		if (rand() <= 9'922)
			m[i] = new Teacher();

		else if (rand() > 9'922 || rand() <= 21'844)
			m[i] = new Doctor();
		else
			m[i] = new Dentist();
	}

	cout << "-----------------------------------------------------------------------------------------------------------\n";

	for (int i = 0; i < 10; i++) {
		m[i]->say();
	}
	cout << "-----------------------------------------------------------------------------------------------------------\n";
	for (int i = 0; i < 10; i++) {
		if (m[i]->classname() == "Teacher")
			static_cast<Teacher*>(m[i])->teach();
	}
	cout << "-----------------------------------------------------------------------------------------------------------\n";
	for (int i = 0; i < 10; i++) {
		if (m[i]->isA("Doctor"))
			static_cast<Doctor*>(m[i])->heal();
	}



	cout << "-----------------------------------------------------------------------------------------------------------\n";

	for (int i = 0; i < 10; i++) {
		Dentist* d = dynamic_cast<Dentist*>(m[i]);
		if (d != nullptr)
			d->cure_teeth();
	}


	for (int i = 0; i < 10; i++) {
		delete m[i];
	}
	*/


	//part4

	cout << "Создание объекта Base\n";
	Base* b1 = new Base();
	


	cout << "Передача в func1 Base\n";


	func1(*b1);
	
	
	cout << "Передача в func2 Base\n";


	func2(b1);

	cout << "Передача в func3 Base\n";

	func3(*b1);
	
	delete b1;
	//	/*Передача ссылки не обязательно подразумевает работу с адресом переданного объекта.
	//	При передаче указателя возможна передача нулевого указателя, т.е.это опциональный аргумент.
	//	При передаче ненулевого указателя он может указывать как на отдельный объект, так и на первый объект из массива из нескольких объектов.
	//	При передаче указателя возможна передача владения, то бишь ответственности за вызов подходящей функции удаления(delete free и т.п.).*/

	cout << "Создание объекта Desc\n";

	Base* d1 = new Desc();

	cout << "Передача в func1 Desc\n";


	func1(*d1);


	cout << "Передача в func2 Base\n";


	func2(d1);

	cout << "Передача в func3 Base\n";

	func3(*d1);


	//part5

	/*unique_ptr<Point> p_u1(new Point(1,2));
	Point* p1 = p_u1.get();
	p_u1->move();

	shared_ptr<Point> p_u2(new Point(2, 2));
	shared_ptr<Point>p_ul3(p_u2);*/
		

}

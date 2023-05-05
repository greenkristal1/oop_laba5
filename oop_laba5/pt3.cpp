#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person() {
		cout << "Person::Person()\n";
	}

	virtual void say(){
		cout << "My occupation is undefined\n";
	}
	virtual string classname() {
		return "Person";
	}
	virtual bool isA(const string& who) {
		return (who == "Person");
	}
	virtual ~Person() {

	}
};

class Teacher : public Person
{
public:
	
	Teacher() {
		cout << "Teacher::Teacher()\n";
	}
	void say() {
		cout << "I teach students\n";
	}
	void teach() {
		cout << "I'm teaching right now\n";
	}
	virtual string classname() {
		return "Teacher";
	}
	bool isA(const string& who) {
		return (who == "Teacher") || ( who == "Person");
	}
	~Teacher() {

	}
};

class Doctor : public Person
{
public:

	Doctor() {
		cout << "Doctor::Doctor()\n";
	}
	void say() {
		cout << "I cure people\n";
	}
	virtual string classname() {
		return "Doctor";
	}
	bool isA(const string& who) {
		return (who == "Person") || (who == "Doctor");
	}
	void heal() {
		cout << "I'm healing people\n";
	}
	~Doctor() {

	}
};
class Dentist : public Doctor {
public:
	Dentist() {
		cout << "Dentist::Dentist()\n";
	}
	void say() {
		cout << "I take care of teeth\n";
	}
	virtual string classname() {
		return "Dentist";
	}
	bool isA(const string& who) {
		return (who == "Person") || (who == "Doctor") || (who == "Dentist");
	}
	void cure_teeth() {
		cout << "I'm curing teeth\n";
	}
	~Dentist() {

	}
};
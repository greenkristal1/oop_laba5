#include <iostream>

using namespace std;

class Base
{
private:
	int a;
public:
	Base() {
		cout << "Base::Base()\n";
		a = 0;
	}
	Base(int a) {
		cout << "Base::Base(int a)\n";
		this->a = a;
	}
	Base(const Base& b) {
		cout << "Base::Base(const Base& b)\n";
		this->a = b.a;
	}
	virtual ~Base() {
		cout << "Base::~Base()\n";
		a = NULL;

	}

};

class Desc : public Base{
private:
	int b;
public:
	Desc() : Base(), b(0) {
		cout << "Desc::Desc()\n";
		b = 0;
	}
	Desc(int a, int b) : Base(a), b(b) {
		cout << "Desc::Desc(int a, int b)\n";

	}
	Desc(const Desc& d) : Base(d), b(d.b) {
		cout << "Desc::Desc(const Desc& d)\n";
	}
	~Desc()
	{
		cout << "Desc::~Desc()\n";
		int b = NULL;
	}
};


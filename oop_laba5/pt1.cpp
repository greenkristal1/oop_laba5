#include <iostream>
using namespace std;
class Point {
protected:
	int x, y;
public:
	Point() {
		cout << "Point:Point()\n";
		this->x = 1;
		this->y = 1;

	}
	Point(int x, int y) {
		cout << "Point:Point(int x, int y)\n";
		this->x = x;
		this->y = y;
	}
	Point(const Point& p) {
		cout << "Point:Point(const Point& p)\n";
		this->x = p.x;
		this->y = p.y;
	}
	void move() {
		cout << "Point:void move()\n";
		x++;
		y++;
	}
	virtual void show_props(){
		cout << "Point:show_props()\n";
		cout << "X is " << x << " Y is " << y << endl;
	}
	/*virtual*/ ~Point() { //если не сделать деструктор виртуальным в класее, который опрелделяет виртуальные классы, 
					       //то будет вызываться только деструктор родительского класса
		cout << "Point~Point()\n";
	}
};

class PointV : public Point{
protected:
	int size;
public:
	PointV() : Point() {
		cout << "PointV:PointV()\n";
		this->size = size;
	}
	PointV(int x, int y, int z) : Point(x, y) {
		cout << "PointV:PointV(int x, int y, int z)\n";
		this->size = z;
	}
	PointV(const PointV& p3d) : Point(p3d) {
		cout << "PointV:PointV(const PointV& p3d)\n";
		this->size = p3d.size;
	}
	void  show_props() {
		cout << "PointV:show_props()\n";
		cout << "X is " << x << " Y is " << y << " Size is " << size << endl;
	}
	
	~PointV() {
		cout << "PointV~PointV()\n";
	}

};
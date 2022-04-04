#include <iostream>
#include "Inheritance.h"
using namespace std;

int main()
{
	Person* p = new Person("Wallace Balaniuc");
	Student* s = new Student("Jane Doe", Discipline::GAME_DEVELOPER, p);
	Faculty* f = new Faculty("John Doe", Discipline::ANIMATOR);
	TFaculty* t = new TFaculty("John Cena", Discipline::SOFTWARE_ENGINEER, "Sir");

	cout << "Hello, " << p->getName() << endl;
	cout << "Hello, " << s->getName() << endl;
	cout << "Hello, " << f->getName() << endl;
	cout << "Hello, " << t->getName() << endl;

	delete t;
	delete f;
	delete s;
	delete p;

	t = nullptr;
	f = nullptr;
	s = nullptr;
	p = nullptr;

	return 0;
}
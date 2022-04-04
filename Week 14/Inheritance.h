#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class Discipline { NONE, GAME_DEVELOPER, SOFTWARE_ENGINEER, ANIMATOR };
enum class Classification { FRESHMAN, SOPHMORE, JUNIOR, SENIOR };

// Base class
class Person
{
private:
	string name;
public:
	// Constructor
	Person() // Default
	{
		setName("");
	}
	Person(const string& _name)	// Covert
	{
		setName(_name);
	}
	// Destructor
	~Person()
	{
	}
	// Mutators and Accessors
	void setName(const string& _name)
	{
		name = _name;
	}
	string getName() const
	{
		return name;
	}
};

class Student : public Person
{
private:
	Discipline major;
	Person* advisor;
public:
	Student() : Person()
	{
		setMajor(Discipline::NONE);
		setAdvisor(new Person());
	}
	Student(const string& _name, Discipline _major, Person* _advisor) : Person(_name)
	{
		setMajor(_major);
		setAdvisor(_advisor);
	}
	~Student()
	{
		delete advisor;
		advisor = nullptr;
	}
	void setMajor(Discipline _major)
	{
		major = _major;
	}
	Discipline getMajor() const
	{
		return major;
	}
	void setAdvisor(Person* _advisor)
	{
		advisor = _advisor;
	}
	Person* getAdvisor() const
	{
		return advisor;
	}
};

class Faculty : public Person
{
private:
	Discipline department;
public:
	Faculty() : Person()
	{
		setDepartment(Discipline::NONE);
	}
	Faculty(const string& _name, Discipline _department) : Person(_name)
	{
		setDepartment(_department);
	}
	void setDepartment(Discipline _department)
	{
		department = _department;
	}
	Discipline getDepartment() const
	{
		return department;
	}
};

class TFaculty : public Faculty
{
private:
	string title;
public:
	TFaculty() : Faculty()
	{
		setTitle("_");
	}
	TFaculty(const string& _name, Discipline d, const string& title) : Faculty(_name, d)
	{
		setTitle(title);
	}
	void setTitle(const string& _title)
	{
		title = _title;
	}
	string getTitle() const
	{
		return title;
	}
	string getName() const
	{
		return getTitle() + " " + Person::getName();
	}
};
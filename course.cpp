// course.cpp

#include "course.h"
#include <string>
#include <iostream>
using namespace std;

Course::Course(int size)
{
   // TODO: Fill this in
   this -> size = size;
   
   classList = new Student [this -> size];
}

Course::~Course()
{
	cout << "Cleaning up course: " << getName() << ".\n";
	classList = NULL;
}

Student Course::getStudent(int index) const
{
   // TODO: Fill this in
   return classList[index];
}

void Course::setStudent(int index, const Student & student)
{
   // TODO: Fill this in
   classList[index] = student;
}

void Course::displayList() const
{
   cout << "Class list for course: " << name << endl;

   for (int i = 0; i < size; i++)
   {
      classList[i].display();
   }
}


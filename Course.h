#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
public Course{
  private :
  string Coursecode;
  string coursename;
  int maxStudents;
  Student * students;
  int currentStudents;
  public:
  Course::Course();
  void Course::addStudent(student & s);
  Course::Course(cc,cn,m,cs);
  Course::~Course();
  void Course::displayCourseInfo();
ostream& course::overload<<(os,s);
  
}















#endif

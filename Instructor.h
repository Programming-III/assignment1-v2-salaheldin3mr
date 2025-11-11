#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
public Instuctor{
  private:
  string department;
  int experienceYears;
  
  public:
  Instuctor:: Instuctor(d,e){
    department=d;
    experienceYears=e;
  }
  void Instuctor:display(){
    cout<<department<<experienceYears<<endl;
  }
}









#endif

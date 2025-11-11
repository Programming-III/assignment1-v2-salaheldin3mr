#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
public student{
  private:
  int yearLevel ;
  int major;
  public:
  student:: student(y,m){
    yearLevel=y;
    major=m;
    
  }
  void student:: display(){
    cout<<"yearLevel:"<<yearLevel<<"major:"<<major<<endl;
  }
  
  
}













#endif

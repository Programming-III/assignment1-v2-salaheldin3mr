#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
person::person(){
    name="";
    id=0;
    
  }
  person:person(n,i){
    name=n;
    id=i;
  }
  person::~person(){
    
  }
  void person:: display(){
  cout<<"name:"<<name<<"id:"<<id<<endl;  
  }






// ==================== Student Class Implementation ====================


void student:: display(){
      cout<<"year:"<<yearLevel<<endl;
      cout<<"major:"<<major<<endl;
    }
     student:: student(y,m){
      yearLevel=y;
      major=m;
      
    }
    student::~student(){
      
    }
     student::student(){
       yearLevel=0;
       major="";
       
     }
    
    
    



// ==================== Instructor Class Implementation ====================

 Instuctor::Instuctor(){
    department="";
    experienceYears=0;
  }
  Instuctor::~Instuctor(){
    
  }
  Instuctor:: Instuctor(d,e){
    department=d;
    experienceYears=e;
  }
  void Instuctor:: set
  void Instuctor:display(){
    cout<<"department:"<<department<<"experienceYears:"<<experienceYears<<endl;
  }




// ==================== Course Class Implementation ====================

Course::Course(){
  Coursecode="";
  coursename="";
  maxStudents=0;
  currentStudents=0;
  
}
Course::Course(cc,cn,m,cs){
  Coursecode=cc;
  coursename=cn;
  maxStudents=m;
  currentStudents=cs;
  
}
Course::~Course(){
delete [] student;
}
void Course::displayCourseInfo(){
  cout<<"code:"<<Coursecode<<"name:"<<coursename<<"maxStudents:"<<maxStudents<<"currentStudents:"<<currentStudents<<endl;
}
void Course: addStudent(Student * students){
  
}







// ==================== Main Function ====================
int main() {
  student s= new student(2,cs);
  Instructor i= new Instructor(dep,2);
  Course c= new Course("cs101","introduvtin to programming",3,5);
  s.display();
  i.display();
  c.displayCourseInfo();
   
    
    return 0;
}

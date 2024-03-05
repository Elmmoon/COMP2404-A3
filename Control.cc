#include <iostream>
using namespace std;
#include <string>

#include "Control.h"
#include "Student.h"
#include "School.h"
#include "Course.h"

Control::Control(){
  school = new School("Carleton U. School of Computer Science");
}

Control::~Control(){
  delete school;
}

void Control::launch(){
  int choice;
  Student* student = NULL;
  Course* course = NULL;
  bool loop1, loop2;
  string strChoice;

  initStudents(school);
  initCourses(school);

  loop1 = true;
  while(loop1){
    view.showAdminMenu(choice);
    switch (choice){
      case 1:
        school->printStudents();
        break;
      case 2:
        school->printCourses();
        break;
      case 3:
        school->printRegistrations();
        break;
      case 4:
        loop2 = true;

        view.printStr("Please enter student number: ");
        view.readStr(strChoice);
        while (loop2){
          if (school->findStu(strChoice, &student))
            break;
          view.printStr("ERROR:  Student number not found, please try again: ");
          view.readStr(strChoice);
        }

        while(loop2){
          view.showStudentMenu(student->getName(), choice);
          switch (choice){
            case 1:
              view.printStr("Please enter term: ");
              view.readStr(strChoice);
              school->printCourseByTerm(strChoice);
              break;
            case 2:
              school->printRegistrationsByStu(student);
              break;
            case 3:
              view.printStr("Please enter course id: ");
              view.readInt(choice);
              if (!school->findCourse(choice, &course))
                view.printStr("ERROR:  Course not found");
              else
                school->addRegistration(student, course); 
              break;
            case 0:
              loop2 = false;
          }
        }
        break;
      case 0:
        loop1 = false;
    }
  }
}

void Control::initStudents(School* sch)
{
  sch->addStu(new Student("100567888", "Matilda", "CS"));
  sch->addStu(new Student("100333444", "Harold", "Geography"));
  sch->addStu(new Student("100444555", "Joe", "Physics"));
  sch->addStu(new Student("100775588", "Timmy", "CS"));
  sch->addStu(new Student("100111222", "Amy", "Math"));
  sch->addStu(new Student("100222333", "Stanley", "Art History"));
}

void Control::initCourses(School* sch)
{
  sch->addCourse(new Course("F23", "COMP", 2401, 'A', "Laurendeau"));
  sch->addCourse(new Course("F23", "COMP", 2401, 'B', "Hillen"));
  sch->addCourse(new Course("F23", "COMP", 2401, 'C', "Laurendeau"));
  sch->addCourse(new Course("F23", "COMP", 2401, 'D', "Hillen"));
  sch->addCourse(new Course("F23", "COMP", 2402, 'A', "Shaikhet"));
  sch->addCourse(new Course("F23", "COMP", 2402, 'B', "Shaikhet"));
  sch->addCourse(new Course("F23", "COMP", 2404, 'A', "Hill"));
  sch->addCourse(new Course("F23", "COMP", 2404, 'B', "Hill"));
  sch->addCourse(new Course("F23", "COMP", 2406, 'A', "Nel"));
  sch->addCourse(new Course("F23", "COMP", 2406, 'B', "Shaikhet"));
  sch->addCourse(new Course("F23", "COMP", 2804, 'A', "Morin"));
  sch->addCourse(new Course("F23", "COMP", 2804, 'B', "Hill"));

  sch->addCourse(new Course("W24", "COMP", 2401, 'A', "CI"));
  sch->addCourse(new Course("W24", "COMP", 2401, 'B', "Lanthier"));
  sch->addCourse(new Course("W24", "COMP", 2402, 'A', "Sharp"));
  sch->addCourse(new Course("W24", "COMP", 2402, 'B', "Sharp"));
  sch->addCourse(new Course("W24", "COMP", 2404, 'A', "Hill"));
  sch->addCourse(new Course("W24", "COMP", 2404, 'B', "Laurendeau"));
  sch->addCourse(new Course("W24", "COMP", 2404, 'C', "Laurendeau"));
  sch->addCourse(new Course("W24", "COMP", 2406, 'A', "Nel"));
  sch->addCourse(new Course("W24", "COMP", 2406, 'B', "Nel"));
  sch->addCourse(new Course("W24", "COMP", 2804, 'A', "Hill"));
  sch->addCourse(new Course("W24", "COMP", 2804, 'B', "Hill"));
}



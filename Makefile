OPT = -Wall

a3: main.o Control.o Course.o CourseArray.o Registration.o RegList.o School.o StuArray.o Student.o View.o
	g++ $(OPT) -o a3 main.o Control.o Course.o CourseArray.o Registration.o RegList.o School.o StuArray.o Student.o View.o

main.o: main.cc Control.h
	g++ $(OPT) -c main.cc 

Control.o: Control.cc Control.h School.h View.h
	g++ $(OPT) -c Control.cc 

Course.o: Course.cc Course.h defs.h
	g++ $(OPT) -c Course.cc 

CourseArray.o: CourseArray.cc CourseArray.h defs.h Course.h
	g++ $(OPT) -c CourseArray.cc 

Registration.o: Registration.cc Registration.h defs.h Student.h Course.h
	g++ $(OPT) -c Registration.cc 

RegList.o: RegList.cc RegList.h Registration.h defs.h
	g++ $(OPT) -c RegList.cc 

School.o: School.cc School.h RegList.h CourseArray.h StuArray.h Course.h Student.h
	g++ $(OPT) -c School.cc 

StuArray.o: StuArray.cc StuArray.h defs.h Student.h
	g++ $(OPT) -c StuArray.cc 

Student.o: Student.cc Student.h 
	g++ $(OPT) -c Student.cc 

View.o: View.cc View.h 
	g++ $(OPT) -c View.cc 

clean:
	rm -f *.o a3.exe
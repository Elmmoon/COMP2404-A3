/* 
Purpose: A course registration manager for Carleton University's Fall 2023 and 
         Winter 2024 semesters. View 'Usage' for a list of instructions and 
         functionalities.
Usage:
    Enter the project directory
    Enter 'make', then './a3' into the command line
    Enter 1 to view enrolled students
    Enter 2 to view available courses
    Enter 3 to view current registrations
    Enter 4 to enter the student menu
        Enter a valid student ID
        In the student menu, you may:
            Enter 1 to view courses by term
            Enter 2 view registrations by student
            Enter 3 to add a registration
            Enter 0 to exit
    Enter 0 to exit
Author: Dylan Yin
ID: 101257186
*/

#include "Control.h"

int main(){
    Control control;
    control.launch();
}
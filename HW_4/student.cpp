#include "student.h"

Student::Student(int arrival, int wait){
    this->arrival = arrival;
    this->wait = wait;
    this->finishedTime = 0;
}

Student::~Student(){
}
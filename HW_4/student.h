#pragma once

class Student {
public:
    Student(int arrival, int wait);
    ~Student();
    int arrival; //time arrived at queue
    int wait; // time at window
    int finishedTime;   //time done
};
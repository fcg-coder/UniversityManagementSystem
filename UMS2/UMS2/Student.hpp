//
//  Student_childClass.hpp
//  UMS2
//
//  Created by mak on 12.12.2023.
//
#pragma once

#include <iostream>
#include <string>
using namespace std;

typedef struct FAMILIAIMAYOCHESTVO {
    string Name;
    string SurName;
    string LastName;
};

class Student { private:
    FAMILIAIMAYOCHESTVO Value;
    
    int grade[5];
    
public:
    
    Student();
    Student(const Student& obj);
    ~Student();
    friend ostream& operator<< (ostream& out, Student& obj);//оператор ввода в поток
    friend istream& operator>>(istream& in, Student& obj); // оператор считывания из
    
    /*void SetStudent();*/
    float GetGrade();
    void Print(ostream& out);
};

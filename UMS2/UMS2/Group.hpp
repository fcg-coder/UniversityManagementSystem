//
//  Group_childClass.hpp
//  UMS2
//
//  Created by mak on 12.12.2023.
//

#pragma once
#include <stdio.h>
#include "Student.hpp"
using namespace std;

class Group { private:
    Student* Value;
    int size;
    int number;
    float av_grade;
    string subject;
    
public:
    
    
    Group();
    Group(const Group& obj);
    ~Group();
    void SetGroup(); int GetSize(); void Add();
    void Del();
    float Calculate(); void Ball();
    void Expulsion();
    void Red_student(int x);
    friend ostream& operator<< (ostream& out, Group& obj); Group& operator= (Group& obj);
    void Print(ostream& out); void PrintStudents();
};



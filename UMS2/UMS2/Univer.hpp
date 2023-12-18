//
//  University_baseClass.hpp
//  UMS2
//
//  Created by mak on 12.12.2023.
//


#include <stdio.h>
#include "Group.hpp"
using namespace std;

class Univer {
private:
    Group* Value;
    int size;
    int count;
    
public:
    
    
    Univer();
    ~Univer();
    int GetSize();
    void Add();
    void Reduct(int group,int ch);//редактирование
    void AddStudent(int group);
    void Del(int group);
    void DelStudent(int group);
    void Calculate(int group);
    void PrintStudents(int group);
    void SRBall(int group);//средний балл
    void Ball_2(int group);//вывод студентов на отчисление
    friend ostream& operator<< (ostream& out, Univer& obj);
};


//
//  Student_childClass.cpp
//  UMS2
//
//  Created by mak on 12.12.2023.
//

#include "Student.hpp"

Student::Student() {
    for(int i=0;i<5;i++)
        grade[i] = 0;
}

Student::Student(const Student& obj) { Value = obj.Value;
    for (int i = 0; i < 5; i++)
        grade[i] = obj.grade[i];
    
}

Student::~Student() {}

istream& operator>>(istream& in, Student& obj) {
    
    try {
    cout << "Введите ФИО:" << endl << "Имя: "; cin.ignore(256, '\n');
    getline(in, obj.Value.Name); // считыванием ФИО cout << "Фамилия: ";
    getline(in, obj.Value.SurName); cout << "Отчество: "; getline(in, obj.Value.LastName);
    
    cout << "Введите оценки: " << endl; bool crash = false;
    
    // считываем оценки
    for (int i = 0; i < 5; i++) { in >> obj.grade[i];
        
        if (obj.grade[i] < 2 || obj.grade[i] > 5) throw 1;
    }
}
    catch (int num)
    {
        cout << "Неверная оценка" << endl;
    }
    
    return in;
}

float Student::GetGrade() { float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += grade[i];
    }
    float a = (float)sum / 5.0; return a;
}

void Student::Print(ostream& out) {
    out << this->Value.Name << " " << this->Value.SurName << " " << this->Value.LastName << endl;
    
}
ostream& operator<< (ostream& out, Student& obj) {
    
    out << obj.Value.Name << " " << obj.Value.SurName << " " << obj.Value.LastName << endl;
    
    return out;
}

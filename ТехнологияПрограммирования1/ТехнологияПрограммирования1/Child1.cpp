//
//  Child1.cpp
//  ТехнологияПрограммирования1
//
//  Created by mak on 09.10.2023.
//

#include "Child1.hpp"
#include <iostream>
using namespace std;


STUDENT::STUDENT(){
    cout << "Введите ФИО\n->" ;
    cin >> name;
    cin >> surname;
    cin >> fathername;
    cout << "Введите группу, направление, курс и средний балл\n->";
    cin >> group;
    cin >> speciality;
    cin >> course;
    cin >> averagScore;
}


void STUDENT::show(){
    cout << name <<"\t" << surname <<"\t" << fathername <<"\t" << group <<"\t" <<speciality <<"\t" <<course <<"\t" << averagScore << "\n";
}


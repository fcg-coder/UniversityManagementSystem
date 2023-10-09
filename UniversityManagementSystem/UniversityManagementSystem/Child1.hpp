//
//  Child1.hpp
//  ТехнологияПрограммирования1
//
//  Created by mak on 09.10.2023.
//

#ifndef Child1_hpp
#define Child1_hpp

#include <stdio.h>
#include <string>
#include "baseAbstractClass.hpp"


class STUDENT : public BASE{
public:
    STUDENT();//Конструктор
    STUDENT(int n);//Конструктор чтения из файта
    
    void show() override;
    void save();
public:
    std :: string name;
    std :: string surname;
    std :: string fathername;
    int group;
    int course;
    double averagScore;
    std :: string speciality;
};
#endif /* Child1_hpp */

//
//  keeper.hpp
//  UniversityManagementSystem
//
//  Created by mak on 12.10.2023.
//

//Разработать класс Keeper, который реализует контейнер для хранения и обработки объектов. Класс Keeper должен обеспечивать следующие функции: ▪ добавление и удаление производных объектов абстрактного класса Base (базовый класс определяется согласно варианту задания); ▪ полное сохранение себя в файле; ▪ полное восстановление себя из файла.


#ifndef keeper_hpp
#define keeper_hpp
#include "Child1.hpp"
#include "Child2.hpp"
#include "Child3.hpp"
#include "baseAbstractClass.hpp"
#include <stdio.h>

class Keeper {
private:
    int sizeS = this->size(1);
    int sizeT = this->size(2);
    int sizeA = this->size(3);
    STUDENT* studArr = new STUDENT[100000]; //Создали массив
    TEACHER* teachArr = new TEACHER[100000]; //Создали массив
    ADMIN* adArr = new ADMIN[100000]; //Создали массив
public:
    Keeper();
    Keeper(int s);
//    ~Keeper();

    void add(int n);
    void pullBack(int n);
    void saveInFile(int n);
    void loadFromFile(int n);
    void loadFromResFile(int n);
    void showAll(int n);
    int size(int n);
};


#endif /* keeper_hpp */

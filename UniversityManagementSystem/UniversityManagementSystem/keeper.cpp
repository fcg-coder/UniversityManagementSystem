//
//  keeper.cpp
//  UniversityManagementSystem
//
//  Created by mak on 12.10.2023.
//
//Разработать класс Keeper, который реализует контейнер для хранения и обработки объектов. Класс Keeper должен обеспечивать следующие функции: ▪ добавление и удаление производных объектов абстрактного класса Base (базовый класс определяется согласно варианту задания); ▪ полное сохранение себя в файле; ▪ полное восстановление себя из файла.

#include "keeper.hpp"
#include "baseAbstractClass.hpp"
#include "Child1.hpp"
#include "Child2.hpp"
#include "Child3.hpp"
#include <iostream>
using namespace std;


//Конструктор

Keeper::Keeper(){

}

//Keeper::~Keeper(){
//    delete studArr;
//}

//Создание динамического массива объектов
//int size = 5;
//MyClass* myArray = new MyClass[size];

//▪ добавление и удаление производных объектов абстрактного класса Base
//Добавить

void Keeper::add(int n){
    switch (n) {
        case 1:{
            
            
            
            
            STUDENT S(1);
            
            studArr[sizeS] = S;
            
            
            
            sizeS++;
            cout << "\n\n\n";
            studArr[sizeS].showOne();
            cout << "\n\n\n";
            this->saveInFile(1);
            this->showAll(1);
            
            break;
        }
        case 2:{
            
            
            
            TEACHER T(1);
            
            teachArr[sizeT] = T;
            sizeT++;
            cout << "\n\n\n";
            teachArr[sizeT].showOne();
            cout << "\n\n\n";
            this->saveInFile(2);
            this->showAll(2);
            break;
           }
           
        case 3:{
            
            
            
            ADMIN A(1);
            
            adArr[sizeA] = A;
            sizeA++;
            cout << "\n\n\n";
            adArr[sizeT].showOne();
            cout << "\n\n\n";
            this->saveInFile(3);
            this->showAll(3);
            break;
           }
        default:
            break;
    }
    
}

//Удалить
void Keeper::pullBack(int n){
    switch (n) {
        case 1:{
            int n1;
            cout << "Введите номер:\n->";
            cin >> n1;
            for (int i = n1; i < sizeS ; i++){
                studArr[i] = studArr[i+1];
            }
            sizeS--;
            this->saveInFile(1);
            this->showAll(1);
            break;
            
        }
        case 2:{
            int n1;
            cout << "Введите номер:\n->";
            cin >> n1;
            for (int i = n1; i < sizeT ; i++){
                teachArr[i] = teachArr[i+1];
            }
            sizeT--;
            this->saveInFile(2);
            this->showAll(2);
            break;
            
        }
        case 3:{
            int n1;
            cout << "Введите номер:\n->";
            cin >> n1;
            for (int i = n1; i < sizeA ; i++){
                adArr[i] = adArr[i+1];
            }
            sizeA--;
            this->saveInFile(3);
            this->showAll(3);
            break;
            
        }
        default:
            break;
    }
    
}

// ▪ полное сохранение себя в файле; ▪ полное восстановление себя из файла
//полное сохранение себя в файле
void Keeper::saveInFile(int n){
    switch (n) {
        case 1:{
            ofstream file("STUDENT.txt", ofstream::trunc);
            for (int i = 0; i < sizeS-1; i++){
                file << studArr[i].name << "\t\t" << studArr[i].surname << "\t\t" << studArr[i].fathername << "\t\t" << studArr[i].group << "\t\t" << studArr[i].speciality << "\t\t" << studArr[i].course << "\t\t" << studArr[i].averagScore << "\n";
            }
            cout << "Данные записанны в файл\n";
            file.close();
            break;
            
        }
        case 2:{
            ofstream file1("TEACHER.txt", ofstream::trunc);
            for (int i = 0; i < sizeT; i++){
                file1 << teachArr[i].name << "\t\t" << teachArr[i].surname << "\t\t" << teachArr[i].fathername << "\t\t" << teachArr[i].group << "\t\t" << teachArr[i].predmet << "\n";
            }
            cout << "Данные записанны в файл\n";
            file1.close();
            break;
        }

        case 3:{
            ofstream file1("ADMIN.txt", ofstream::trunc);
            for (int i = 0; i < sizeA; i++){
                file1 << adArr[i].name << "\t\t" << adArr[i].surname << "\t\t" << adArr[i].fathername << "\t\t" << adArr[i].dolgnost << "\t\t" << adArr[i].number << "\t"<< adArr[i].oblast << "\n";
            }
            cout << "Данные записанны в файл\n";
            file1.close();
            break;
        }

    }
   
}


//полное восстановление себя из файла.
void Keeper::loadFromFile(int n){
    
    
    switch (n) {
        case 1:{
            //Вспомогательные переменные
            
            std :: string name1;
            std :: string surname1;
            std :: string fathername1;
            int group1;
            int course1;
            double averagScore1;
            std :: string speciality1;
            ifstream file("STUDENT.txt");
            for (int i = 0; i < sizeS; i ++){
                file >> name1 >> surname1 >> fathername1 >> group1 >> speciality1 >> course1 >> averagScore1;
                STUDENT S(name1,surname1,fathername1,group1,speciality1,course1,averagScore1);
                studArr[i] = S;
            }
            
            file.close();
            
            break;
            
        }
            
        case 2:{
            //Вспомогательные переменные
            
            std :: string name1;
            std :: string surname1;
            std :: string fathername1;
            std :: string group1;
            std :: string predmet1;
            ifstream file("TEACHER.txt");
            for (int i = 0; i < sizeT; i ++){
                file >> name1 >> surname1 >> fathername1 >> group1 >> predmet1;
                TEACHER T(name1,surname1,fathername1,group1,predmet1);
                teachArr[i] = T;
            }
            
            file.close();
            
            
            break;
            
        }
            
        case 3:{
            //Вспомогательные переменные
            
            std :: string name1;
            std :: string surname1;
            std :: string fathername1;
            std :: string dolgnost1;
            std :: string oblast1;
            std :: string  number1;
            ifstream file2("ADMIN.txt");
            for (int i = 0; i < sizeA; i ++){
                file2 >> name1 >> surname1 >> fathername1 >> dolgnost1  >> number1 >> oblast1;
                ADMIN A(name1,surname1,fathername1,dolgnost1,number1, oblast1);
                adArr[i] = A;
            }
            
            file2.close();
            
            break;
            
        }
            
        
        default:
            break;
    }
    
    //this->showAll();
}

//полное восстановление себя из файла.
void Keeper::loadFromResFile(int n){
    
    
    switch (n) {
        case 1:{
            //Вспомогательные переменные
            
            std :: string name1;
            std :: string surname1;
            std :: string fathername1;
            int group1;
            int course1;
            double averagScore1;
            std :: string speciality1;
            ifstream file("STUDENT_res.txt");
            for (int i = 0; i < sizeS; i ++){
                file >> name1 >> surname1 >> fathername1 >> group1 >> speciality1 >> course1 >> averagScore1;
                STUDENT S(name1,surname1,fathername1,group1,speciality1,course1,averagScore1);
                studArr[i] = S;
            }
            
            file.close();
            
            break;
            
        }
            
        case 2:{
            //Вспомогательные переменные
            
            std :: string name1;
            std :: string surname1;
            std :: string fathername1;
            std :: string group1;
            std :: string predmet1;
            ifstream file("TEACHER_res.txt");
            for (int i = 0; i < sizeT; i ++){
                file >> name1 >> surname1 >> fathername1 >> group1 >> predmet1;
                TEACHER T(name1,surname1,fathername1,group1,predmet1);
                teachArr[i] = T;
            }
            
            file.close();
            
            
            break;
            
        }
            
        case 3:{
            //Вспомогательные переменные
            
            std :: string name1;
            std :: string surname1;
            std :: string fathername1;
            std :: string dolgnost1;
            std :: string oblast1;
            std :: string  number1;
            ifstream file("ADMIN_res.txt");
            for (int i = 0; i < sizeA; i ++){
                file >> name1 >> surname1 >> fathername1 >> dolgnost1 >> number1 >> oblast1;
                ADMIN A(name1,surname1,fathername1,dolgnost1,number1,oblast1);
                adArr[i] = A;
            }
            
            file.close();
            
            
            break;
            
        }
            
        
        default:
            break;
    }
    
    //this->showAll();
}


void Keeper::showAll(int n){
    switch (n) {
        case 1:
            this->loadFromFile(1);
            cout << "\n\n\n\n#\tФАМИЛИЯ\t\t\tИМЯ\t\t\t\tОТЧЕСТВО\t\t\tГРУППА\t\t\tСПЕЦИАЛЬНОСТЬ\t\t\tКУРС\t\t\tСРЕДНИЙ БАЛЛ\n_____________________________________________________________________________________________________________________\n";
           
            for (int i = 0; i< sizeS; i++){
                cout<< i << "\t";
                studArr[i].showOne();
            }
 
            break;
        case 2:
            
            this->loadFromFile(2);
            cout << "\n\n\n\n#\tФАМИЛИЯ\t\t\tИМЯ\t\t\t\tОТЧЕСТВО\t\t\tГРУППЫ\t\t\tПРЕДМЕТ\n_____________________________________________________________________________________________________________________\n";
            
            for (int i = 0; i< sizeT; i++){
                cout<< i << "\t";
                teachArr[i].showOne();
            }
            break;
        case 3:
            
                
                this->loadFromFile(3);
                cout << "\n\n\n\n#\tФАМИЛИЯ\t\t\tИМЯ\t\t\t\tОТЧЕСТВО\t\t\tДОЛЖНОСТЬ\t\t\tНОМЕР\t\tОБЛАСТЬ ОТВЕТСТВЕННОСТИ\n_____________________________________________________________________________________________________________________\n";
                
                for (int i = 0; i< sizeA; i++){
                    cout<< i << "\t";
                    adArr[i].showOne();
                }
            
            break;
        default:
            break;
    }
}


int Keeper::size(int n){
    
    switch (n) {
        case 1:{
            ifstream file("STUDENT.txt");  // Открываем файл для чтения
            std::string line;
            int sizeS = 0;
            
            if (file.is_open()) {  // Проверяем, удалось ли открыть файл
                while (std::getline(file, line)) {
                    sizeS++;  // Увеличиваем счетчик для каждой строки
                }
                file.close();  // Закрываем файл
            } else {
                cout << "Не удалось открыть файл\n";
            }
            //cout << "Количество студентов\t" << sizeS << endl;
            return sizeS;
            break;
            
        }
        case 2:{
            ifstream file("TEACHER.txt");  // Открываем файл для чтения
            std::string line;
            int sizeT = 0;
            
            if (file.is_open()) {  // Проверяем, удалось ли открыть файл
                while (std::getline(file, line)) {
                    sizeT++;  // Увеличиваем счетчик для каждой строки
                }
                file.close();  // Закрываем файл
            } else {
                cout << "Не удалось открыть файл\n";
            }
            //cout << "Количество студентов\t" << sizeS << endl;
            return sizeT;
            break;
            
        }
        case 3:{
            ifstream file("ADMIN.txt");  // Открываем файл для чтения
            std::string line;
            int sizeA = 0;
            
            if (file.is_open()) {  // Проверяем, удалось ли открыть файл
                while (std::getline(file, line)) {
                    sizeA++;  // Увеличиваем счетчик для каждой строки
                }
                file.close();  // Закрываем файл
            } else {
                cout << "Не удалось открыть файл\n";
            }
            //cout << "Количество студентов\t" << sizeS << endl;
            return sizeA;
            break;
            
        }
 }
        return 0;
}
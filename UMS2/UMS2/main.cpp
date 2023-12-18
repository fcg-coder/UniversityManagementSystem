
//1. Стандартные потоки
//Определить классы с именем STUDENT и GROUP. STUDENT содержит следующие поля:
//● фамилия и инициалы;
//● успеваемость (массив из нескольких элементов).
//Определить объединение объектов типа STUDENT в GROUP.
//Классов GROUP может быть несколько, заранее число не известно, определяется пользователем.
//GROUP определяет такие параметры как: средний балл в группы, предметы группы, номер группы и пр.
//Перегрузить операции извлечения и вставки для объектов типа STUDENT.
//Определить полноценное меню для работы пользователя с программой. Написать программу, выполняющую следующие действия:
//● Определить ввод с клавиатуры данных STUDENT в GROUP, записи
//должны быть упорядочены по возрастанию номера группы;
//● вывод на дисплей фамилий и номеров групп для всех студентов,
//включенных в массив, если средний балл студента больше 4.0;
//● если таких студентов нет, вывести соответствующее сообщение.
//2. Файловые и строковые потоки
//С использованием файловых и строковых потоков написать программу,
//которая считывает текст из файла и выводит его на экран, меняя местами каждые два соседних слова.

#include <iostream>

#include "Univer.hpp"
#include "Student.hpp"
#include <iostream>
#include <fstream>

using namespace std;
// проверка на разделитель
bool isDelimeter(char c) {
    return c == ' ' || c == '.' || c == ';' || c == '\n' || c == ':';
}

// получение строки
string getChangeString(ifstream& in) { string res = "";
    char c = '\0'; // символ для считывания
    if (!in.eof())
        in.get(c); // считываем 1-ый символ
    
    // пока не конец файла
    while (!in.eof()) {
        string word1 = "", word2 = "", delimeters = "";
        
        // считываем разделители до 1 слова
        while (!in.eof() && isDelimeter(c)) {
            res += c;
            c = in.get();
        }
        
        // считывание 1-ого слова
        while (!in.eof() && !isDelimeter(c)) { word1 += c;
            c = in.get();
        }
        
        // считывание разделителей между 1 и 2 словом
        while (!in.eof() && isDelimeter(c)) {
            delimeters += c; c = in.get();
        }
        
        // считывание 2 слова
        while (!in.eof() && !isDelimeter(c)) { word2 += c;
            c = in.get();
        }
        
        res += word2 + delimeters + word1; // добавляем в строку
    }
    
    return res; // возвращаем строку
}

int main() {
    //SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    //SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в потоквывода
    setlocale(LC_ALL, "Rus"); Univer un1;
    
    Student un2; char menu; int choose1; do {
        
        
        
        
        
        
        
        cout <<"\n\n\n\n1. Добавить элемент." << endl << "2. Удалить элемент." << endl << "3. Редактировать элемент." << endl << "4. Показать элемент." << endl << "5. Вывести студентов с баллом выше 4.0" << endl << "6. Показать студентов на отчисление." << endl << "X. Поменять слова текста из файла местами (2-е задание)." << endl << "0. Выход." << endl << ">> \n\n\n";
        cin >> menu;
        
        switch (menu) {
                
                
            case '0':
                break;
                
                
            case '1':
                cout << "Выберите элемент, который хотите добавить:\n1.Добавить группу\n2.Добавить студента\nВыш выбор: ";
                cin>> choose1;
                
                if (choose1 == 1)
                {
                    un1.Add();
                }
                else if (choose1 == 2)
                {
                    if (un1.GetSize() >= 0) {
                        int group;
                        cout << "Выберите группу:" << endl;
                        for (int i = 0; i < un1.GetSize(); i++)
                            cout << "[" << i + 1 << "]" << endl; cout << ">> ";
                        cin >> group; un1.AddStudent(group - 1);
                    }
   
                }
                
                else if (un1.GetSize() == 1){
                    break;
                }
                
                else{
                    
                    un1.AddStudent(0);
                    
                }
                break;
                
                
            case '2':
                
                
            
                cout << "Группы отсутствуют!" << endl;
                
                cout << "Выберите элемент, который хотите удалить:\n1.Удалить группу\n2.Удалить студента\nВыш выбор: ";
                cin >> choose1;
                if (choose1 == 1)
                {
                    int group;
                    for (int i = 0; i < un1.GetSize(); i++)
                        cout << "[" << i + 1 << "]" << endl; cout << ">> ";
                    cin >> group; un1.Del(group - 1);
                    break;
                }
                else if (choose1 == 2)
                {
                    if (un1.GetSize() >= 2) {
                        int group;
                        cout << "Выберите группу:" << endl;
                        for (int i = 0; i < un1.GetSize(); i++)
                            cout << "[" << i + 1 << "]" << endl; cout << ">> ";
                        cin >> group; un1.DelStudent(group - 1);
                    }
                    else if (un1.GetSize() == 1) {
                        un1.DelStudent(0);
                        
                    }
                    
                    
                    else
                        
                        
                        cout << "Группы отсутствуют!" << endl;
                    
                    break;
                case '3':
                    
                    
                    cout << "Выберите элемент, который хотите редактировать:\n1.Редактировать группу\n2.Редактировать студента\nВыш выбор: ";
                    cin >> choose1; if (choose1 == 1)
                    {
                        if (un1.GetSize() >= 1) { int group;
                            cout << un1;
                            cout << "Выберите редактируемую группу:" << endl; for (int i = 0; i < un1.GetSize(); i++)
                                cout << "[" << i + 1 << "]" << endl; cout << ">> ";
                            cin >> group; un1.Reduct(group - 1, 1);
                        }
                    }
                    else if (choose1 == 2)
                    {
                        
                        
                        int group; cout << un1;
                        cout << "Выберите группу в которой хотите отредактироватьстудентов:" << endl;
                        
                        for (int i = 0; i < un1.GetSize(); i++)
                            cout << "[" << i + 1 << "]" << endl; cout << ">> ";
                        cin >> group; un1.Reduct(group - 1, 2);
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                    }
                    break;
                    
                    
                    
                case '4':
                    cout << "Выберите элемент, который хотите показать:\n1.Показать группу\n2.Показать студента\nВыш выбор: ";
                    cin >> choose1; if (choose1 == 1)
                    {
                        for (int i = 0; i < un1.GetSize(); i++)
                        {
                            un1.Calculate(i);
                        }
                        cout << un1;
                    }
                    else if (choose1 == 2)
                    {
                        if (un1.GetSize() >= 0) { int group;
                            cout << "Выберите группу:" << endl; for (int i = 0; i < un1.GetSize(); i++)
                                cout << "[" << i + 1 << "]" << endl; cout << ">> ";
                            cin >> group; un1.PrintStudents(group - 1);
                            
                        }
                        else
                            cout << "Студенты отсутствуют!" << endl;
                        
                    }
                    break;
                
                
                case '5':
                    for (int i = 0; i < un1.GetSize(); i++)
                    {
                        un1.SRBall(i);
                    }
                    break;
                
                
                case '6':
                    for (int i = 0; i < un1.GetSize(); i++)
                    {
                         un1.Ball_2(i);
                    }
                    break;
                    
                case 'X':
                    try {
                        
                        
                        
                        
                        
                        ifstream ifs("text.txt"); if (!ifs) {
                            throw "Incorrest file.";
                            
                        }
                        string res = getChangeString(ifs); // получаем итоговую строку
                        cout << "Result: " << res << endl; // выводим строку
                        ifs.close();
                    }
                    // ловим исключения
                    catch (const char* s) {
                        cout << s << endl; // выводим сообщения об ошибке
                    }
                    cout << endl; break;
                }
        }
        }
        while (menu != '0');
        
        return 0;
    }
    


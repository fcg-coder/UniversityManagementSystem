# UniversityManagementSystem
Разработать класс Keeper, который реализует контейнер для хранения и обработки
объектов. Класс Keeper должен обеспечивать следующие функции:
▪ добавление и удаление производных объектов абстрактного класса Base (базовый
класс определяется согласно варианту задания);
▪ полное сохранение себя в файле;
▪ полное восстановление себя из файла.

Класс ВУЗ хранит данные по студентам, преподавателям и административному
персоналу. Для каждого студента определено: ФИО, группа, наименование
специальности, текущий курс, средний балл. Для каждого преподавателя
определено: ФИО; перечислены группы, которые ведет; предметы, которые
преподает. Для административного персонала определено: ФИО, должность,
телефон, область ответственности.

Программа состоит из 11 файлов, включающих 10 файлов классов (5 в формате .cpp и 5 в формате .hpp), а также один файл main.cpp. Всего в программе реализовано 5 классов. В них включены: один базовый абстрактный класс, три класса-наследника и один класс "Keeper", который выполняет роль контейнера для объектов классов-наследников.
Методы класса "Keeper" позволяют создавать новые объекты классов-наследников, удалять существующие объекты, сохранять данные в файлы и выполнять полное восстановление из файла. Для восстановления данных также предусмотрен резервный файл, из которого можно произвести восстановление.

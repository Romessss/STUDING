#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    static int count; // счетчик
protected:
    string n_name;
    int n_age;
    string n_sex;
    int n_wight;

public:
    static int GetCount() { return count; }
    // Person();
    Person(const string &name, const int &age, const string &sex, const int &wight)
        : n_name(name), n_age(age), n_wight(wight), n_sex(sex)
    {
        count++;
    }

    string GetName() { return n_name; }
    int GetAge() { return n_age; }
    int GetWighr() { return n_wight; }
    virtual void Print() //  виртуальная функция перегружаемая в классе Student
    {
        cout << n_name << ' ' << n_age << ' ' << n_sex << ' ' << n_wight << endl;
    }
};

class Student : public Person
{
private:
    int n_year;

public:
    Student(int year, const string &name, const int age, const string &sex, const int wight)
        : Person(name, age, sex, wight), n_year(year)
    {
    }
    int GetYear() { return n_year; }
    void AddYear(int addValue)
    {
        n_year += addValue;
    }
    void AddYear()
    {
        n_year++;
    }

    void Print()
    {
        cout << n_year << ' ';
        Person::Print();
    }
};
int Person::count = 0; // инициализация счетчика
int main()
{
    const int N = 2;
    Person *pers[N];
    for (int i = 0; i < N; i++)
    {
        int year, wight, age;
        string name, sex;
        cout << "Enter name age sex weight year:" << endl;
        cin >> name >> age >> sex >> wight >> year;
        pers[i] = new Student(year, name, age, sex, wight); // указатель на Person инициализируем классом Student
        cout << "Count=" << pers[i]->GetCount() << endl;    // вывод количества созданных экземпляров
    }
    for (int i = 0; i < N; i++)
        pers[i]->Print();
    Student *s1 = static_cast<Student *>(pers[0]); // s1 теперь имеет тип Student*, иначе не вызвать AddYear
    s1->AddYear(2);
    cout << "New age of " << s1->GetName() << " = "
         << s1->GetAge() << endl;
    for (int i = 0; i < N; i++)
        delete pers[i]; // освобождение выделенной памяти
    return 0;
}
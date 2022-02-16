#include <iostream>
using namespace std;

class Car
{
public:
    char company;
    char model;

    virtual void area() = 0;

    Car()
    {
        cout << "Company:" << endl; // заполнение класса автомобиль
        cout << "Model:" << endl; // автомобиль сделан
    }
};

    class PassengerCar : public Car
    {
    public:
        PassengerCar(char car_company, char car_model) {}
        void area() override
        {
            cout << "Model PassengerCar:" << model << endl;
            cout << "Company PassengerCar:" << company << endl;
        }
    };

    class Bus : public Car
    {
    public:
        Bus(char car_company, char car_model) {}
        void area() override
        {
            cout << "Model Bus:" << model << endl;
            cout << "Company Bus:" << company << endl;
        }
    };

class Minivan : public Car
{
public:
    Minivan(char car_company, char car_model) {}
    void area() override
    {
        cout << "Model Minivan:" << model << endl;
        cout << "Company MInivan:" << company << endl;
    }
};

int main()
{
    return 0;
}
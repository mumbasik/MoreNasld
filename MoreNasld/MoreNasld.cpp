// MoreNasld.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


//N2
#include <iostream>
using namespace std;
class Squar {
protected:
    double oneside;
public:
    Squar(){
        oneside = 0;
    }
    Squar(double temp) {
        oneside = temp;
    }
    void AreaSq() {
        cout << "Area of Squar: " << pow(oneside, 2) << endl;
    }
};
class Circle {
protected:
    double data;
public:
    Circle() {
        data = 0;

    }
    Circle(double rad) {
        data = rad;
    }
    void AreaCR() {
        double P = 3.14;
        cout << "Area of Circle: " << P * pow(data, 2) << endl;
    }
};
class Circl : public Circle, Squar {
public:
    
    Circl(double sq);
    void Print();
};
Circl::Circl(double sq) : Circle(sq / 2), Squar(sq) {

}
void Circl::Print() {
    cout << "Result: " << endl;
    AreaSq();
    AreaCR();
}
class Door {
protected:
    string door;
public:
    Door() {
        door = "unknown";
    }
    Door(string name) {
        door = name;
    }
    void Priint() {
        cout << "The door: " <<  door << endl;
    }
};
class Engine {
protected:
    int power;
    string name;
public:
    Engine() {
        power = 0;
        name = "unknown";
    }
    Engine(int power, string name) {
        this->name = name;
        this->power = power;
    }
    void Output() {
        cout << "Power of engine: " << power << endl;
        cout << "Name of engine: " << name << endl;
    }
};
class Wheels {
protected:
    int count;
public:
    Wheels() {
        count = 0;
    }
    Wheels(int count) {
        this->count = count;
    }
    void Cout() {
        cout << "Count of wheels: " << count << endl;
    }
};
class Car : public Door, public Engine, public Wheels {
protected:
    string name;
public:
    Car();
    Car(string name, string door, int power, string nam, int coun);
    void Show();
};
Car::Car() {
    name = "unknown";
}
Car::Car(string name, string door, int power, string nam, int coun) : Door(door), Engine(power, name), Wheels(coun) {
    this->name = name;
}
void Car::Show() {
    
        Priint();
        Output();
        Cout();
        cout << "The name of the car: " << name << endl;
    
}
int main()
{
    //N1
    Circl ob(12.0);
    ob.Print();
    //N2
    Car obj("BMW", "Deluxe Dor", 5000, "Engig x5600", 4);
    obj.Show();
    
}


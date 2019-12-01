/*
 接口继承，与实现继承
 */



#include <iostream>
#include <string>

using namespace std;

class Shape {
public:
    Shape() : id("base") {}
    virtual void draw() = 0;
    virtual void errer() const ;
    string getID();
private:
    string id;
};

void Shape::draw() {
    cout << "base prue virtual" << endl;
}

void Shape::errer() const {
    cout << "base error" << endl;
}

string Shape::getID() {
    return id;
}

class Circle : public Shape {
public:
    void draw() {
        cout << "xxx" << endl;
    }
};


int main() {
//    Shape* bp = new Shape();
    
    Shape* cp = new Circle; // Circle
    cp->errer();
    cp->Shape::draw();
    cp->draw();
    cp->getID();
    
    return 0;
}


/*
 条款37:绝不重新定义继承而来的默认参数s值（缺省参数值）
 */

#include <iostream>

using namespace std;

class Shape {
public:
    
    virtual void draw(int i = -1) const = 0;
};

class Recangle : public Shape {
public:
    // 重新给默认值，很糟糕
    virtual void draw(int i = 1) const {
        cout << i << endl;
    }
};

class Circle : public Shape {
public:
    virtual void draw(int i) const {
        cout << "test ";
        cout << i << endl;
    }
};



int main()
{
    Shape* pr = new Recangle;
    Shape* pc = new Circle;
    pr->draw(3);
    pc->draw(4);
    
    pr->draw(); // -1
    pc->draw();
    Circle x;
//    x.draw();  静态绑定下，一定要给值，因为对象，无法从base拿到默认值
    
    return 0;
}


/*
 条款37:绝不重新定义继承而来的默认参数s值（缺省参数值）
 
 公有普通函数，调用一个私有虚函数,来解决默认值统一的问题
 */

#include <iostream>

using namespace std;

class Shape {
public:
    
    void draw(int i = -1) const {
        doDraw(i);
    }
    
private:
    virtual void doDraw(int i) const = 0;  // 真正在此完成工作
};

class Recangle : public Shape {
private:
    virtual void doDraw(int i) const {
        cout << i << endl;
    }
};

class Circle : public Shape {
private:
    virtual void doDraw(int i) const {
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

    
    return 0;
}

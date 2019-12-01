/*
 条款36：绝不重新定义继承而来的非虚函数
 */

#include <iostream>

using namespace std;

class B {
public:
    void mf() {
        cout << "base mf" << endl;
    }
};

class D : public B {
public:
    void mf() {
        cout << "D mf" << endl;
    }
};

int main() {
    
//    D d;
//    d.mf();
    
    B* pb = new B;
    pb->mf();
    
    D* pd = new D;
    pd->mf();
    
    // 静态绑定
    B* pb2 = new D;
    pb2->mf();

    return 0;
}

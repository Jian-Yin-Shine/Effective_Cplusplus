
/*
 条款32:确定你的public继承塑模出is-a关系
 */

class Rectangle {
public:
    virtual void setHeight(int newHeight);
    virtual void setWight(int newWidth);
    virtual int hegiht() const;
    virtual int width() const;
};

void makeBigger(Rectangle& r) {
    int oldHight = r.hegiht();
    r.setWight(r.width() + 10);
    assert(r.hegiht() == oldHight);
}

class Square : public Rectangle { ... };

int main()
{
    Square s;
    
    assert(s.width() == s.hegiht());
    
    makeBigger(s);
    assert(s.width() == s.hegiht());
    
    return 0;
}

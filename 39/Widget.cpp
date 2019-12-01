
/*
 条款39:明智而审慎地使用private继承
 
 私有继承，不能实现子类向父类转
 void eat(const Person& p);
 Student s;
 eat(s); // 错误
 */


class Timer {
public:
    explicit Timeer(int tickFrequency);
    virtual void onTick() const;
};

class Widget : private Timer {
private:
    virtual void onTick() const;
};


class Widget2 {
private:
    class WidgeTimer : public Timer {
    public:
        virtual void onTick() const;
    };
    
    WidgeTimer timer;
}

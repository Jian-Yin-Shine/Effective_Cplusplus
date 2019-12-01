

class Airport { //...
    
};

class Airplane {
public:
    virtual void fly(const Airport& destination)=0;
protected:
    void defaultFly(const Airplane& destination) {
        //...
    }
};


class ModelA : Airplane {
public:
    virtual void fly(const Airplane& destination) {
        defaultFly(destination);
    }
};

class ModelB : Airplane {
public:
    virtual void fly(const Airplane& destination) {
        defaultFly(destination);
    }
};

// 另一台新的飞机C, 飞行方式不同，但是忘记fly重写了
// 如果忘记，会报编译错误
class ModelC : Airplane {
public:
    virtual void fly(const Airplane& destination) {
        //...
    }
};

int main()
{
    Airport PDX(...);
    Airplane* pa = new ModelC;
    pa->fly(PDX);
    return 0;
}

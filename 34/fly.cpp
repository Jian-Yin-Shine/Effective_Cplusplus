
class Airport { //...
    
};

class Airplane {
public:
    virtual void fly(const Airport& destination);
};

void Airport::fly(const Airport& destination) {
    //....
}

class ModelA : Airplane {
    //...
};

class ModelB : Airplane {
    //...
};

// 另一台新的飞机C, 飞行方式不同，但是忘记fly重写了

class ModelC : Airplane {
    // ...
};

int main()
{
    Airport PDX(...);
    Airplane* pa = new ModelC;
    pa->fly(PDX);
    return 0;
}

#include <iostream>

class Shape {
public:
    virtual void draw() = 0; 
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Circle\n";
    }
};
class Rectangle : public Shape{
    public : 
    void draw() override{
        std::cout<<"Drawing Rectangle\n";
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();
    delete s;
    return 0;
}

#include <iostream>
class Triangle
{
    float sideA;
    float sideB;
    float sideC;
    float perimeter = sideA + sideB + sideC;

public:
    float getPerimeter()
    {
        return perimeter;
    }

    // friend void printSides(Triangle t);
    friend class Print;
};
class EquilateralTriangle : public Triangle
{
private:
    float side;
    float perimeter = 3 * side;
};
class Print
{
public:
    void printSides(Triangle t)
    {
        t.sideA = 100;
        t.sideB = 10;
        t.sideC = 60;
        std::cout << "Side A : " << t.sideA << std::endl;
        std::cout << "Side B : " << t.sideB << std::endl;
        std::cout << "Side C : " << t.sideC << std::endl;
    }
    void printEqSide(EquilateralTriangle t){
        // t.side = 10; // can't access 

    }
};

int main()
{
    Triangle t;
    EquilateralTriangle eq ;
    Print p;
    p.printSides(t);
    p.printEqSide(eq); 
}
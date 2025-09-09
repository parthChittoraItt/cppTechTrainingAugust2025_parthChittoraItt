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

    friend void printSides(Triangle t);
};
void printSides(Triangle t)
{
    t.sideA =100;
    t.sideB =40;
    t.sideC =60;
    std::cout << "Side A : " << t.sideA << std::endl;
    std::cout << "Side B : " << t.sideB << std::endl;
    std::cout << "Side C : " << t.sideC << std::endl;
}
int main()
{
    Triangle t;
    printSides(t);
}
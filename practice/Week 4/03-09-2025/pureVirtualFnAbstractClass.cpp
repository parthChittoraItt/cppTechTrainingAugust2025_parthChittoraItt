#include <iostream>
class SmartPhone
{
public:
    virtual void answerCall() = 0;
};
class Samsung : public SmartPhone
{
    void answerCall()
    {
        std::cout << "Answering from Samsung\n";
    }
};
class Nothing : public SmartPhone
{
    void answerCall()
    {
        std::cout << "Answering from Nothing phone.\n";
    }
};
int main()
{
    SmartPhone *obj = new Samsung;
    SmartPhone *obj1 = new Nothing;
    obj1->answerCall();
    obj->answerCall();
    return 0;
}
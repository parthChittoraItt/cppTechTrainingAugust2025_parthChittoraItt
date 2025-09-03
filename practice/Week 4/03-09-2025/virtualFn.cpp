#include <iostream>
class Instrument
{
public:
    virtual void play()
    {
        std::cout << "Instrument is playing...\n";
    }
};
class Guitar : public Instrument
{
public:
    void play()
    {
        std::cout << "Guitar is playing\n";
    }
};
class Violin : public Instrument
{
public:
    void play()
    {
        std::cout << "Violin is playing\n";
    }
};
int main()
{
    Instrument *i1 = new Guitar;
    Instrument *i2 = new Instrument;
    // Violin *i3 = new Instrument();  // error
    Violin *i4 = new Violin;
    i1->play();
    i2->play();
    i4->play();
    return 0;
}
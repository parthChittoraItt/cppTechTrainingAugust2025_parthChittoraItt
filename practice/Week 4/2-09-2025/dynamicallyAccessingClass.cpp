#include <iostream>
class Hero
{
    double health;
    int id;

public:
    void setHealth(float Health)
    {
        health = Health;
    }
    void setId(int Id){
        id=Id;
    }
    int getId(){
        return id;
    }
    float getHealth(){
        return health;
    }
};
int main()
{
    Hero* hira = new Hero;\
    hira->setHealth(79);
    hira->setId(2);
    std::cout<<"The size of hira object is : "<<sizeof(hira)<<std::endl;
    std::cout<<"ID of hira is : "<<(*hira).getId()<<std::endl;
    std::cout<<"ID of hira is : "<<hira->getId()<<std::endl;
    std::cout<<"Health of hira is : "<<(*hira).getHealth()<<std::endl;
    std::cout<<"Health of hira is : "<<hira->getHealth()<<std::endl;

    
    return 0;
}
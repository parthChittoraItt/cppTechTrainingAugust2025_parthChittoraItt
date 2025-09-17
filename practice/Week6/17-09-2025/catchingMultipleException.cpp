#include <iostream>
#include <stdexcept>
int main()
{
    int choice;
    std::cout<<"Enter your choice : 1. out of range 2.invalid argument 3. range error ";
    try{
        std::cin>>choice;
        if(choice ==1){
            throw std::out_of_range("Out of range!!!\n");
        }
        if(choice==2){
            throw std::invalid_argument("Invalid argument!!");
        }
        if(choice==3){
            throw std::range_error("Range error!!");
        }
        else if (choice==4)
        {
            throw std::string("unknown");
        }
        else if (choice == 5 ){
            throw "char array error";
        }
        else throw -1;
    }
    catch(std::out_of_range e){
        std::cout<<"Caught exception : "<<e.what()<<std::endl;
    }
    
    catch(std::invalid_argument e){
        std::cout<<"Caught exception : "<<e.what()<<std::endl;
    }
    
    catch(std::range_error e){
        std::cout<<"Caught exception : "<<e.what()<<std::endl;
    }
    catch(std::string e){
        std::cout<<"Caught an  error in form of a string."<<std::endl;
    }
    catch(const char* e){
        std::cout<<"Caught a errror in form of an char array"<<std::endl;
    }
    catch(...){
        std::cout<<"Undefined error."<<std::endl;
    }

    return 0;
}
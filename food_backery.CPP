// First Principle of SOLID
// S : Single Responsibilty Principle
// Example of Food backery
#include <iostream>
using namespace std;
class backer{
    public:
    string name;
    
    backer(string dishname){
        name = dishname;
    }
    public:
    void repareDishes(){
        std::cout << "Taste and Delicius " << name << " is Ready" << std::endl;
    }
};
class backery_cleanear{
    public:
        string swiperName;
        
        backery_cleanear(string name){
            swiperName=name;
        }
        public:
        void cleanerMan(){
        std::cout << "Now "<< swiperName <<" Time to clean the backery" << std::endl;
    }
};
class growceryMan{
    public:
    string manName;
    growceryMan(string name){
        manName=name;
    }
    public:
    void growcery(){
        std::cout << manName <<" get all the growcery of backery" << std::endl;
    }
};
class customerServing{
    public:
    string waitername;
    customerServing(string name){
        waitername = name;
    }
    public:
    void waiter(){
        std::cout << waitername << " is serving the Food " << std::endl;
    }
};
int main()
{
    backer objbaker("Broast");
    objbaker.repareDishes();
    backery_cleanear objCleanear("Rashid");
    objCleanear.cleanerMan();
    growceryMan objGrowcery("Ayan");
    objGrowcery.growcery();
    
    customerServing objServing("Devick");
    objServing.waiter();
    

    return 0;
}
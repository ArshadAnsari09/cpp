#include<iostream>
using namespace std;

class Hero{
private:
    int health;

public:
    char level;

   Hero() { 
    cout << "Constructor Called" <<endl;
   }
    
    Hero (int health){
       this->health = health;
    }
    
    Hero (int health, int level){
       this->health = health;
       this->level = level;
    }

       void print()
    {   
        cout << health << endl;
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(int l)
    {
        level = l;
    }
};
int main()
{   
    Hero paul(5);
    cout<<paul.getHealth()<<endl;
    Hero *h=new Hero(7,'T');
    h->print();

    return 0;
}
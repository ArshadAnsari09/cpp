#include<iostream>
using namespace std;

class Hero{
private:
    int health;

public:
    char level;
    char *name;

   Hero() { 
    cout << "Simple Called" <<endl;
    name=new char[100];
   }
    
    Hero (int health){
       this->health = health;
    }
    
    Hero (int health, int level){
       this->health = health;
       this->level = level;
    }
    

    //copy Constructor

    Hero(Hero& temp){
        this->health = temp.health;
        this->level = temp.level;
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
    Hero S(50, 'A');
    // cout<< "S Object: "<<" ";
    // S.print();

    cout<< "R Object: "<<" ";
    Hero R(S);
    R.print();
    return 0;
}
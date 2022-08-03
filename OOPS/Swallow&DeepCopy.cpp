#include<iostream>
#include <cstring>
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
        char *ch=new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this->name=ch;

        this->health = temp.health;
        this->level = temp.level;
    }

       void print()
    {   cout<<"Name is : "<<name<<endl;
        cout <<"Health is : "<< health << endl;
        cout <<"Level is: " << level << endl;
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

    void setName(char name[]){
        strcpy(this->name, name);
    }
};

int main()
{  
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('B');
    char name[7]="Arshad";
    hero1.setName(name);

    // hero1.print();

    Hero hero2(hero1);
    // Hero hero2=hero1;
    // hero2.print();

    hero1.name[0]='B';
    hero1.print();

     hero2.print();

    hero1=hero2;
    hero1.print();
    hero2.print();
    return 0;


}
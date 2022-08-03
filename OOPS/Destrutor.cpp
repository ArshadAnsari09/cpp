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

    // Hero(Hero& temp){
    //     char *ch=new char[strlen(temp.name) + 1];
    //     strcpy(ch,temp.name);
    //     this->name=ch;

    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

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

    // void setName(char name[]){
    //     strcpy(this->name, name);
    // }

    ~Hero(){
        cout<< "Destructor called "<<endl;
    }
};
int main()
{   
    Hero a;

    //Dynamically made
    Hero *b= new Hero();
    delete b;
    return 0;
}
#include<iostream>
using namespace std;

class Hero{
   private:
    int health;

public:
    char level;
    char *name;
static int timeToComplete;

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
    
    static int random(){
        return timeToComplete;
    } 
    ~Hero(){
        cout<< "Destructor called "<<endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{   
    cout<< Hero::timeToComplete <<endl;  //recommended
    cout<<"Static function used : " <<endl;
     cout<< Hero::random() <<endl; 

    // Hero a;
    // cout<< a.timeToComplete<< endl;

    // a.timeToComplete= 4;
    // cout<< a.timeToComplete<< endl;
    return 0;
}
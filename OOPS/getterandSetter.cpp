#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    void print()
    {
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
    Hero paul;
    paul.setHealth(50);
    paul.level = 'R';

    cout << "Health is: " << paul.getHealth() << endl;
    cout << "Level is: " << paul.level << endl;
    
    Hero *b=new Hero;
    b->setLevel('A');
    b->setHealth(40);

    cout << "Health is: " << (*b).getHealth() << endl;
    cout << "Level is: " << (*b).level << endl;
    
    cout << "Health is: " << b->getHealth() << endl;
    cout << "Level is: " << b->level << endl;

    return 0;
}
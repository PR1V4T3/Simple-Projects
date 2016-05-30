#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ncurses.h>

    using namespace std;

int random_number(int start_, int end_){

    srand(time(NULL));

    int how_much = end_ - start_ + 1;

//  return (rand() % 50 ) + 7;     <- randomizing <7;57)

    return (rand() % how_much) + start_;

}

struct Database{

    string name;
    int hit;
    int health;
    int defend;

};

unsigned int damage(int defend_a, int hit_b){

    if (hit_b >= defend_a) return hit_b - defend_a;
    else
    return 0;
}

int main(){

Database Human;

    initscr();



    printw( "Your name: ");
    refresh();
    cin  >> Human.name;

    printw( "Now, your stats are randomizing. Wait a moment." );

    Human.hit = random_number(0,100);
    printw( "Human.hit is ready." );

    Human.health = random_number(0,100);
    printw( "Human.health is ready." );

    Human.defend = random_number(0,100);
    printw( "Human.defent is ready." );

    printw( "Randomizing ended.\n\n" );


    getch();
    endwin();

    return 0;

}

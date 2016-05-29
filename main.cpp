#include <iostream>
#include <cstdlib>
#include <ctime>

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

int main(){

    return 0;

}

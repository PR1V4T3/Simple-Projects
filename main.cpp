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


int main(){

    cout << random_number(1, 1);

    return 0;

}

#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int count = 0;
    while(count < 10){
        int max = 10;
        int x = (rand()%max)+1;
        cout << x << endl;
        count++;
    }
}
#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int count = 0;
    const int MAX = 10;
    int x = 0;
    while(count < 10 && x <= 7){
        x = (rand() % MAX) + 1;
        cout << count << ") " << x << endl;
        count++;
    }

// For loop study
    for(int i=0; i<MAX; i++) {
        x = (rand() % MAX) + 1;
        cout << i << ") " << x << endl;
    }
}
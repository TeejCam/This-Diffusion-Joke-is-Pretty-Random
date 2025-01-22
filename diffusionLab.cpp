#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

void move(int trials, int steps)
{
    vector<int> positions;
    srand(time(0));
    
    for(int i = 0; i < trials; i++) {
        int currentPos = 0;
        for(int j = 0; j < steps; j++) {
            int randNum = rand() % 101;
            if(randNum % 2 == 0) {
                currentPos++;
            } else {
                currentPos--;
            }
        }
        positions.push_back(currentPos);
    }
    for(int i = 0; i < positions.size(); i++) {
        cout << positions[i] << " ";
    }
}

int main() {
    // Write C++ code here
    move(10, 10);

    return 0;
}
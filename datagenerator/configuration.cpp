/**
    Purpose: DataGenerator

    @author Aditi Gupta
    @author Dibyadarshan Hota
    @author Annappa .B 
*/

#include <bits/stdc++.h>
using namespace std;

class ClientRequest {
    public:
        int startTime;
        int instructionCount;
        int age;

    ClientRequest(int start = 0, int instruction = 0, int age = 0) {
        startTime = start;
        instructionCount = instruction;
        this->age = age;
    }
};

class VirtualMachine {
    public:
        int coreCount;
        double capacity;
        vector<int> clockSpeed;

    VirtualMachine(int cores = 0, const vector<int>& speed = vector<int>()) {
        coreCount = cores;
        clockSpeed = speed;
        int totalCapacity = 0;
        for(auto itr: clockSpeed) totalCapacity += itr;
        capacity = (totalCapacity * 1.0) / coreCount;
    }
};

int main() {
    srand(42);
    int vmCount, clientRequestCount;
    cin >> vmCount >> clientRequestCount;
    cout << vmCount << " " << clientRequestCount << "\n";
    
    for(int i = 0; i < vmCount; ++i) {
        VirtualMachine VM;
        VM.coreCount = (rand() % 5) + 5;
        cout << VM.coreCount << " ";
        for(int j = 0; j < VM.coreCount; ++j) {
            int speed = (rand() % 10) + 10;
            cout << speed << " ";
        }
        cout << "\n";
    }

    for(int i = 0; i < clientRequestCount; ++i) {
        int startTime, instructionCount;
        startTime = (rand() % 40) + 1;
        instructionCount = (rand() % 500) + 10;
        cout << startTime << " " << instructionCount << "\n";
    }
    return 0;
}
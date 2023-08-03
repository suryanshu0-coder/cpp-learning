#include<iostream>
using namespace std;

class Sample {
    int sample1;
    int sample2;

    Sample(int x, int y) : sample1(x), sample2(y) {}

public:
    static Sample createSample(int x, int y) {
        return Sample(x, y);
    }

    void display() {
        cout << "sample1: " << sample1 << ", sample2: " << sample2 << endl;
    }
};

int main() {
    // Attempt to create instance using the constructor (this will result in a compilation error)
    // Sample s(5, 6);

    // Create instance using the static method
    Sample s = Sample::createSample(5, 6);

    // Call display to check the values
    s.display();

    return 0;
}

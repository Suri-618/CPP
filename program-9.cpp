#include <iostream>
using namespace std;
class VolumeCalculator {
public:
    double calculateVolume(double length, double width, double depth = 1) {
        return length * width * depth;
    }
};

int main () {

    VolumeCalculator vc;

    cout << "Volume with default depth (length=5, width=4): " << vc.calculateVolume(5, 4) << endl;

    cout << "Volume with all dimensions (length=5, width=4, depth=3): " << vc.calculateVolume(5, 4, 3) << endl;
    return 0;
}
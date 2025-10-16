#include <iostream>
using namespace std;

inline void printHappy() {
    cout << "😊 You're feeling great today!" << endl;
}

inline void printSad() {
    cout << "😢 It's okay to have a down day." << endl;
}

inline void printExcited() {
    cout << "🤩 So much excitement! Keep that energy up!" << endl;
}

int main() {
    int mood;

    cout << "What's your current mood?" << endl;
    cout << "1. Happy\n2. Sad\n3. Excited" << endl;
    cout << "Enter your choice (1–3): ";
    cin >> mood;

    switch (mood) {
        case 1:
            printHappy();
            break;
        case 2:
            printSad();
            break;
        case 3:
            printExcited();
            break;
        default:
            cout << "😐 Mood not recognized." << endl;
    }

    return 0;

}

// # OUTPUT:
// What's your current mood?
// 1. Happy
// 2. Sad
// 3. Excited
// Enter your choice (1-3): 2
// It's okay to have a down day

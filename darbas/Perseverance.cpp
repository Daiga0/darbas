#include <iostream>
using namespace std;

int main() {

    double x = 0.0, sum = 0, total = 0;
    double grit = 0.0;

    total++;
    cout << "New ideas and projects sometimes distract me from previous ones." << endl;
    cout << "Please enter a number: not at all - 5; not much - 4; somewhat - 3; mostly - 2; very much - 1: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    total++;
    cout << "Setbacks don't discourage me. I don't give up easily. " << endl;
    cout << "Please enter a number: not at all - 1; not much - 2; somewhat - 3; mostly - 4; very much - 5: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    total++;
    cout << "I often set a goal but later choose to pursue a different one." << endl;
    cout << "Please enter a number: not at all - 5; not much - 4; somewhat - 3; mostly - 2; very much - 1: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    total++;
    cout << "I am a hard worker." << endl;
    cout << "Please enter a number: not at all - 1; not much - 2; somewhat - 3; mostly - 4; very much - 5: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    total++;
    cout << "I have a difficulty maintaining my focus on projects that take more than a few months to complete." << endl;
    cout << "Please enter a number: not at all - 5; not much - 4; somewhat - 3; mostly - 2; very much - 1: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    total++;
    cout << "I finish whatever I begin." << endl;
    cout << "Please enter a number: not at all - 1; not much - 2; somewhat - 3; mostly - 4; very much - 5: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    total++;
    cout << "My interests change from year to year." << endl;
    cout << "Please enter a number: not at all - 5; not much - 4; somewhat - 3; mostly - 2; very much - 1: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    total++;
    cout << "I'm diligent. I never give up." << endl;
    cout << "Please enter a number: not at all - 1; not much - 2; somewhat - 3; mostly - 4; very much - 5: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    total++;
    cout << "I've been obsessed with acertain idea or project for a short time but later lost interest." << endl;
    cout << "Please enter a number: not at all - 5; not much - 4; somewhat - 3; mostly - 2; very much - 1: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    total++;
    cout << "I have overcome setbacks to conquer an important challenge." << endl;
    cout << "Please enter a number: not at all - 1; not much - 2; somewhat - 3; mostly - 4; very much - 5: " << endl;

    cin >> x;

    if (0 < x && x < 6) {

     sum += x;
    }

    grit = sum / total;

    cout << "Your Grit score is: " << grit << endl;


    if (grit >=2.5 && grit < 3.0) {

        cout << "This reveals that you're grittier than 10 % of the population" << endl;
    }

    else if (grit >= 3.0 && grit < 3.3) {

        cout << "This reveals that you're grittier than 20 % of the population" << endl;
    }

    else if (grit >= 3.3 && grit < 3.5) {

        cout << "This reveals that you're grittier than 30 % of the population" << endl;
    }

    else if (grit >= 3.5 && grit < 3.8) {

        cout << "This reveals that you're grittier than 40 % of the population" << endl;
    }

    else if (grit >= 3.8 && grit < 3.9) {

        cout << "This reveals that you're grittier than 50 % of the population" << endl;
    }

    else if (grit >= 3.9 && grit < 4.1) {

        cout << "This reveals that you're grittier than 60 % of the population" << endl;
    }

    else if (grit >= 4.1 && grit < 4.3) {

        cout << "This reveals that you're grittier than 70 % of the population" << endl;
    }

    else if (grit >= 4.3 && grit < 4.5) {

        cout << "This reveals that you're grittier than 80 % of the population" << endl;
    }

    else if (grit >= 4.5 && grit < 4.7) {

        cout << "This reveals that you're grittier than 90 % of the population" << endl;
    }

    else if (grit >= 4.7 && grit < 4.9) {

        cout << "This reveals that you're grittier than 95 % of the population" << endl;
    }

    else if (grit >= 4.9) {

        cout << "This reveals that you're grittier than 99 % of the population" << endl;
    }

    return 0;

}

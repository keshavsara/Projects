#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>  
#include <chrono>  
#include <cctype>  

using namespace std;

enum Color { RED, GREEN, BLUE, YELLOW, PURPLE };

Color generateRandomColor() {
    int randomNum = rand() % 5;
    return static_cast<Color>(randomNum);
}

string colorToString(Color color) {
    switch(color) {
        case RED: return "RED";
        case YELLOW: return "YELLOW";
        case GREEN: return "GREEN";
        case BLUE: return "BLUE";
        case PURPLE: return "PURPLE";
        default: return "Unknown";
    }
}

int main() {
    srand(time(0));

    Color targetColor = generateRandomColor();
    string guess;
    
    while(true) {
        system("clear"); 
        cout << "Welcome to the Colored Square Game!" << endl;
        cout << "******************************" << endl;
        cout << "Guess the color for the square (Red, Green, Blue, Yellow, or Purple)." << endl;
        cout << "Enter your guess: ";
        cin >> guess;
        
        for(int i = 0; i < guess.length(); i++) {
            guess[i] = tolower(guess[i]);
        }
        
        Color userColor;
        if(guess == "red") userColor = RED;
        else if(guess == "green") userColor = GREEN;
        else if(guess == "blue") userColor = BLUE;
        else if(guess == "yellow") userColor = YELLOW;
        else if(guess == "purple") userColor = PURPLE;
        else {
            cout << "Invalid color. Please enter a valid color." << endl;
            this_thread::sleep_for(chrono::seconds(1));
            continue;
        }
        
        if(userColor == targetColor) {
            cout << endl;
            cout << "Congratulations! You guessed the correct color." << endl;
            break;
        } else {
            cout << "Wrong guess. Try again." << endl;
        }
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}

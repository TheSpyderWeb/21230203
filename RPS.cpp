#include <iostream>

using namespace std;

char cpuSelection();
char userOptions();
void check(char user, char cpu);

int main() {
    // Introduction Text
    cout << "\nWelcome, Let's play Rock Paper Scissors!" << endl;
    cout << "Note * Must enter lower case letters, Any INVALID letter will end the game \n" << endl;
    cout << "Pick one of the following options\n" << endl;
    cout << "[R] Rock   [P] Paper   [S] Scissors " << endl;
    
    char user = userOptions(); // user turn
    char cpu = cpuSelection(); // cpu turn
    check(user, cpu); // checks winner
}
char cpuSelection() {
    srand(time(0));
    // Random number
    int computer = rand() % 3 + 1;
        
        if (computer == 1){
            cout << "Computer: Rock 🪨" << endl;
            return 'r';
        }
        else if (computer == 2){
            cout << "Computer: Paper 📃" << endl;
            return 'p';
        }
        else if (computer == 3){
            cout << "Computer: Scissors ✂️" << endl;
            return 's';
    }
    return computer;
}
char userOptions() {
    //User's choice
    char selection;
    cin >> selection;
    
        if (selection == 'r'){
            cout << "User: Rock 🪨" << endl;
            return 'r';
        }
        else if (selection == 'p'){
            cout << "User: Paper 📃" << endl;
            return 'p';
        }
        else if (selection == 's'){
            cout << "User: Scissors ✂️" << endl;
            return 's';
        } else {
            cout << "INVALID" << endl;
            exit(0);
        }
}
void check (char user, char cpu){
    
    if ((user == 'r' && cpu == 'p') ||
        (user == 'p' && cpu == 's') ||
        (user == 's' && cpu == 'r')) {
        cout << "Computer Wins! 💻 🎊" << endl;
    }
    else if ((user == 'r' && cpu == 's') ||
             (user == 'p' && cpu == 'r') ||
             (user == 's' && cpu == 'p')) {
        cout << "You Win! 🧑‍💻 🎊" << endl;
    }
    else {
        cout << "Tie 🤝 " << endl;
    }
    exit(0);
}

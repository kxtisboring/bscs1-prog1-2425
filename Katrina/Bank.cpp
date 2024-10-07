#include <iostream>
using namespace std;

const int MAX_USERS = 100;

string username[MAX_USERS], password[MAX_USERS];
double balance[MAX_USERS]; // Array to store balances for each user
int registeredUsers = 0; // Counter for the number of registered users

void registerUser();
bool loginUser(int &loggedInUserIndex);
void deposit(int userIndex);
void withdraw(int userIndex);
void checkBalance(int userIndex);

int main() {
    int choose;
    bool exitProgram = false; // Flag to exit the program
    int loggedInUserIndex = -1; // Index of the logged-in user

    while (!exitProgram) {
        cout << "\n--- Welcome to the Banking System! ---" << endl;
        cout << "Choose [1] Register, [2] Login, or [3] Exit: ";
        cin >> choose;

        if (cin.fail() || (choose < 1 || choose > 3)) {
            cin.clear();  // Clear input buffer
            cin.ignore(1000, '\n');  // Ignore invalid input
            cout << "Invalid choice! Please choose either [1], [2], or [3]." << endl;
            continue;
        }

        if (choose == 1) {
            registerUser();
        } else if (choose == 2) {
            if (loginUser(loggedInUserIndex)) {
                // Logged in successfully, show banking options
                int bankOption;
                bool loggedIn = true;

                while (loggedIn) {
                    cout << "\n--- Banking Options ---" << endl;
                    cout << "Choose [1] Deposit, [2] Withdraw, [3] Check Balance, [4] Logout: ";
                    cin >> bankOption;

                    if (bankOption == 1) {
                        deposit(loggedInUserIndex);
                    } else if (bankOption == 2) {
                        withdraw(loggedInUserIndex);
                    } else if (bankOption == 3) {
                        checkBalance(loggedInUserIndex);
                    } else if (bankOption == 4) {
                        loggedIn = false;
                        cout << "Logged out successfully!" << endl;
                    } else {
                        cout << "Invalid option! Please choose a valid action." << endl;
                    }
                }
            }
        } else if (choose == 3) {
            exitProgram = true; // Exit the loop and end the program
            cout << "Exiting the program. Goodbye!" << endl;
        }
    }

    return 0;
}

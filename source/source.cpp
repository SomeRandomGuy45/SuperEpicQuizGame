#if defined(__linux__)
    #include <iostream>
    #include <unistd.h>
    #include <stdlib.h>
#elif _WIN32
    #include <iostream>
    #include <unistd.h>
    #include <windows.h>
#endif

using namespace std;
bool isGameRunning;

// a simple quiz game!11!!!111!!
void MakeQuizStuff(int QNum, int Answer, string QName, string Q1, string Q2, string Q3, string Q4) {
    if (isGameRunning == true) {
        if (Answer > 4) {
            cout << "ERROR: Answer cannot be above four!";
        } else {
            cout << "Question " << QNum << ". " << QName << endl;
            cout << "1. " << Q1 << "\t";
            cout << "2. " << Q2 << "\n";
            cout << "3. " << Q3 << "\t";
            cout << "4. " << Q4 << "\n";
            int AnswerInput;
            cout << "What is the answer? ";
            cin >> AnswerInput;
            if (AnswerInput == Answer) {
                cout << "GOOD JOB!!!!!!!\n";
                sleep(5);
                #if defined(__linux__)
                    system("clear");
                #elif _WIN32
                    system("cls");
                #endif // defined
            } else {
                cout << "WRONG ANSWER!!!!\n";
                sleep(5);
                #if defined(__linux__)
                    system("clear");
                #elif _WIN32
                    system("cls");
                #endif // defined
            }
        }
    } else {
        cout << "ERROR: Game is not running!";
    }
}


int main() {
    if (isGameRunning == true) {
        cout << "ERROR: Game is already running!";
        return 5;
    } else {
        isGameRunning = true;
        MakeQuizStuff(1, 4, "HELLO WORLD", "HELLO WORLD", "HELLO WORLD", "HELLO WORLD", "HELLO WORLD");
        MakeQuizStuff(2, 4, "HELLO WORLD", "HELLO WORLD", "HELLO WORLD", "HELLO WORLD", "HELLO WORLD");
    }
    return 0;
}

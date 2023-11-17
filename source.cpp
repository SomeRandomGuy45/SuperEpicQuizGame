#if defined(__linux__)
    #include <iostream>
    #include <unistd.h>
    #include <stdlib.h>
#elif _WIN32
    #include <iostream>
    #include <windows.h>
#elif __APPLE__
    #include <iostream>
    #include <unistd.h>
    #include <stdlib.h>
#endif

using namespace std;

void MakeQuiz(int Num, int Ans, string QN, string Q1, string Q2, string Q3, string Q4)
{
    cout << "Question" << Num << ". " << QN << endl;
    cout << "1. " << Q1 << endl;
    cout << "2. " << Q2 << endl;
    cout << "3. " << Q3 << endl;
    cout << "4. " << Q4 << endl;
    cout << "What is the answer? ";
    int input;
    cin >> input;
    if (input == Ans)
    {
        cout << "You are right!";
        sleep(2.5);
        #if defined(__linux__)
            system("clr");
        #elif _WIN32
            system("clear");
        #elif __APPLE__
            system("clr");
        #endif
    } else if (input != Ans) {
        cout << "You are wrong :(";
        sleep(2.5);
        #if defined(__linux__)
            system("clr");
        #elif _WIN32
            system("clear");
        #elif __APPLE__
            system("clr");
        #endif
    }
}

int main()
{
    MakeQuiz(1, 2, "What is the thing", "What?", "Life is roblox", "Let's go golfing", "Yeah no");
    return 0;
}

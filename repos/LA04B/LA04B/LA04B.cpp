#include<iostream>
using namespace std;

int main()
{
    // print a menu
    cout << "A - Option A\n";
    cout << "B - Option B\n";
    cout << "C - Option C\n";

    char choice;

    cout << "Enter your choice: ";
    
    cin >> choice;

 

    switch (choice)
    {
            case 'A':
            cout << "You entered A!\n";
            break;
            case 'B':
            cout << "You entered B!\n";
            break;
            case 'C':
            cout << "You entered C!\n";
            break;
            default:
            cout << "Invalid Choice!\n";
    }

    cout << "Program done!" << endl;

    cin.ignore();
    cin.get();
}

// Hi Professor, I just can't seem to run the code even after filling in the blanks. 
// I added in a line - "cin >> choice" and I moved "char choice" above "cout << Enter your choice" 
// I am not sure if this is what you wanted. I will re-do it if it doesn't meet your standards. 



/* #include<iostream>
using namespace std;

int main()
{
    // print a menu
    cout << "A - Option A\n";
    cout << "B - Option B\n";
    cout << "C - Option C\n";
    cout << "Enter your choice: ";

    ________ choice;

    ________(________)
    {
            case ____:
                cout << "You entered A!\n";
                break;
                ________ 'B':
                cout << "You entered B!\n";
                ________
                    ________ 'C':
                cout << "You entered C!\n";
                ________
                    ________ :
                cout << "Invalid Choice!\n";
    }

    cout << "Program done!" << endl;

    cin.ignore();
    cin.get();
}
*/
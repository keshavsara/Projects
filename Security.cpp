#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, i;
    string text, old, password1, password2, pass, name, password0, age, user, word;
    string creds[3], cp[3];

    cout << "         Security System       " << endl;
    cout << "_____________________________________" << endl << endl;
    cout << "|        1.Register                  |" << endl;
    cout << "|        2.Login                     |" << endl;
    cout << "|        3.Change Password           |" << endl;
    cout << "|        4.End Program               |" << endl;
    cout << "_____________________________________" << endl << endl;

    do {
        cout << endl << endl;
        cout << "Enter your choice: ";
        cin >> a;
        switch(a) {
            case 1: {
                cout << "_______________________________" << endl;
                cout << "|________Register______________" << endl;
                cout << "|_____________________________|" << endl << endl;
                cout << "Please enter username: ";
                cin >> name;
                cout << "Please enter the password: ";
                cin >> password0;
                cout << "Please enter your age: ";
                cin >> age;

                ofstream of1;
                of1.open("file.txt");
                if(of1.is_open()) {
                    of1 << name << "\n";
                    of1 << password0 << "\n";
                    of1 << age;
                    of1.close();
                    cout << "Registration Successful" << endl;
                }
                break;
            }
            case 2: {
                i = 0;
                cout << "__________________________________" << endl << endl;
                cout << "|------------Login---------------|" << endl;
                cout << "|________________________________|" << endl << endl;

                ifstream of2;
                of2.open("file.txt");
                cout << "Please enter the username: ";
                cin >> user;
                cout << "Please enter the password: ";
                cin >> pass;

                if(of2.is_open()) {
                    while(getline(of2, text)) {
                        creds[i] = text;
                        i++;
                    }
                    of2.close();

                    if(user == creds[0] && pass == creds[1]) {
                        cout << "----Login Successful----" << endl << endl;
                        cout << "Details" << endl;
                        cout << "Username: " << creds[0] << endl;
                        cout << "Password: " << creds[1] << endl;
                        cout << "Age: " << creds[2] << endl;
                    } else {
                        cout << endl << endl;
                        cout << "Incorrect Credentials" << endl;
                        cout << "|     1. Press 2 to login             |" << endl;
                        cout << "|     2. Press 3 to change password   |" << endl;
                    }
                }
                break;
            }
            case 3: {
                i = 0;
                cout << "---------------Change Password-------------" << endl;

                ifstream of0;
                of0.open("file.txt");
                cout << "Enter the old password: ";
                cin >> old;

                if(of0.is_open()) {
                    while(getline(of0, text)) {
                        cp[i] = text;
                        i++;
                    }
                    of0.close();

                    if(old == cp[1]) {
                        cout << "Enter your new password: ";
                        cin >> password1;
                        cout << "Enter your password again: ";
                        cin >> password2;

                        if(password1 == password2) {
                            ofstream of1;
                            of1.open("file.txt");
                            if(of1.is_open()) {
                                of1 << cp[0] << "\n";
                                of1 << password1 << "\n";
                                of1 << cp[2];
                                of1.close();
                                cout << "Password changed successfully" << endl;
                            }
                        } else {
                            cout << "Passwords do not match" << endl;
                        }
                    } else {
                        cout << "Please enter the valid password" << endl;
                    }
                }
                break;
            }
            case 4: {
                cout << "______________Thank you!_____________" << endl;
                break;
            }
            default: {
                cout << "Enter a valid choice" << endl;
            }
        }
    } while(a != 4);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void mainmenu();

class management 
{
    public:
    management()
    {
        mainmenu();
    }
};

class details
{
    public:
    static string name, gender;
    int phoneNo;
    int age;
    string Address;
    static int CID;
    char arr[100];

    void information()
    {
        cout << "\nEnter the customer ID:" << endl;
        cin >> CID;
        cout << "\nEnter the name:" << endl;
        cin >> name;
        cout << "\nEnter the age:" << endl;
        cin >> age;
        cout << "\nAddress:" << endl;
        cin >> Address;
        cout << "\nGender:" << endl;
        cin >> gender;
        cout << "\nDetails saved successfully" << endl;
    }
};

int details::CID;
string details::name;
string details::gender;

class registration 
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

        for(int a = 0; a < 6; a++)
        {
            cout << (a+1) << ". Flight to " << flightN[a] << endl;
        }
        cout << "\nWelcome to the airline!" << endl;
        cout << "Press the number of the country of which you want to book the flight: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "_________________Welcome to Dubai Emirates__________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. DUB - 498" << endl;
                cout << "\t08-08-2024 8:00AM 10 hrs Rs. 14000" << endl;
                cout << "2. DUB - 658" << endl;
                cout << "\t09-08-2024 4:00AM 12 hrs Rs. 10000" << endl;
                cout << "3. DUB - 786" << endl;
                cout << "\t09-08-2024 4:00PM 15 hrs Rs. 8000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if(choice1 == 1)
                {
                    charges = 14000;
                    cout << "\nYou have successfully booked the flight DUB-498" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 2)
                {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight DUB-658" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 3)
                {
                    charges = 8000;
                    cout << "\nYou have successfully booked the flight DUB-786" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else 
                {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press 1 to go back to the main menu: ";
                cin >> back;

                if(back == 1)
                {
                    mainmenu();
                }
                else 
                {
                    mainmenu();
                }
                break;
            }
            case 2:
            {
                cout << "_________________Welcome to Canadian Airlines__________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. CA - 198" << endl;
                cout << "\t08-08-2024 2:00PM 20 hrs Rs. 34000" << endl;
                cout << "2. CA - 158" << endl;
                cout << "\t09-08-2024 6:00AM 23 hrs Rs. 29000" << endl;
                cout << "3. CA - 208" << endl;
                cout << "\t09-08-2024 8:00PM 21 hrs Rs. 24000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if(choice1 == 1)
                {
                    charges = 34000;
                    cout << "\nYou have successfully booked the flight CA-198" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 2)
                {
                    charges = 29000;
                    cout << "\nYou have successfully booked the flight CA-158" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 3)
                {
                    charges = 24000;
                    cout << "\nYou have successfully booked the flight CA-208" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else 
                {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press 1 to go back to the main menu: ";
                cin >> back;

                if(back == 1)
                {
                    mainmenu();
                }
                else 
                {
                    mainmenu();
                }
                break;
            }
            case 3:
            {
                cout << "_________________Welcome to UK Airways__________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. UK - 798" << endl;
                cout << "\t08-08-2024 10:00AM 14 hrs Rs. 44000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if(choice1 == 1)
                {
                    charges = 44000;
                    cout << "\nYou have successfully booked the flight UK-798" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else 
                {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press 1 to go back to the main menu: ";
                cin >> back;

                if(back == 1)
                {
                    mainmenu();
                }
                else 
                {
                    mainmenu();
                }
                break;
            }
            case 4:
            {
                cout << "_________________Welcome to US Airways__________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. US - 567" << endl;
                cout << "\t08-08-2024 8:00AM 22 hrs Rs. 37000" << endl;
                cout << "2. US - 658" << endl;
                cout << "\t09-08-2024 4:00AM 22 hrs Rs. 39000" << endl;
                cout << "3. US - 786" << endl;
                cout << "\t09-08-2024 4:00PM 21 hrs Rs. 42000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if(choice1 == 1)
                {
                    charges = 37000;
                    cout << "\nYou have successfully booked the flight US-567" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 2)
                {
                    charges = 39000;
                    cout << "\nYou have successfully booked the flight US-658" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 3)
                {
                    charges = 42000;
                    cout << "\nYou have successfully booked the flight US-786" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else 
                {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press 1 to go back to the main menu: ";
                cin >> back;

                if(back == 1)
                {
                    mainmenu();
                }
                else 
                {
                    mainmenu();
                }
                break;
            }
            case 5:
            {
                cout << "_________________Welcome to Australian Airlines__________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. AS - 898" << endl;
                cout << "\t08-08-2024 6:00AM 20 hrs Rs. 49000" << endl;
                cout << "2. AS - 958" << endl;
                cout << "\t09-08-2024 4:00AM 22 hrs Rs. 51000" << endl;
                cout << "3. AS - 988" << endl;
                cout << "\t09-08-2024 6:00PM 21 hrs Rs. 47000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if(choice1 == 1)
                {
                    charges = 49000;
                    cout << "\nYou have successfully booked the flight AS-898" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 2)
                {
                    charges = 51000;
                    cout << "\nYou have successfully booked the flight AS-958" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 3)
                {
                    charges = 47000;
                    cout << "\nYou have successfully booked the flight AS-988" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else 
                {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press 1 to go back to the main menu: ";
                cin >> back;

                if(back == 1)
                {
                    mainmenu();
                }
                else 
                {
                    mainmenu();
                }
                break;
            }
            case 6:
            {
                cout << "_________________Welcome to European Airlines__________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. EU - 898" << endl;
                cout << "\t08-08-2024 10:00AM 18 hrs Rs. 55000" << endl;
                cout << "2. EU - 958" << endl;
                cout << "\t09-08-2024 1:00AM 19 hrs Rs. 53000" << endl;
                cout << "3. EU - 988" << endl;
                cout << "\t09-08-2024 11:00AM 20 hrs Rs. 50000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if(choice1 == 1)
                {
                    charges = 55000;
                    cout << "\nYou have successfully booked the flight EU-898" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 2)
                {
                    charges = 53000;
                    cout << "\nYou have successfully booked the flight EU-958" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else if(choice1 == 3)
                {
                    charges = 50000;
                    cout << "\nYou have successfully booked the flight EU-988" << endl;
                    cout << "You can go back to menu and take the tickets" << endl;
                }
                else 
                {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press 1 to go back to the main menu: ";
                cin >> back;

                if(back == 1)
                {
                    mainmenu();
                }
                else 
                {
                    mainmenu();
                }
                break;
            }
            default:
            {
                cout << "Invalid input, shifting to the previous menu" << endl;
                mainmenu();
                break;
            }
        }
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration, details
{
    public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "___________XYZ Airlines__________" << endl;
            outf << "_____________Ticket_______________" << endl;
            outf << "__________________________________" << endl;

            outf << "Customer ID: " << details::CID << endl;
            outf << "Customer Name: " << details::name << endl;
            outf << "Customer Gender: " << details::gender << endl;
            outf << "\tDescription" << endl << endl;

            if(registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if(registration::choice == 2)
            {
                destination = "Canada";
            }
            else if(registration::choice == 3)
            {
                destination = "UK";
            }
            else if(registration::choice == 4)
            {
                destination = "USA";
            }
            else if(registration::choice == 5)
            {
                destination = "Australia";
            }
            else if(registration::choice == 6)
            {
                destination = "Europe";
            }

            outf << "Destination:\t\t" << destination << endl;
            outf << "Flight cost:\t\t" << registration::charges << endl;
        }
        outf.close();
    }

    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout << "File error!" << endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainmenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\tXYZ Airlines\n" << endl;
    cout << "\t______________Main Menu____________" << endl;

    cout << "\t___________________________________" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;

    cout << "\t|\tPress 1 to add the Customer Details\t|" << endl;
    cout << "\t|\tPress 2 for Flight Registration\t|" << endl;
    cout << "\t|\tPress 3 for Ticket and Charges\t|" << endl;
    cout << "\t|\tPress 4 to Exit\t\t\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t___________________________________" << endl;

    cout << "Enter your choice: ";
    cin >> lchoice;

    details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout << "__________Customers__________\n" << endl;
            d.information();
            cout << "Press any key to go back to the main menu: ";
            cin >> back;
            mainmenu();
            break;
        }
        case 2:
        {
            cout << "__________Book a flight using this system__________\n" << endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout << "__________Get your ticket__________\n" << endl;
            t.Bill();
            cout << "Your ticket is printed, you can collect it \n" << endl;
            cout << "Press 1 to display your ticket: ";
            cin >> back;

            if(back == 1)
            {
                t.dispBill();
                cout << "Press any key to go back to the main menu: ";
                cin >> back;
                mainmenu();
            }
            else 
            {
                mainmenu();
            }
            break;
        }
        case 4:
        {
            cout << "\n\n\t__________Thank you__________" << endl;
            break;
        }
        default:
        {
            cout << "Invalid input, please try again!\n" << endl;
            mainmenu();
            break;
        }
    }
}

int main()
{
    management m;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Shopping {
private:
    int pcode;
    float price;
    float dis;
    string name;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void Shopping::menu() {
    int choice;
    string email;
    string password;

    while (true) {
        cout << "\t\t\t\t_________________________________\n";
        cout << "\t\t\t\t                                 \n";
        cout << "\t\t\t\t       Supermarket Main Menu     \n";
        cout << "\t\t\t\t                                 \n";
        cout << "\t\t\t\t_________________________________\n";
        cout << "\t\t\t\t                                 \n";
        cout << "\t\t\t\t|   1) Administrator   |\n";
        cout << "\t\t\t\t|                      |\n";
        cout << "\t\t\t\t|   2) Buyer           |\n";
        cout << "\t\t\t\t|                      |\n";
        cout << "\t\t\t\t|   3) Exit            |\n";
        cout << "\t\t\t\t|                      |\n";
        cout << "\n\t\t\t Please Select: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\t\t\t\t Please login\n";
                cout << "\t\t\t\t Enter Email: ";
                cin >> email;
                cout << "\t\t\t\t Password: ";
                cin >> password;

                if (email == "keshavsara8@gmail.com" && password == "Kesh@975") {
                    administrator();
                } else {
                    cout << "Invalid Email/password\n";
                }
                break;
            }
            case 2: {
                buyer();
                break;
            }
            case 3: {
                exit(0);
            }
            default: {
                cout << "Please select from the given option" << endl;
            }
        }
    }
}

void Shopping::administrator() {
    int choice;
    while (true) {
        cout << "\n\n\n\t\t\t\t Administrator Menu";
        cout << "\n\t\t\t|________1) Add the product__________|";
        cout << "\n\t\t\t|                                     |";
        cout << "\n\t\t\t|________2) Modify the product_______|";
        cout << "\n\t\t\t|                                     |";
        cout << "\n\t\t\t|________3) Delete the product_______|";
        cout << "\n\t\t\t|                                     |";
        cout << "\n\t\t\t|________4) Back to main menu________|";
        cout << "\n\n\t Please enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                add();
                break;
            }
            case 2: {
                edit();
                break;
            }
            case 3: {
                rem();
                break;
            }
            case 4: {
                return;
            }
            default: {
                cout << "Invalid Choice!" << endl;
            }
        }
    }
}

void Shopping::buyer() {
    int choice;
    while (true) {
        cout << "\t\t\t Buyer \n";
        cout << "_____________________\n";
        cout << "\t\t\t 1) Buy product \n";
        cout << "                     \n";
        cout << "\t\t\t 2) Go back     \n";
        cout << "\t\t\t Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                receipt();
                break;
            }
            case 2: {
                return;
            }
            default: {
                cout << "Invalid choice" << endl;
            }
        }
    }
}

void Shopping::add() {
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout << "\n\n\t\t\t Add new product";
    cout << "\n\n\t Product code of the product: ";
    cin >> pcode;
    cout << "\n\n Name of the product: ";
    cin >> name;
    cout << "\n\n\t Price of the product: ";
    cin >> price;
    cout << "\n\n\t Discount on product: ";
    cin >> dis;

    data.open("database.txt", ios::in);
    if (!data) {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << name << " " << price << " " << dis << "\n";
        data.close();
    } else {
        data >> c >> n >> p >> d;
        while (!data.eof()) {
            if (c == pcode) {
                token++;
            }
            data >> c >> n >> p >> d;
        }
        data.close();
    }

    if (token == 1) {
        cout << "\n\n Record already exists!";
    } else {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << name << " " << price << " " << dis << "\n";
        data.close();
        cout << "\n\n\t Record inserted!";
    }
}

void Shopping::edit() {
    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;

    cout << "\n\t\t\t Modify the record";
    cout << "\n\t\t\t Product code: ";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data) {
        cout << "\n\n File doesn't exist!";
    } else {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> name >> price >> dis;
        while (!data.eof()) {
            if (pkey == pcode) {
                cout << "\n\t\t Product new code: ";
                cin >> c;
                cout << "\n\t\t Name of the product: ";
                cin >> n;
                cout << "\n\t\t Price: ";
                cin >> p;
                cout << "\n\t\t Discount: ";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << "\n";
                cout << "\n\n\t\t Record Edited";
                token++;
            } else {
                data1 << " " << pcode << " " << name << " " << price << " " << dis << "\n";
            }
            data >> pcode >> name >> price >> dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0) {
            cout << "\n\n Record not found, sorry!";
        }
    }
}

void Shopping::rem() {
    fstream data, data1;
    int pkey;
    int token = 0;
    cout << "\n\n\t Delete product";
    cout << "\n\n\t Product code: ";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data) {
        cout << "File doesn't exist ";
    } else {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> name >> price >> dis;
        while (!data.eof()) {
            if (pcode == pkey) {
                cout << "\n\n\t Product deleted successfully";
                token++;
            } else {
                data1 << " " << pcode << " " << name << " " << price << " " << dis << "\n";
            }
            data >> pcode >> name >> price >> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0) {
            cout << "\n\n Record not found";
        }
    }
}

void Shopping::list() {
    fstream data;
    data.open("database.txt", ios::in);
    cout << "\n\n|_______________________________________\n";
    cout << "ProNO\t\tName\t\tprice\n";
    cout << "\n\n|_______________________________________\n";
    data >> pcode >> name >> price >> dis;
    while (!data.eof()) {
        cout << pcode << "\t\t" << name << "\t\t" << price << "\n";
        data >> pcode >> name >> price >> dis;
    }
    data.close();
}

void Shopping::receipt() {
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c = 0;
    float amount;
    float dis = 0;
    float total = 0;

    cout << "\n\n\t\t\t\t RECEIPT";
    data.open("database.txt", ios::in);
    if (!data) {
        cout << "\n\n Empty database";
    } else {
        data.close();
        list();
        cout << "\n__________________________________________\n";
        cout << "\n|                                         \n";
        cout << "\n|      Please place the order             \n";
        cout << "\n|                                         \n";
        cout << "\n|_________________________________________\n";

        do {
            cout << "\n\n Enter Product code: ";
            cin >> arrc[c];
            cout << "\n\n Enter the product quantity: ";
            cin >> arrq[c];
            for (int i = 0; i < c; i++) {
                if (arrc[c] == arrc[i]) {
                    cout << "\n\n Duplicate product code. Please try again!";
                    return;
                }
            }
            c++;
            cout << "\n\n Do you want to buy another product? (y/n): ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');

        cout << "\n\n\t\t\t___________________RECEIPT________________\n";
        cout << "\nProduct No \t Product Name\t Product Quantity \tPrice \tAmount with discount\n";
        for (int i = 0; i < c; i++) {
            data.open("database.txt", ios::in);
            data >> pcode >> name >> price >> dis;
            while (!data.eof()) {
                if (pcode == arrc[i]) {
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100);
                    total += dis;
                    cout << "\n" << pcode << "\t\t" << name << "\t\t" << arrq[i] << "\t\t" << price << "\t" << amount << "\t\t" << dis;
                }
                data >> pcode >> name >> price >> dis;
            }
            data.close();
        }
        cout << "\n\n______________________________";
        cout << "\n Total Amount : " << total;
    }
}

int main() {
    Shopping s;
    s.menu();
    return 0;
}

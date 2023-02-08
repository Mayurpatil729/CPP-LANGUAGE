// BANK MANAGEMENT SYSTEM USING OOPS CONCEPTS

// Date :

#include <bits/stdc++.h>
using namespace std;

class Bank
{
private:
    int total;
    string ID;
    struct person
    {
        string name, id, address;
        int contact, cash;
    } person[100];

public:
    Bank()
    {
        total = 0;
    }
    void choice();
    void PerData();
    void Show();
    void Update();
    void Search();
};

int main()
{
    cout << "\n===>> BANK MANAGEMENT SYSTEM <<===";
    return 0;

    // coded by Mayur
}

void Bank::choice()
{
    char ch;
    while (1)
    {
        cout << "\n\nPRESS...!!!" << endl;
        cout << "1. Create New Account " << endl;
        cout << "2. View customes list" << endl;
        cout << "3. Update Information of Existing Account" << endl;
        cout << "4. Check the details of an existing account" << endl;
        cout << "5. For Transactions " << endl;
        cout << "6. Remove Existing Account" << endl;
        cout << "7. Exit" << endl;
        ch = getchar();

        switch (ch)
        {
        case '1':
            Bank::PerData();
            break;

        case '2':
            Bank::Show();
            break;

        default:
            break;
        }
    }
}

void Bank::PerData()
{
    cout << "Enter the data of person" << total + 1 << endl;
    cout << "Enter the name:";
    cin >> person[total].name;
    cout << "ID :";
    cin >> person[total].id;
    cout << "Address : ";
    cin >> person[total].address;
    cout << "Contact: ";
    cin >> person[total].contact;
    cout << "Total Cash : ";
    cin >> person[total].cash;
    total++;
}

void Bank::Show()
{
    for (int i = 0; i < total; i++)
    {
        cout << "Data of person" << i + 1 << endl;
        cout << "1. Name : " << person[i].name << endl;
        cout << "2. ID : " << person[i].address << endl;
        cout << "3. Address: " << person[i].address << endl;
        cout << "4. Contact : " << person[i].contact << endl;
        cout << "5. Cash : " << person[i].cash << endl;
    }
}

void Bank::Update()
{
    cout << "Enter id of student those data you want to update " << endl;
    cin >> ID;

    for (int i = 0; i < total; i++)
    {
        if (ID == person[i].ID)
        {
            cout << "Previous Data " << endl;
            cout << "Data of person" << i + 1 << endl;
            cout << "1. Name : " << person[i].name;
            cout << "2. ID : " << person[i].address;
            cout << "3. Address: " << person[i].address;
            cout << "4. Contact : " << person[i].contact;
            cout << "5. Cash : " << person[i].cash;
            cout << "\nEnter the New Data" << endl;
            cout << "Enter the name:";
            cin >> person[total].name;
            cout << "ID :";
            cin >> person[total].id;
            cout << "Address : ";
            cin >> person[total].address;
            cout << "Contact: ";
            cin >> person[total].contact;
            cout << "Total Cash : ";
            cin >> person[total].cash;
        }
    }
}

void Bank::Search()
{
}

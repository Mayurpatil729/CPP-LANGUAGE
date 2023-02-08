// STUDENT MANAGEMENT SYSTEM WITH THE HELP OF FUNCTIONS .

// Date :

#include <bits/stdc++.h>
using namespace std;
int total = 0, value, i = 0;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];

void Enter()
{
    int choice;
    cout << "\nHow many students do you want to enter : ";
    cin >> choice;
    if (total == 0)
    {
        total = total + choice; //

        for (int i = 0; i < choice; i++)
        {
            cout << "\nENTER THE DATA OF STUDENT: " << i + 1 << endl;
            cout << "============================================" << endl;
            cout << "Enter the name :";
            cin >> arr1[i];
            cout << "Enter the rollno : ";
            cin >> arr2[i];
            cout << "Enter the course:";
            cin >> arr3[i];
            cout << "Enter the class :";
            cin >> arr4[i];
            cout << "Enter the contact : ";
            cin >> arr5[i];
        }
    }
    else
    {
        for (int i = total; i < total + choice; i++)
        {
            cout << "\nENTER THE DATA OF STUDENT: " << i + 1 << endl;
            cout << "============================================" << endl;
            cout << "Enter the name :";
            cin >> arr1[i];
            cout << "Enter the rollno : ";
            cin >> arr2[i];
            cout << "Enter the course:";
            cin >> arr3[i];
            cout << "Enter the class :";
            cin >> arr4[i];
            cout << "Enter the contact : ";
            cin >> arr5[i];
        }
        total = total + choice; //
    }
}

void Show()
{
    if (total == 0)
    {
        cout << "\nNO DATA IS ENTERED" << endl;
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << "\nDATA OF STUDENT NO. : " << i + 1 << endl;
            cout << "============================================" << endl;
            cout << "\nName: " << arr1[i];
            cout << "\nRoll no: " << arr2[i];
            cout << "\nCourse: " << arr3[i];
            cout << "\nClass: " << arr4[i];
            cout << "\nContact: " << arr5[i] << endl;
        }
    }
}

void Search()
{
    if (total == 0)
    {
        cout << "\nNO DATA IS ENTERED" << endl;
    }
    else
    {
        string rollno;
        cout << "Enter The Roll No. To Search : " << endl;
        cin >> rollno;

        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << "\nDATA OF STUDENT NO. : " << i + 1 << endl;
                cout << "============================================" << endl;
                cout << "\nName: " << arr1[i];
                cout << "\nRoll no: " << arr2[i];
                cout << "\nCourse: " << arr3[i];
                cout << "\nClass: " << arr4[i];
                cout << "\nContact: " << arr5[i] << endl;
            }
        }
    }
}

void Update()
{
    if (total == 0)
    {
        cout << "\nNO DATA IS ENTERED" << endl;
    }
    else
    {
        string rollno;
        cout << "Enter The Roll no. To Updat : " << endl;
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << "\nPrevious Data" << endl;
                cout << "\nDATA OF STUDENT NO. : " << i + 1 << endl;
                cout << "============================================" << endl;
                cout << "\nName: " << arr1[i];
                cout << "\nRoll no: " << arr2[i];
                cout << "\nCourse: " << arr3[i];
                cout << "\nClass: " << arr4[i];
                cout << "\nContact: " << arr5[i] << endl;

                cout << "\n==> UPDATE NEW DATA <====" << endl;
                cout << "\nENTER THE DATA OF STUDENT: " << i + 1 << endl;
                cout << "============================================" << endl;
                cout << "Enter the name :";
                cin >> arr1[i];
                cout << "Enter the rollno : ";
                cin >> arr2[i];
                cout << "Enter the course:";
                cin >> arr3[i];
                cout << "Enter the class :";
                cin >> arr4[i];
                cout << "Enter the contact : ";
                cin >> arr5[i];
            }
        }
    }
}

void Deleterecord()
{
    if (total == 0)
    {
        cout << "\nNO DATA IS ENTERED" << endl;
    }
    else
    {
        int x;
        cout << "1. Delete Full Record" << endl;
        cout << "2. Delete Specfic Record" << endl;
        cin >> x;
        if (x == 1)
        {
            total = 0;
            cout << "ALL DATA IS DELETED" << endl;
        }
        if (x == 2)
        {
            string rollno;
            cout << "\nEnter the roll no. which you want to delete" << endl;
            cin >> rollno;
            for (int i = 0; i < total; i++)
            {
                if (rollno == arr2[i])
                {
                    for (int j = i; j < total; j++)
                    {
                        arr1[j] = arr1[j + 1];
                        arr2[j] = arr2[j + 1];
                        arr3[j] = arr3[j + 1];
                        arr4[j] = arr4[j + 1];
                        arr5[j] = arr5[j + 1];
                    }
                    total--;
                    cout << "Your Required Record is Deleted  !! " << endl;
                }
            }
        }
    }
}

int main()
{
    while (true)
    {
        cout << "\n===> STUDENT MANAGEMENT SYSTEM <=== " << endl;
        cout << "1. Enter Data " << endl;
        cout << "2. Show Data " << endl;
        cout << "3. Search Data " << endl;
        cout << "4. Update Data " << endl;
        cout << "5. Delete Data " << endl;
        cout << "6. Exit " << endl;
        cout << endl;
        cout << "Enter Your choice : ";
        cin >> value;

        switch (value)
        {
        case 1:
            Enter();
            break;
        case 2:
            Show();
            break;
        case 3:
            Search();
            break;
        case 4:
            Update();
            break;
        case 5:
            Deleterecord();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Please Enter the valid input" << endl;
        }
    }
    return 0;

    // coded by Mayur
}

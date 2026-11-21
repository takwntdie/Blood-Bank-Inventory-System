#include <iostream>

using namespace std;

int main()
{
    int Apos = 0;
    int Bpos = 0;
    int ABpos = 0;
    int Opos = 0;
    int Aneg = 0;
    int Bneg = 0;
    int ABneg = 0;
    int Oneg = 0;

    string bloodType;
    int choice;
    int count = 0;

    do {
        cout << "\n======== BLOOD BANK INVENTORY SYSTEM ========" << endl;
        cout << "1. Add Blood" << endl;
        cout << "2. View Available Blood" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Blood Type: ";
            cin >> bloodType;

            if (bloodType == "A+" ||
                bloodType == "A-" ||
                bloodType == "B+" ||
                bloodType == "B-" ||
                bloodType == "AB+" ||
                bloodType == "AB-" ||
                bloodType == "O+" ||
                bloodType == "O-")
            {
                count++;

                if (bloodType == "A+")
                    Apos++;
                else if (bloodType == "A-")
                    Aneg++;
                else if (bloodType == "B+")
                    Bpos++;
                else if (bloodType == "B-")
                    Bneg++;
                else if (bloodType == "AB+")
                    ABpos++;
                else if (bloodType == "AB-")
                    ABneg++;
                else if (bloodType == "O+")
                    Opos++;
                else if (bloodType == "O-")
                    Oneg++;

                cout << "Successfully Added!" << endl;
            }
            else
            {
                cout << "Invalid Blood Type!" << endl;
            }
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "\nNo Available Blood!" << endl;
            }
            else
            {
                cout << "\n===== AVAILABLE BLOOD =====" << endl;

                cout << "A+ = " << Apos << endl;
                cout << "A- = " << Aneg << endl;
                cout << "B+ = " << Bpos << endl;
                cout << "B- = " << Bneg << endl;
                cout << "AB+ = " << ABpos << endl;
                cout << "AB- = " << ABneg << endl;
                cout << "O+ = " << Opos << endl;
                cout << "O- = " << Oneg << endl;
            }
        }

        else if (choice == 3)
        {
            cout << "Thank you for using the system!" << endl;
        }

        else
        {
            cout << "Invalid Choice" << endl;
        }

    } while (choice != 3);

    return 0;
}

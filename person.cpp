#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string password = "langoor";
    string pass;
    string book;
    bool isLocked = true;

    while (isLocked == true)
    {
        cout << "Enter the password: ";
        cin >> pass; // You MUST have this so the user can type!

        if (pass == password)
        {
            isLocked = false;
            cout << "Access Granted!" << endl;
        }
        else
        {
            cout << "Wrong! Try again." << endl;
        }
    }

    int choice;
    cout<<"Enter your choice:"<<endl;
    cout<<"1.Write."<<endl;
    cout<<"2.Read."<<endl;
    cout<<"Select: ";
    cin>>choice;

    if(choice == 1){
        cin.ignore();

        cout<<"Please write :";
        getline(cin,book);

        ofstream outFile;
        outFile.open("book.txt",ios::app);

         
        if (outFile.is_open()) {               // Check if the file actually opened
            outFile << book << endl;          // Write your text into the file
            outFile.close();                   // ALWAYS close the file!
            cout << "Secret saved to vault." << endl;
        }
    }

   else if (choice == 2) 
    {
        ifstream inFile;
        inFile.open("book.txt");

        if (inFile.is_open()) 
        {
            string line;
            cout << "\n--- YOUR PAST ENTRIES ---" << endl;
            cout<<endl;
            
            // This loop runs until there are no more lines in the file
            while (getline(inFile, line)) 
            {
                cout << ">> " << line << endl;
            }

            inFile.close();
            cout << "--- END OF DIARY ---" << endl;
            cout<<endl;
        } 
        else 
        {
            cout << "No diary found yet. Write something first!" << endl;
        }
    }

    return 0;
}
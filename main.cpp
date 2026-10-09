#include <iostream>
#include <string>
using namespace std;

/*
    write a program that asks the user for:
    the title of their favourite book 
    the author's name
    the year it was published
    then display the information 
*/

int main(){
    //welcome message 
    cout << "Welcome to the Favourite Book Information Program!" << endl;
    cout << "Answer the following questions to provide information about your favourite book." << endl;

    //declare variables
    string bookTitle,authorName;
    int pubYear;

    //ask user for input of title
    cout << "What is the title of your favourite book? ";
    getline(cin, bookTitle); //getline allows the user to input a string with spaces

    //ask user for input of author's name
    cout << "Who is the author of the book? ";
    getline(cin, authorName);

    //ask user for input of publication year
    cout << "What year was the book published? ";
    cin >> pubYear;

    //display the information 
    cout << "So, your favourite book is: " << bookTitle <<  "\n";
    cout << "Which was written by: " << authorName << "\n";
    cout << "And was published in the year: " << pubYear << endl;

    return 0;
}
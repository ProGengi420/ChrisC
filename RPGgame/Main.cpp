#include <iostream>
#include <string> 
#include <thread>
#include <chrono> 
using namespace std;
  
void delayScroll(int delayMS, int lineCount);
 
void delayScroll(int delayMS, int lineCount)
{
     for (int i = 0; i < lineCount; i++)
    {
        cout << "" << endl;
        this_thread::sleep_for(chrono::milliseconds(delayMS));
    }
}


int main()
{
    string intro =
 
		"       ^  ^      \n"
        "      (='.'=)    \n"
        "      (' O ')    \n"

 
        "  Lucky Cat RPG";
 
    cout << intro << endl;
 
    string catName;
 
    cout << "What is your cat's name?" << endl;
    cout << "> ";
    cin >> catName;
    cout << "Excellent! Let's get started with " << catName << "'s Adventure!" << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
    delayScroll(10, 30);
    cout << "...to be continued..." << endl;



}



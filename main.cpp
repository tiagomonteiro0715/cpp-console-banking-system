#include <iostream>

using namespace std;

//construir sistema bancário
string userName;
int choice;
int quitChoice;

void Greeting(){
    cout << "Hi what is your name?" << endl;
    cin >> userName; // Get user input from the keyboard
}

void menu(){
    cout << "Here is your menu " << userName << endl;
    cout << "1 - Quit bank menu" << endl;
    cout << "2 - Deposit miney" << endl;
    cout << "3 - withdraw money" << endl;
    cout << "4 - show info" << endl;
    cin >> choice;
}

void quitMenu(){
    cout << "Are you choice" << endl;
    cout << "1 - Yes" << endl;
    cout << "2 - No" << endl;
    cin >> quitChoice;

    if (quitChoice == 1) {
        std::exit();
    } else if (quitChoice == 2){
        menu();
    }

}


int main() {
  Greeting();
  menu();

  switch(choice) {
  case 1:
    quitMenu();
    break;

  //case 2:
    // code block
    //break;
  //case 3:
    // code block
    //break;
  //case 4:
    // code block
    //break;
  //default:
    // code block
}
  return 0;
}

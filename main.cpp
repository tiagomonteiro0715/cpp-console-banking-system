#include <iostream>

using namespace std;

string userName;
int choice;
int quitChoice;
int money = 0;

void menu(){
    cout << "Here is your menu " << userName << endl;
    cout << "1 - Quit bank menu" << endl;
    cout << "2 - Deposit money" << endl;
    cout << "3 - Withdraw money" << endl;
    cout << "4 - Show info" << endl;
    cin >> choice;
}


void quitMenu(){
    cout << "---------------------------------" <<endl;
    cout << "Do you want to quit?" << endl;
    cout << "1 - Yes" << endl;
    cout << "2 - No" << endl;
    cout << "---------------------------------" <<endl;
    cin >> quitChoice;
    if (quitChoice == 1) {
        exit (EXIT_FAILURE);
    } else if (quitChoice == 2){
        menu();
    }

}


void info(){
    cout << "Name: John" << endl;
    cout << "Age: 33" << endl;
    cout << "Social security number: 2093 4782 235" << endl;
    quitMenu();
}


void deposit(){
    int amount;
    cout << "How much do you want to deposit?" <<endl;
    cin >> amount;
    int money = money + amount;
    cout << "You now have " << money << " in your account" <<endl;
    quitMenu();

}

void withdraw(){
    int amount;
    cout << "How much do you want to withdraw?" <<endl;
    cin >> amount;
    int money = money - amount;
    cout << "You now have " << money << " in your account" <<endl;
    quitMenu();

}


int main() {
    cout << "--------------------------" << endl;
    cout << "You have " << money << " in your account" << endl;
    cout << "--------------------------" << endl;

while (true) {


  switch(choice) {
  case 1:
    quitMenu();
    break;
  case 2:
    deposit();
    break;
  case 3:
    withdraw();
    break;
  case 4:
    info();
    break;
  default:
    menu();
 }

}
  return 0;
}

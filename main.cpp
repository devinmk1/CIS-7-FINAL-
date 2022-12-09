//Devin Keomany & Paris Martinez
//Case 2: UCR Medical Volunteers | Doctors Without Borders
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

  int language(int);
  int specialization(int);

int main() {//2-d array used for different language and countries to link them together
  string countries[5][10] = {
{"Antigua and Barbuda", "The Bahamas", "Barbados", "Belize", "Tanzania", "Pakistan", "Malta", "Trindad and Tobago", "Dominica", "Philippines"},
{"Aregentina", "Puerto Rico", "Venezuela", "Colombia", "Equatorial Guinea", "Cuba", "Panama", "Bolivia", "El Salvador", "Dominican Republic"},  
{"Sengal","Belgium","Haiti","Madagascar","Monaco", "Democratic Republic of Congo", "Rwandal", "Togo", "Djibouti", "Burundi"},
{"Angola", "São Tomé and Príncipe", "Brazil", "Guinea Bassau", "Cape Verde", "Mozambique", "Macau", "East Timor", "Portugal", "Equatorial Guinea"},
{"Palestine","Iraq", "Kuwait","Djibouti", "Syria", "Yemen", "Sudan","Somolia", "Oman","Somaliland"},
};

  int choice;
  cout << "What is your preferred language?" << endl;
  cout << "-------------------------------";
  cout << endl;

  cout << "1. English" << endl;
  cout << "2. Spanish" << endl;
  cout << "3. French" << endl; 
  cout << "4. Portuguese" << endl;
  cout << "5. Arabic" << endl;

  choice = language(choice);

  int secChoice;
  cout << endl;
  cout << "What is your specialization?" << endl;
  cout << "-------------------------------" << endl;
  cout << "1. Pediatrician " << endl;
  cout << "2. Family Medicine"<< endl;
  cout << "3. General Surgeon"<< endl;
  cout << "4. Internal Medicine"<< endl;
  cout << "5. Gynecology"<< endl;
  
  secChoice = specialization(secChoice);
  cout << endl;

  
  //This randmonizes the countries so that it will be
  // a different outcome each time
  srand(time(0));
  int r = (rand() % 10);
  cout<< "Congratulations you're going to: " <<endl;

  cout<< countries[choice-1][r] << "!" << endl << endl;
  //prints out probabilty of sample space
  cout << "The probability of sample space is the languages and the number of specializations multiplied = 10 * 5 = 50."<< endl<< endl;

  //probability of being chosen for language and specialtality 
  cout<< "The probability of chosing one combination is 1/50 or 2%." << endl;
}


int language(int n)
{
  cout << endl;
  cout << "Enter your choice below: "<< endl;
  cin >> n;
  
  switch(n-1)
  {
    case 0:
    cout << "English Confirmed." << endl;
    break;

    case 1:
    cout << "Spanish Confirmed." << endl;
    break;

    case 2:
    cout << "French Confirmed." << endl;
    break;

    case 3:
    cout << "Portugese Confirmed." << endl;
    break;

    case 4:
    cout << "Arabic Confirmed." << endl;
    break;
  }
  return n;
}

int specialization(int m)
  {
    cout << endl;
    cout << "Enter your choice below: "<< endl;
    cin >> m;

    switch (m-1)
      {
        case 0:
        cout << "Pediatrician Selected." << endl;
        break;

        case 1:
        cout << "Family Medicine Selected." << endl;
        break;

        case 2:
        cout << "General Surgeon Selected." << endl;
        break;

        case 3:
        cout << "Internal Medicine Selected." << endl;
        break;

        case 4:
        cout << "Gynecology Selected." << endl;
        break;
      }
    return m;
  }
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{

string Name, LName, InstaName, Year, Month, Date;


cout << "Name: ";
getline(cin, Name);

cout << "LName: ";
getline(cin, LName);

cout << "InstaName: ";
getline(cin, InstaName);

cout << "Date: ";
getline(cin, Date);

cout << "Month: ";
getline(cin, Month);

cout << "Year: ";
getline(cin, Year);



ofstream myout;
myout.open("data.txt");
myout << Name << endl;
myout << LName << endl;
myout << InstaName << endl;
myout << Date << endl;
myout << Month << endl;
myout << Year << endl;
myout << Name + Name << endl;
myout << LName + Name << endl;
myout << Name + LName << endl;
myout << Name + InstaName << endl;
myout << InstaName + Name << endl;
myout << Name + Date << endl;
myout << Date + Name << endl;
myout << Name + Month << endl;
myout << Month + Name << endl;
myout << Name + Year << endl;
myout << Year + Name << endl;
myout << LName + Name << endl;
myout << Name + LName << endl;
myout << LName + LName << endl;
myout << LName + InstaName << endl;
myout << InstaName + LName << endl;
myout << LName + Date << endl;
myout << Date + LName << endl;
myout << LName + Month << endl;
myout << Month + LName << endl;
myout << LName + Year << endl;
myout << Year + LName << endl;
myout << InstaName + Name << endl;
myout << Name + InstaName << endl;
myout << InstaName + LName << endl;
myout << LName + InstaName << endl;
myout << InstaName + InstaName << endl;
myout << InstaName + Date << endl;
myout << Date + InstaName << endl;
myout << InstaName + Month << endl;
myout << Month + InstaName << endl;
myout << InstaName + Year << endl;
myout << Year + InstaName << endl;
myout << Date + Name << endl;
myout << Name + Date << endl;
myout << Date + LName << endl;
myout << LName + Date << endl;
myout << Date + InstaName << endl;
myout << InstaName + Date << endl;
myout << Date + Date << endl;
myout << Date + Month << endl;
myout << Month + Date << endl;
myout << Date + Year << endl;
myout << Year + Date << endl;
myout << Month + Name << endl;
myout << Name + Month << endl;
myout << Month + LName << endl;
myout << LName + Month << endl;
myout << Month + InstaName << endl;
myout << InstaName + Month << endl;
myout << Month + Date << endl;
myout << Date + Month << endl;
myout << Month + Month << endl;
myout << Month + Year << endl;
myout << Year + Month << endl;
myout << Year + Name << endl;
myout << Name + Year << endl;
myout << Year + LName << endl;
myout << LName + Year << endl;
myout << Year + InstaName << endl;
myout << InstaName + Year << endl;
myout << Year + Date << endl;
myout << Date + Year << endl;
myout << Year + Month << endl;
myout << Month + Year << endl;
myout << Year + Year << endl;
myout << Name + LName + InstaName << endl;
myout << LName + Name + InstaName << endl;
myout << LName + InstaName + Name << endl;
myout << Name + InstaName + LName << endl;
myout << InstaName + Name + LName << endl;
myout << InstaName + LName + Name << endl;
myout << Name + LName + Date << endl;
myout << LName + Name + Date << endl;
myout << LName + Date + Name << endl;
myout << Name + Date + LName << endl;
myout << Date + Name + LName << endl;
myout << Date + LName + Name << endl;
myout << Name + LName + Month << endl;
myout << LName + Name + Month << endl;
myout << Name + Month + LName << endl;
myout << LName + Month + Name << endl;
myout << Month + LName + Name << endl;
myout << Month + Name + LName << endl;
myout << Name + LName + Year << endl;
myout << LName + Name + Year << endl;
myout << LName + Year + Name << endl;
myout << Name + Year + LName << endl;
myout << Year + Name + LName << endl;
myout << Year + LName + Name << endl;
myout << Name + InstaName + Date << endl;
myout << InstaName + Name + Date << endl;
myout << InstaName + Date + Name << endl;
myout << Name + Date + InstaName << endl;
myout << Date + Name + InstaName << endl;
myout << Date + InstaName + Name << endl;
myout << Name + InstaName + Month << endl;
myout << InstaName + Name + Month << endl;
myout << InstaName + Month + Name << endl;
myout << Name + Month + InstaName << endl;
myout << Month + Name + InstaName << endl;
myout << Month + InstaName + Name << endl;
myout << Name + InstaName + Year << endl;
myout << InstaName + Name + Year << endl;
myout << InstaName + Year + Name << endl;
myout << Name + Year + InstaName << endl;
myout << Year + Name + InstaName << endl;
myout << Year + InstaName + Name << endl;
myout << LName + InstaName + Date << endl;
myout << InstaName + LName + Date << endl;
myout << InstaName + Date + LName << endl;
myout << LName + Date + InstaName << endl;
myout << Date + LName + InstaName << endl;
myout << Date + InstaName + LName << endl;
myout << LName + InstaName + Month << endl;
myout << InstaName + LName + Month << endl;
myout << InstaName + Month + LName << endl;
myout << LName + Month + InstaName << endl;
myout << Month + LName + InstaName << endl;
myout << Month + InstaName + LName << endl;
myout << LName + InstaName + Year << endl;
myout << InstaName + LName + Year << endl;
myout << InstaName + Year + LName << endl;
myout << LName + Year + InstaName << endl;
myout << Year + LName + InstaName << endl;
myout << Year + InstaName + LName << endl;
myout << InstaName + Date + Month << endl;
myout << Date + InstaName + Month << endl;
myout << Date + Month + InstaName << endl;
myout << InstaName + Month + Date << endl;
myout << Month + InstaName + Date << endl;
myout << Month + Date + InstaName << endl;
myout << InstaName + Date + Year << endl;
myout << Date + InstaName + Year << endl;
myout << Date + Year + InstaName << endl;
myout << InstaName + Year + Date << endl;
myout << Year + InstaName + Date << endl;
myout << Year + Date + InstaName << endl;
myout << InstaName + Month + Year << endl;
myout << Month + InstaName + Year << endl;
myout << Month + Year + InstaName << endl;
myout << InstaName + Year + Month << endl;
myout << Year + InstaName + Month << endl;
myout << Year + Month + InstaName << endl;

















myout.close();
getch();



    return 0;
}

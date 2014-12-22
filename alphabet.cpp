/*
Sean Staz
CSC 2134
Alphabet
Program Alphabet asks the user to input up to ten characters. The program
then converts the first ten characters of the input to their corresponding 
International Civil Aviation Organization alphabet words.
*/

#include <iostream>

using namespace std;


void function (char userinput) // Declares void function
{
 char a;			// Defines char
 a = userinput;		// Accociates string with the user input

    if (a == 'A' || a == 'a')       	// If/Else for using ICAO alphabet
  {
    cout << "Alpha " << endl;
  }
    else
   if (a == 'B' || a == 'b')
  {
    cout << "Bravo " << endl;
  }
	else
   if (a == 'C' || a == 'c')
  {
    cout << "Charlie " << endl;
  }
  else
   if (a == 'D' || a == 'd')
  {
    cout << "Delta " << endl;
  }
  else
   if (a == 'E' || a == 'e')
  {
    cout << "Echo " << endl;
  }
  else
   if (a == 'F' || a == 'f')
  {
    cout << "Foxtrot " << endl;
  }
  else
   if (a == 'G' || a == 'g')
  {
    cout << "Golf " << endl;
  }
  else
   if (a == 'H' || a == 'h')
  {
    cout << "Hotel " << endl;
  }
  else
   if (a == 'I' || a == 'i')
  {
    cout << "India " << endl;
  }
  else
   if (a == 'J' || a == 'j')
  {
    cout << "Juliet " << endl;
  }
  else
   if (a == 'K' || a == 'k')
  {
    cout << "Kilo " << endl;
  }
  else
   if (a == 'L' || a == 'l')
  {
    cout << "Lima " << endl;
  }
  else
   if (a == 'M' || a == 'm')
  {
    cout << "Mike " << endl;
  }
  else
   if (a == 'N' || a == 'n')
  {
    cout << "November " << endl;
  }
  else
   if (a == 'O' || a == 'o')
  {
    cout << "Oscar " << endl;
  }
  else
   if (a == 'P' || a == 'p')
  {
    cout << "Papa " << endl;
  }
  else
   if (a == 'Q' || a == 'q')
  {
    cout << "Quebec " << endl;
  }
  else
   if (a == 'R' || a == 'r')
  {
    cout << "Romeo " << endl;
  }
  else
   if (a == 'S' || a == 's')
  {
    cout << "Sierra " << endl;
  }
  else
   if (a == 'T' || a == 't')
  {
    cout << "Tango " << endl;
  }
  else
   if (a == 'U' || a == 'u')
  {
    cout << "Uniform " << endl;
  }
  else
   if (a == 'V' || a == 'v')
  {
    cout << "Victor " << endl;
  }
  else
   if (a == 'W' || a == 'w')
  {
    cout << "Whiskey " << endl;
  }
  else
   if (a == 'X' || a == 'x')
  {
    cout << "X-ray " << endl;
  }
  else
   if (a == 'Y' || a == 'y')
  {
    cout << "Yankee " << endl;
  }
  else
   if (a == 'Z' || a == 'z')
  {
    cout << "Zulu " << endl;
  }
  else
   if (a == ' ')
  {
  	cout << " " << endl;
  } 
  else
  	cout << endl;
}
  	
int main ()
{
	char a; 	   // Defines userinput
	int count = 1; // Defines a count for the loop
		
		cout << "Enter ten letters to be translated through the	International" << endl; // An instruction statement
		cout << "Civil Aviation Organization alphabet words." << endl;
		while (count <= 10)
		{
			cin.get(a);		// Gets the input
			function (a);	// Puts input into the fuction
			count++;		// Adds 1 to the count
		}


  return 0;

}

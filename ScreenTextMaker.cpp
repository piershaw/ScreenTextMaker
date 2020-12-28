// ScreenTextMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <ostream>
#include <istream>


using namespace std;

enum LettersEnum
{
      A_ = 42,
      B_ = 43,
      C_ = 44,
      D_ = 45,
      E_ = 46,
      F_ = 47,
      G_ = 48,
      H_ = 49,
      I_ = 50,
      J_ = 51,
      K_ = 52,
      L_ = 53,
      M_ = 54,
      N_ = 55,
      O_ = 56,
      P_ = 57,
      Q_ = 58,
      R_ = 59,
      S_ = 60,
      T_ = 61,
      U_ = 62,
      V_ = 82,
      W_ = 83,
      X_ = 84,
      Y_ = 85,
      Z_ = 86,
      ZERO = 87,
      ONE = 88,
      TWO = 89,
      THERE = 90,
      FOUR = 91,
      FIVE = 92,
      SIX = 93,
      SEVEN = 94,
      EIGHT = 95,
      NINE = 96,
      PERIOD = 97,
      COMMA = 98,
      QUESTION_MARK = 99,
      PUNK = 100,
      MINUS = 101,
      PLUS = 102
};

LettersEnum letter;
char output;
vector<char> outputs;
std::string message;

 void convertToHex(int letters) {
    //std::stringstream sstream;
    //sstream << std::hex << letters;
   // std::string result = sstream.str();
    //  letters
     char out = letters;
     //printf("%x", out);
     outputs.push_back(out);

}


 void writeFile() {

     int size = outputs.size();
     std::ofstream outfile;
     outfile.open("storystart.bin", std::ios::binary | std::ios::out);
     for (int v = 0; v < size; v++)
     {
         char w = (char)outputs.at(v);
         printf("%x", w);
         outfile.write(&w, sizeof(char));
     }


     //outfile.write(&output, sizeof(char)); // sizeof can take a type
     outfile.close();

 }

int main()
{
  
             //(____________________) // window is 21 wide 12 height
    message += "                    ";//0
    message += " push space or fire ";//1
    message += "    to start game   ";//2
    message += "                    ";//3
    message += "                    ";//4
    message += "                    ";//5
    message += "                    ";//6
    message += "                    ";//7
    message += "                    ";//8
    message += "                    ";//9
    message += "                    ";//10
    message += "                    ";//11

    int n = 0;
    char buffer[254];

    for (int i = 0; i < message.size(); i++) {
         buffer[i] = message.at(i);


        switch (buffer[i]) {

        case 'a':
            n = (int)A_;
            convertToHex(n);
            break;

        case 'b':
            n = (int)B_;
            convertToHex(n);
            break;

        case 'c':
            n = (int)C_;
            convertToHex(n);
            break;

        case 'd':
            n = (int)D_;
            convertToHex(n);
            break;

        case 'e':
            n = (int)E_;
            convertToHex(n);
            break;

        case 'f':
            n = (int)F_;
            convertToHex(n);
            break;

        case 'g':
            n = (int)G_;
            convertToHex(n);
            break;

        case 'h':
            n = (int)H_;
            convertToHex(n);
            break;

        case 'i':
            n = (int)I_;
            convertToHex(n);
            break;

        case 'j':
            n = (int)J_;
            convertToHex(n);
            break;

        case 'k':
            n = (int)K_;
            convertToHex(n);
            break;

        case 'l':
            n = (int)L_;
            convertToHex(n);
            break;

        case 'm':
            n = (int)M_;
            convertToHex(n);
            break;

        case 'n':
            n = (int)N_;
            convertToHex(n);
            break;

        case 'o':
            n = (int)O_;
            convertToHex(n);
            break;

        case 'p':
            n = (int)P_;
            convertToHex(n);
            break;

        case 'q':
            n = (int)Q_;
            convertToHex(n);
            break;

        case 'r':
            n = (int)R_;
            convertToHex(n);
            break;

        case 's':
            n = (int)S_;
            convertToHex(n);
            break;

        case 't':
            n = (int)T_;
            convertToHex(n);
            break;

        case 'u':
            n = (int)U_;
            convertToHex(n);
            break;

        case 'v':
            n = (int)V_;
            convertToHex(n);
            break;

        case 'w':
            n = (int)W_;
            convertToHex(n);
            break;

        case 'x':
            n = (int)X_;
            convertToHex(n);
            break;

        case 'y':
            n = (int)Y_;
            convertToHex(n);
            break;

        case 'z':
            n = (int)Z_;
            convertToHex(n);
            break;

        case '0':
            n = (int)ZERO;
            convertToHex(n);
            break;

        case '1':
            n = (int)ONE;
            convertToHex(n);
            break;

        case '2':
            n = (int)TWO;
            convertToHex(n);
            break;

        case '3':
            n = (int)THERE;
            convertToHex(n);
            break;

        case '4':
            n = (int)FOUR;
            convertToHex(n);
            break;

        case '5':
            n = (int)FIVE;
            convertToHex(n);
            break;

        case '6':
            n = (int)SIX;
            convertToHex(n);
            break;

        case '7':
            n = (int)SEVEN;
            convertToHex(n);
            break;

        case '8':
            n = (int)EIGHT;
            convertToHex(n);
            break;

        case '9':
            n = (int)NINE;
            convertToHex(n);
            break;

        case '.':
            n = (int)PERIOD;
            convertToHex(n);
            break;

        case ',':
            n = (int)COMMA;
            convertToHex(n);
            break;

        case '?':
            n = (int)QUESTION_MARK;
            convertToHex(n);
            break;

        case '!':
            n = (int)PUNK;
            convertToHex(n);
            break;

        case '-':
            n = (int)MINUS;
            convertToHex(n);
            break;

        case '+':
            n = (int)PLUS;
            convertToHex(n);
            break;

        case ' ':
            n = 0;
            convertToHex(n);
            break;
        }

    }

    writeFile();
 
}

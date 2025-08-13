#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;
double fn(string &s)
{
  int size = s.size();
  int spaceCounter = 0;

  // to eliminate whitespaces basically to point from where the string starts "   +1223.43"
  while (spaceCounter < size && s[spaceCounter] == ' ')                           
  {
    spaceCounter++;
  }

  double ans = 0;
  int decimalIndex = -1;
  bool posflag = true; // flag for positive sign 
  bool invalid; // flag to check if there is some invalid character before decimal
  decimalIndex = s.find('.'); 

  if (decimalIndex != -1) 
  {
    int validcharCount = 0; //counter helping the number to parse
    for (int i = decimalIndex - 1; i >= spaceCounter; i--)
    {
      char ch = s[i];
      if ((ch == '+' || ch == '-') && i == spaceCounter) //+123
      {
        if (ch == '-')
          posflag = false;
      }

      else if (ch < '0' || ch > '9' && (ch != '+' || ch != '-')) // 12df.34
      {
        validcharCount = 0;
        ans = 0;
        invalid = true;
        continue;
      }
      else
      {
        int val = s[i] - '0';
        ans += val * pow(10, validcharCount);
        validcharCount++;
      }
    }

    // after decimal part
    if (!invalid) // checks if there is any invalid character before the decimal
    {
      int exp = -1;
      int i = decimalIndex + 1;
      while (i < s.size() && isdigit(s[i]))
      {
        int val = s[i] - '0';
        ans += val * pow(10, exp--);
        i++;
      }

      // handles scientific notation
      if (i < s.size() && (s[i] == 'e' || s[i] == 'E'))
      {
        i++;
        bool expPos = true;
        if (i < s.size() && (s[i] == '+' || s[i] == '-'))
        {
          if (s[i] == '-')
            expPos = false;
          i++;
        }

        int exponent = 0;
        while (i < s.size() && isdigit(s[i]))
        {
          exponent = exponent * 10 + (s[i] - '0');
          i++;
        }

        if (expPos)
          ans *= pow(10, exponent); 
        else
          ans /= pow(10, exponent); // for -ve exponents we divide basicall 10^-n;
      }
    }
  }

  // For without decimal number (similar to the before decimal part)
  else
  {
    int validcharCount = 0;

    for (int i = s.size(); i >= spaceCounter; i--)
    {
      char ch = s[i];

      if ((ch == '+' || ch == '-') && i == spaceCounter) //+123
      {
        if (ch == '-')
          posflag = false;
        return posflag ? ans : -1 * ans;
      }

      else if (ch < '0' || ch > '9') // 12df.34
      {
        validcharCount = 0;
        ans = 0;
        continue;
      }
      else
      {
        int val = s[i] - '0';
        ans += val * pow(10, validcharCount);
        validcharCount++;
      }
    }
  }
  return posflag ? ans : -1 * ans;
}




int main()
{
  string st;
  cout << "Enter a string : ";
  getline(cin, st);
  double result = fn(st);
  cout << "Double value : " << fixed <<setprecision(15) << result << endl;
  return 0;
}
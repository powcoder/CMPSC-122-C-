https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>
#include <iostream> // std::ostream
#include <sstream>  // std::stringstream
#include <string>   // std::string
#include <assert.h> // void assert(scalar expression);

using namespace std;


// Convert a numeric character to an integer
int CharToInt(char ch)
{
    assert('0' <= ch && ch <= '9');
    int i = ch - '0';
    return i;
}

// convert one digit integer to a numeric character
char IntToChar(int i)
{
    assert(0 <= i && i <= 9);
    char ch = i + '0';
    return ch;
}


string AddLargeNum(string num1, string num2)
{
    ////////////////////////////////////////////////////
    // Implement the algorithm that adds two strings num1 and num2 representing large numbers
    // and return another string that represents the sum of the two large numbers
    // You must use char Stack implemented using Doubly-Linked List for char; otherwise, you will lose huge amount of points.
    // 

    // 
    ////////////////////////////////////////////////////
}

int main()
{
    int n;
    // read the number of the large integers to read from cin
    cin >> n;

    // quit program if there is no large integers to read
    if (n <= 0)
        return 0;

    /////////////////////////////////////////////////////////////
    // replace the following lines of code with your own code
    // 
    for(int i=0; i<n; i++)
    {
        string num;
        
        // read the i-th large integer from cin as a string
        cin >> num;

        cout << "length of " << i << "-th number: " << num.length() << endl;
        for (unsigned int j = 0; j < num.length(); j++)
        {
            char ch = num[j];           // get j-th char from the string
            int  x  = CharToInt(ch);    // convert the char to int value
            cout << "num[" << j << "] : " << x << endl;
        }
    }
    // 
    // replace the above lines of code to your own code
    /////////////////////////////////////////////////////////////
}

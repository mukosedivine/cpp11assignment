#include<iostream>
#include<cmath>
using namespace std;

#include <iostream>
#include <string>
using namespace std;



//Return true if the card number is valid
bool isValid(long long number);

//Get the result from Step 2
int sumOfDoubleEvenPlace(long long number);

//Return this number if it is a single digit, otherwise, return the sum of the two digits
int getDigit(int number);

//Return sum of odd place digits in number
int sumOfOddPlace(long long number);

//Return true if the digit d is a prefix for number
bool prefixMatched(long long number, int d);

//Return the number of digits in d
int getSize(long long d);

//Return the first k number of digits from number. If the number of digits in number is less than k, return number.
long long getPrefix(long long number, int k);

int main(){
   long long number;
   cout<<"Enter a credit card number: ";
   cin>>number;

   if (isValid(number))
    cout<< number <<"is valid "<< endl;
else 
cout << number << "is invalid " << endl;

return 0;
}
 bool isValid(long long number){
   int size = getSize(number);
   //check length and prefix 
   return (size >= 13 && size <= 16)&&
   (prefixMatched(number, 4) ||prefixMatched(number, 5) ||
   prefixMatched(number, 37) ||prefixMatched(number, 6)) &&
   ((sumOfDoubleEvenPlace (number) + sumOfOddPlace(number))% 10 == 0);
 }

 int sumOfDoubleEvenPlace(long long number){
 int sum = 0;
 string numStr = to_string(number);
 int len = numStr.length();

for (int i = len -2; i>=0; i-=2){
   int digit = numStr[i] - '0';
   sum += getDigit(digit * 2);
}

return sum;
 }
 int getDigit(int number){
   if (number < 10) return number;
   return number /10 + number % 10;

 }

 int sumOfOddPlace(long long number) {
    int sum = 0;
    string numStr = to_string(number);
   int len = numStr.length();

for (int i = len -1; i >= 0; i-= 2) {
   sum += numStr[i] - '0';

}
 return sum;
}
bool prefixMatched (long long number , int d){
   int prefix = getPrefix(number , getSize(d));
   return prefix == d;   
}

int getSize (long long d){
   return to_string(d).length();

}
long long getPrefix(long long number , int k){
   string numStr = to_string(number);
   if (numStr.length() < k ) return number ;
   return stoll(numStr.substr(0 , k));
}


 // EXPLANATION

/*Your program begins by including the necessary libraries, namely `<iostream>`, `<cmath>`, and `<string>`. These allow you to handle input and output, perform mathematical operations, and work with strings. 
After that, you declare a set of **function prototypes**. These prototypes act as promises to the compiler, telling it that functions such as `isValid`, `sumOfDoubleEvenPlace`, `getDigit`, and others will be defined later in the file. 
This ensures that when these functions are called inside `main()` or other functions, the compiler already knows their signatures.

In the `main()` function, the program prompts the user to enter a credit card number. The input is stored in a variable of type `long long` to accommodate large numbers. The program then calls the function `isValid(number)` to determine whether the entered card number meets the criteria for validity. 
Depending on the result, it prints either “valid” or “invalid.”

The function `isValid` is the heart of the program. 
It first checks the length of the card number using `getSize`, ensuring it falls between 13 and 16 digits. Next, it verifies whether the card number starts with a valid prefix using `prefixMatched`. 
Accepted prefixes include 4 (Visa), 5 (MasterCard), 37 (American Express), and 6 (Discover). Finally, it applies the **Luhn algorithm** by summing the results of `sumOfDoubleEvenPlace` and `sumOfOddPlace`. If the total modulo 10 equals zero, the card number passes the checksum test and is considered valid.

Supporting functions handle specific parts of this validation. `sumOfDoubleEvenPlace` doubles every second digit from the right and reduces two-digit results to a single digit using `getDigit`. `sumOfOddPlace` simply adds the digits in odd positions. The `getDigit` function ensures that doubled values like 14 are reduced to 1 + 4 = 5.
 The `prefixMatched` function compares the starting digits of the card number with known prefixes, while `getSize` returns the number of digits in the card number. Finally, `getPrefix` extracts the first `k` digits of the card number to support prefix checking.*/

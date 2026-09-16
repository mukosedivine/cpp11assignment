// EXPLANATION

/*The program begins by including the necessary libraries, namely `<iostream>`, `<cmath>`, and `<string>`. These allow you to handle input and output, perform mathematical operations, and work with strings. 
After that, I declare a set of function prototypes**. These prototypes act as promises to the compiler, telling it that functions such as `isValid`, `sumOfDoubleEvenPlace`, `getDigit`, and others will be defined later in the file. 
This ensures that when these functions are called inside `main()` or other functions, the compiler already knows their signatures.

In the `main()` function, the program prompts the user to enter a credit card number. The input is stored in a variable of type `long long` to accommodate large numbers. The program then calls the function `isValid(number)` to determine whether the entered card number meets the criteria for validity. 
Depending on the result, it prints either “valid” or “invalid.”

The function `isValid` is the heart of the program. 
It first checks the length of the card number using `getSize`, ensuring it falls between 13 and 16 digits. Next, it verifies whether the card number starts with a valid prefix using `prefixMatched`. 
Accepted prefixes include 4 (Visa), 5 (MasterCard), 37 (American Express), and 6 (Discover). Finally, it applies the Luhn algorithm by summing the results of `sumOfDoubleEvenPlace` and `sumOfOddPlace`. If the total modulo 10 equals zero, the card number passes the checksum test and is considered valid.

Supporting functions handle specific parts of this validation. `sumOfDoubleEvenPlace` doubles every second digit from the right and reduces two-digit results to a single digit using `getDigit`. `sumOfOddPlace` simply adds the digits in odd positions. The `getDigit` function ensures that doubled values like 14 are reduced to 1 + 4 = 5.
 The `prefixMatched` function compares the starting digits of the card number with known prefixes, while `getSize` returns the number of digits in the card number. Finally, `getPrefix` extracts the first `k` digits of the card number to support prefix checking.*/

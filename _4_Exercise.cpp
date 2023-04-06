// Exercise 1

/*
Write a program to accept any character from keyboard and display whether it is vowel or not.
*/
#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << c << " is a vowel." << endl;
    } else {
        cout << c << " is not a vowel." << endl;
    }
    return 0;
}

// Exerces 2
/*
Write a program that gives grade based on the following scale using if else statement:
*/
#include <iostream>
using namespace std;

int main() {
   int score;
   cout << "Enter your score: ";
   cin >> score;

   if (score > 95) {
      cout << "Your grade is A+\n";
   }
   else if (score >= 85 && score <= 94) {
      cout << "Your grade is A\n";
   }
   else if (score >= 80 && score <= 84) {
      cout << "Your grade is A-\n";
   }
   else if (score >= 75 && score <= 79) {
      cout << "Your grade is B+\n";
   }
   else if (score >= 70 && score <= 74) {
      cout << "Your grade is B\n";
   }
   else if (score >= 65 && score <= 69) {
      cout << "Your grade is B-\n";
   }
   else if (score >= 60 && score <= 64) {
      cout << "Your grade is C+\n";
   }
   else if (score >= 50 && score <= 59) {
      cout << "Your grade is C\n";
   }
   else {
      cout << "Your grade is F\n";
   }
   return 0;
}


//  Exercise 3
/*
Write a program that display greatest of three numbers using if statement accept input from user.
*/
#include <iostream>
using namespace std;

int main() {
   int num1, num2, num3;

   cout << "Enter three integers: ";
   cin >> num1 >> num2 >> num3;

   if (num1 > num2) {
      if (num1 > num3) {
         cout << num1 << " is the greatest number.";
      }
      else {
         cout << num3 << " is the greatest number.";
      }
   }
   else {
      if (num2 > num3) {
         cout << num2 << " is the greatest number.";
      }
      else {
         cout << num3 << " is the greatest number.";
      }
   }
   return 0;
}

// Exercise 4
/*
Write a program that calculates sum of numbers from 1 to 100.
*/
#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    std::cout << "The sum of numbers from 1 to 100 is: " << sum << std::endl;
    return 0;
}

// Exercise 5
/*
Write a program that displays numbers between 0 -100 that are divisible by 2, 3, and   5. The numbers displayed should be those that can be divided by 2, 3, and 5 without remainder.
*/
#include <iostream>

using namespace std;

int main() {
   for (int i = 0; i <= 100; i++) {
      if ((i % 2 == 0) && (i % 3 == 0) && (i % 5 == 0)) {
         cout << i << " ";
      }
   }
   return 0;
}

// Exercise 6
/*
Write a program that calculates factorial using for loop, while loop and do while loops. The program should accept the number and then perform the calculation of the factorial.
*/

#include <iostream>

using namespace std;

int main() {
    int num, fact = 1, i = 1;

    // accept the number from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // using for loop
    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    cout << "Factorial using for loop: " << fact << endl;

    // using while loop
    i = 1;
    fact = 1;

    while (i <= num) {
        fact *= i;
        i++;
    }

    cout << "Factorial using while loop: " << fact << endl;

    // using do-while loop
    i = 1;
    fact = 1;

    do {
        fact *= i;
        i++;
    } while (i <= num);

    cout << "Factorial using do-while loop: " << fact << endl;

    return 0;
}

// Exercise 7
/*
Write a while loop that prints the average of numbers from 1 to 10
*/
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;
    int num = 1;
    while (num <= 10) {
        sum += num;
        count++;
        num++;
    }
    double average = sum / static_cast<double>(count);
    cout << "The average is: " << average << endl;
    return 0;
}


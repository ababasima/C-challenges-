Exercise 1
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

Exerces 2
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


Exercise 3
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

Exercise 4
#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    std::cout << "The sum of numbers from 1 to 100 is: " << sum << std::endl;
    return 0;
}

Exercise 3
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

Exercise 5

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

Exercise 6
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



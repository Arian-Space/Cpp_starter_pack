//Magic 8-ball ----------------------------------------------------------------------------------------------------

#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {

  //Variable
  int number_a;
  srand(time(NULL));
  number_a = rand() % 10 + 1;

  //Conditional
  switch (number_a) {
    case 1:
      std::cout << "It is certain.\n";
      break;
    case 2:
      std::cout << "It is decidedly so.\n";
      break;
    case 3:
      std::cout << "Without a doubt.\n";
      break;
    case 4:
      std::cout << "Cannot predict now.\n";
      break;
    case 5:
      std::cout << "Don't count on it.\n";
      break;
    case 6:
      std::cout << "Ask again later..\n";
      break;
    case 7:
      std::cout << "Reply hazy, try again.";
      break;
    case 8:
      std::cout << "My reply is no.\n";
      break;
    case 9:
      std::cout << "Concentrate and ask again.\n";
      break;
    case 10:
      std::cout << "Very doubtful.\n";
      break;
  } 
}

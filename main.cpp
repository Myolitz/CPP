#include <iostream>
#include <ostream>
#include <string>

void menuPrint() 
{
  std::string menu[] = 
  {
    "1. Addition",
    "2. Subtraction",
    "3. Multiplication",
    "4. Division",
    "5. Modulo",
    "6. Quit"
  };
    
  for (std::string s : menu)
  {
    std::cout << s << std::endl;
  };

};

int calcChoice() 
{

  std::cout << "Do you want an array calculator or normal?";
  std::cout << "1. {1, 2, 3, 4} + {4, 3, 2, 1} = {5, 5, 5, 5}";
  std::cout << "2. 1 + 2 = 3";
  
  int x;
  std::cin >> x;
  return x;
};

int getArrLen() 
{
  std::cout << "How many numbers will there be per array?";
  int arrLen;
  std::cin >> arrLen;

  return arrLen;
}

void calcAddition(int arrLen) 
{
  int arrOne[arrLen];
  int arrTwo[arrLen];

  std::cout << "Enter the first array of numbers (Length is " << arrLen << ")";

  for (int i = 0; i < arrLen; i++)
  {
    std::cin >> arrOne[i];
  }

  std::cout << "Enter the second array of numbers (Length is " << arrLen << ")";

  for (int j = 0; j < arrLen; j++)
  {
    std::cin >> arrTwo[j];
  }

  for (int k = 0; k < arrLen; k++)
  {
       std::cout << (arrOne[k] + arrTwo[k]);
  }

}
  

void calcStart()
{
  int arrLen = 0;
  bool userQuit = false;
  while (!userQuit)
  {
    int calcType = calcChoice();
    if (calcType == 1)
    {
      arrLen = getArrLen();

    };


    menuPrint();
    int userChoice;
    std::cin >> userChoice;

    if (calcType == 1) 
    {
      switch (userChoice)
      {
        case 1:
          calcAddition(arrLen);
          break;
        case 2:
          // calcSubtratcion(arrLen);
          break;
        case 3:
          // calcMultiplication(arrLen);
          break;
        case 4:
          // calcDivision(arrLen);
          break;
        case 5:
          // calcModulo(arrLen);
        case 6:
          userQuit = true;
          break;
      }
      std::cout << "Continue? (Y/N)";

      std::string choice;
      std::cin >> choice;
      if (choice == "N")
      {
        userQuit = true;
      }

    }
    else 
    {
      switch (userChoice)
      {
        case 1:
          // calcAddition();
          break;
        case 2:
          // calcSubtratcion();
          break;
        case 3:
          // calcMultiplication();
          break;
        case 4:
          // calcDivision();
          break;
        case 5:
          // calcModulo();
        case 6:
          userQuit = true;
          break;
      };

      std::cout << "Continue? (Y/N)";

      std::string choice;
      std::cin >> choice;
      if (choice == "N")
      {
        userQuit = true;
      }
      
    }
    
  };
};

/*void calcMenu(){*/
/*
/*  int userChoice = calcChoice();*/
/*  if (userChoice == 1) {*/
/*    int arrayLength = getArrLen();*/
/*  }*/
/*  menuPrint();*/
/**/
/*};*/

int main() 
{
  
  std::cout << "Welcome to Calculator:tm:";
  calcStart();

  return 0;
}

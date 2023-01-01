  #include <iostream>
  #include <windows.h>
  using namespace std;
  void check(int num1,int num2);
  main()
  {
  int num1;
  int num2;
  check(num1,num2);
  }
  void check(int num1,int num2)
  {
  cout << "enter number 1:";
  cin >> num1;
  cout << "enter number 2:";
  cin >> num2;
  if(num1 == num2)
  {
  cout << "true" << endl;
  }
  if(num1 < num2)
  {
  cout << "false" << endl;
  }
  if(num1 > num2)
  {
  cout <<"false" << endl;
  }
  }
  

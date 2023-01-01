  #include <iostream>
  #include <windows.h>
  using namespace std;
  void reverse(string name);
  main()
  {
  string name;
  reverse(name);
  }
  void reverse(string name)
  {
  cout <<"enter a name:";
  cin >> name;
  if(name == "true")
  {
  cout << "false";
  }
  if(name == "false")
  {
  cout <<"true";
  }
  }
  
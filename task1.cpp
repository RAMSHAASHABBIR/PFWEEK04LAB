  #include <iostream>
  #include <windows.h>
  using namespace std;
  void gotoxy(int x,int y);
  main()
  {
  int x;
  int y;
  gotoxy(14,14);
  cout <<"test" << endl;
  }
  void gotoxy(int x,int y)
  {
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }
  
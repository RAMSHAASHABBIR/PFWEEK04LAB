  #include <iostream>
  #include <windows.h>
  using namespace std;
  void gotoxy(int x,int y);
  void printmaze();
  void playermove(int x,int y);
  main()
  {
  system("cls");
  int x = 1;
  int y = 3;
  printmaze();
  gotoxy(1,3);
  while(true)
  {
  playermove(x,y);
  if(y < 7)
  {
  y = y + 1;
  }
  if(y == 7)
  {
  gotoxy(x,y-1);
  cout <<" ";
  y = 3;
  }
  }
  }
  void printmaze()
  {
  cout << "#######################################" << endl;
  cout << "#                                     #" << endl;
  cout << "#                                     #" << endl;
  cout << "#                                     #" << endl;
  cout << "#                                     #" << endl;
  cout << "#                                     #" << endl;
  cout << "#                                     #" << endl;
  cout << "#######################################" << endl;
  }
  void gotoxy(int x,int y)
  {
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }
  void playermove(int x,int y)
  {
  gotoxy(x,y-1);
  cout <<" ";
  gotoxy(x,y);
  cout <<"P";
  Sleep(500);
  }
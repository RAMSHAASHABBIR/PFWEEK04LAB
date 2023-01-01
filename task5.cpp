  #include <iostream>
  #include <windows.h>
  using namespace std;
  void gotoxy(int x,int y);
  void printname();
  main()
  {
  int x;
  int y;
  gotoxy(x,y);
  printname();
  }
  void gotoxy(int x,int y)
  {
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }
  void printname()
  {
  gotoxy(17,7);
  cout <<"************     *************     ****************" << endl;
  gotoxy(17,8);
  cout <<"*          *     *           *     *       *      *" << endl;
  gotoxy(17,9);
  cout <<"*          *     *           *     *       *      *" << endl;
  gotoxy(17,10);
  cout <<"*          *     *           *     *       *      *" << endl;
  gotoxy(17,11);
  cout <<"************     *************     *       *      *" << endl;
  gotoxy(17,12);
  cout <<"*                *           *     *       *      *" << endl;
  gotoxy(17,13);
  cout <<"* *              *           *     *       *      *" << endl;
  gotoxy(17,14);
  cout <<"*   *            *           *     *       *      *" << endl;  
  gotoxy(17,15);
  cout <<"*      *         *           *     *       *      *" << endl;
  gotoxy(17,16);
  cout <<"*         *      *           *     *       *      *" << endl;
  gotoxy(17,17);
  cout <<"*           *    *           *     *       *      *" << endl;
  }
  
  
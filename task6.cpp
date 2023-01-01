  #include <iostream>
  #include <windows.h>
  using namespace std;
  void gotoxy(int x,int y);
  void printawais();
  main()
  {
  int x;
  int y;
  gotoxy(x,y);
  printawais();
  }
  void gotoxy(int x,int y)
  {
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }
  void printawais()
  {
  gotoxy(17,7);
  cout <<"*******" << endl;
  gotoxy(17,8);
  cout <<"*     *" << endl;
  gotoxy(17,9);
  cout <<"*******" << endl;
  gotoxy(17,10);
  cout <<"*     *" << endl;
  gotoxy(17,11);
  cout <<"*     *" << endl;
  gotoxy(17,12);
  cout <<"*     *" << endl;
  gotoxy(17,13);

  gotoxy(17,14);
  cout <<"*  *  * " << endl;
  gotoxy(17,15);
  cout <<"*  *  * " << endl;
  gotoxy(17,16);
  cout <<"*  *  * " << endl;
  gotoxy(17,17);
  cout <<"*  *  * " << endl;
  gotoxy(17,18);
  cout <<"*  *  * " << endl;
  gotoxy(17,19);
  cout <<"******* " << endl;
  gotoxy(17,20);
  
  gotoxy(17,21);
  cout <<"*******" << endl;
  gotoxy(17,22);
  cout <<"*     *" << endl;
  gotoxy(17,23);
  cout <<"*******" << endl;
  gotoxy(17,24);
  cout <<"*     *" << endl;
  gotoxy(17,25);
  cout <<"*     *" << endl;
  gotoxy(17,26);
  cout <<"*     *" << endl;
  gotoxy(17,27);
  
  gotoxy(17,28);
  cout <<"   *   " << endl;
  gotoxy(17,29);
  cout <<"   *   " << endl;
  gotoxy(17,30);
  cout <<"   *   " << endl; 
  gotoxy(17,31);
  cout <<"   *   " << endl;
  gotoxy(17,32);
  cout <<"   *   " << endl;
  gotoxy(17,33);
  cout <<"   *   " << endl;
  gotoxy(17,34);

  
  gotoxy(17,35);
  cout <<"*******" << endl;
  gotoxy(17,36);
  cout <<"*" << endl;
  gotoxy(17,37);
  cout <<"*" << endl;
  gotoxy(17,38);
  cout <<"*******" << endl;
  gotoxy(17,39);
  cout <<"      *" << endl;
  gotoxy(17,40);
  cout <<"      *" << endl;
  gotoxy(17,41);
  cout <<"*******" << endl;
  gotoxy(17,42);
  }
 

 
  
  
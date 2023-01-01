  #include <iostream>
  using namespace std;
  main()
  {
  int holidays;
  int workingdays;
  int timeforgames;
  int differencefromnorm;
  int workingdaysplay;
  int holidaysplay;
  int normofgame;
  normofgame = 30000;
  workingdaysplay = 63;
  holidaysplay = 127;
  cout << "no of holidays:";
  cin >> holidays;
  workingdays = 365-holidays;
  cout << "working days is:" << workingdays << endl;
  timeforgames = (workingdays*workingdaysplay)+(holidays*holidaysplay);
  cout <<"time for games:" << timeforgames << endl;
  differencefromnorm = normofgame-timeforgames;
  cout <<"difference from norm:" << differencefromnorm << endl;
  if(holidays <= 109)
  {
  cout <<"tom sleeps well" << endl;
  }
  if(holidays >= 110)
  {
  cout <<"tom will run away" << endl;
 }
 }

  
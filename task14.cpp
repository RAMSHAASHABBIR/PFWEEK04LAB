  #include <iostream>
  #include <windows.h>
  using namespace std;
  void university();
  void comparison(string name1,string name2,float mm1,float mm2,float im1,float im2,float em1,float em2,float aggregate1,float aggregate2);
  main()
  {
  string name1;
  string name2;
  float mm1;
  float mm2;
  float im1;
  float im2;
  float em1;
  float em2;
  float aggregate1;
  float aggregate2;
  university();
  comparison(name1,name2,mm1,mm2,im1,im2,em1,em2,aggregate1,aggregate2);
  }
  void university()
  {
  cout << "#######################################" << endl;
  cout << "#      UNIIVERSITY ADMISSION          #" << endl;
  cout << "#                                     #" << endl;
  cout << "#               AND                   #" << endl;
  cout << "#       MANAGEMENT SYSTEM             #" << endl;
  cout << "#                                     #" << endl;
  cout << "#                                     #" << endl;
  cout << "#######################################" << endl;
  }
  void comparison(string name1,string name2,float mm1,float mm2,float im1,float im2,float em1,float em2,float aggregate1,float aggregate2)
  {
  while(true)
  {
  cout << "enter name1:";
  cin >> name1;
  cout << "enter name2:";
  cin >> name2;
  cout << "enter mm1:";
  cin >> mm1;
  cout << "enter mm2:";
  cin >> mm2;
  cout << "enter im1:";
  cin >> im1;
  cout << "enter im2:";
  cin >> im2;
  cout << "enter em1:";
  cin >> em1;
  cout << "enter em2:";
  cin >> em2;
  aggregate1 = ((mm1/1100)*100)*0.3+((im1/550)*100)*0.3+((em1/400)*100)*0.4;
  cout << "aggregate for 1 student is:" << aggregate1 << endl;
  aggregate2 = ((mm2/1100)*100)*0.3+((im2/550)*100)*0.3+((em2/400)*100)*0.4;
  cout << "aggregate for 2 student is:" << aggregate2 << endl;
  if(em1 > em2)
  {
  cout << "Roll no of student 1 is 1" << endl;
  cout << "Roll no of student 2 is 2" << endl;
  }
  if(em1 < em2)
  {
  cout << "Roll no of student 1 is 2" << endl;
  cout << "Roll no of student 2 is 1" << endl;
  }
  }
  }
  
  
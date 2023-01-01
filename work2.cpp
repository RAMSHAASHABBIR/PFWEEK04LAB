  #include <iostream>
  using namespace std;
  void checkresult(int num);
  main()
  {
  int num;
  checkresult(num);
  }
  void checkresult(int num)
  {
  while(true)
  {
  cout <<"enter marks:";
  cin >> num;
  if(num >= 50)
  {
  cout <<"pass" << num;
  }
  if(num <50)
  {
  cout <<"fail" << num;
  }
  }
  }
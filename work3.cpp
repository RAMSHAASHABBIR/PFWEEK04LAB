  #include <iostream>
  using namespace std;
  void check(int even , int odd ,int num);
  main()
  {
  int num;
  int even;
  int odd;
  check(even , odd , num);
  }
  void check(int even , int odd ,int num)
  {
  while(true)
  {
  cout <<"enter a number";
  cin >> num;
  if(num%2==0)
  {
  cout <<"number is even" << num << endl;
  }
  if((num%2)!=0)
  {
  cout <<"number is odd" << num << endl;
  }
  }
  }
  


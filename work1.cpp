  #include <iostream>
  using namespace std;
  void add(float num1,float num2,float sum,float multiplication,float substraction,float division,char op);
  main()
  {
  float num1;
  float num2;
  char op;
  float sum;
  float substraction;
  float division;
  float multiplication;
  add(num1,num2,sum,multiplication,substraction,division,op);
  }
   void add(float num1,float num2,float sum,float multiplication,float substraction,float division,char op)
  {
  while(true)
  {
  cout <<"enter a number:";
  cin >> num1;
  cout <<"enter a number:";
  cin >> num2;
  cout << "enter operator:";
  cin >> op;
  sum = num1+num2;
  multiplication = num1*num2;
  substraction = num1-num2;
  division = num1/num2;
  if(op == '+')
  {
  cout << "addition is:" << sum;
  }
  if(op == '*')
  {
  cout << "multiplication is:" << multiplication;
  }
  if(op == '-')
  {
  cout << "substraction is:" << substraction;
  }
  if(op == '/')
  {
  cout << "division is:" << division;
  }
  }
  }
  

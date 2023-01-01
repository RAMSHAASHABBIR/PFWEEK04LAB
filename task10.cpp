  #include <iostream>
  using namespace std;
  main()
  {
  string countryname;
  float ticketprice;
  float discount;
  ticketprice = 1000.0;
  cout <<"enter the country name:";
  cin >> countryname;
  while(true)
  {
  if(countryname == "pakistan")
  {
  discount = ticketprice - (0.05*ticketprice);
  cout << "discount is:" << discount << endl;
  }
  if(countryname == "ireland")
  {
  discount = ticketprice - (0.1*ticketprice);
  cout <<"discount is:" << discount << endl;
  }
  if(countryname == "india")
  {
 discount = ticketprice - (0.20*ticketprice);
  cout <<"discount is:" << discount << endl;
  }
  if(countryname == "england")
  {
  discount = ticketprice - (0.30*ticketprice);
  cout <<"discount is:" << discount << endl;
  }
  if(countryname == "canada")
  { 
  discount = ticketprice - (0.45*ticketprice);
  cout <<"discount is:" << discount << endl;
  }
  }
  }
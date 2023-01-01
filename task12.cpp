  #include <iostream>
  using namespace std;
  main()
  {
  float pricered;
  float pricewhite;
  float pricetulip;
  int redno;
  int whiteno;
  int tulipno;
  float totalred;
  float totalwhite;
  float totaltulip;
  float reddiscount;
  float whitediscount;
  float tulipdiscount;
  pricered =  2.00;
  pricewhite = 4.10;
  pricetulip = 2.50;
  cout <<"enter no of roses:";
  cin >> redno;
  totalred = pricered*redno;
  cout <<"total price is:" << totalred;
  if
  (totalred > 200)
  {
  reddiscount = totalred - (0.2*totalred);
  cout <<"discount is:" << reddiscount << endl;
  }
  cout <<"enter no of white roses:";
  cin >> whiteno;
  totalwhite = pricewhite*whiteno;
  cout <<"total price is:" << totalwhite;
  if(totalwhite > 200)
  {
  whitediscount = totalwhite - (0.2*totalwhite);
  cout <<"discount is:" << whitediscount << endl;
  }
  cout <<"total no of tulips:";
  cin >> tulipno;
  totaltulip = pricetulip*tulipno;
  cout <<"total price is:" << totaltulip;
  if(totaltulip > 200)
  {
  tulipdiscount = totaltulip - (0.2*totaltulip);
  cout <<"discount is:" << tulipdiscount << endl;
  }
  }
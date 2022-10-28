#include <iostream>
using namespace std;
int
main ()
{

  //declaring variables 'c' for cards, 'r' for ranks, 's' for suit
  int c1, c2, c3, c4, c5;
  int r1, r2, r3, r4, r5;
  int s1, s2, s3, s4, s5;

  cout << "Enter the cards ranging from 0 to 51 = " << endl;
  cin >> c1 >> c2 >> c3 >> c4 >> c5;

  //calculating rank of the cards  
  r1 = c1 % 13;
  r2 = c2 % 13;
  r3 = c3 % 13;
  r4 = c4 % 13;
  r5 = c5 % 13;


  if (r1 > r2 || r2 > r3 || r3 > r4 || r4 > r5)
    {
      cout << " Enter your cards in increasing order";
      return 1;
    }

  //calculating suit of the cards
  s1 = c1 / 13;
  s2 = c2 / 13;
  s3 = c3 / 13;
  s4 = c4 / 13;
  s5 = c5 / 13;

  //checking royal flush
  if (c1 % 13 == 8 &&
      c2 == c1 + 1 && c3 == c2 + 1 && c4 == c3 + 1 && c5 == c4 + 1)
    {
      cout << "Royal flush";
    }

  //checking straight flush

  else if (c1 % 13 < 8 &&
	   c2 == c1 + 1 && c3 == c2 + 1 && c4 == c3 + 1 && c5 == c4 + 1)
    {
      cout << "straight flush";
    }

  //checking four of a kind

  else if (r1 == r4 || r2 == r5)
    {
      cout << "Four of Kind" << endl;
    }

  // checking full house

  else if ((r1 == r3 && r4 == r5) || (r1 == r2 && r3 == r5))
    {
      cout << "Full House" << endl;
    }

  // checking flush

  else if (s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5)
    {
      cout << "Flush" << endl;
    }
  //checking straight
  else if (r2 == r1 + 1 && r3 == r2 + 1 && r4 == r3 + 1 && r5 == r4 + 1)
    {
      cout << "Straight" << endl;
    }
  //checking 3 of a kind
  else if (r1 == r3 || r2 == r4 || r3 == r5)
    {
      cout << "3 of a  kind" << endl;
    }
  //checking 2 Pair
  else if ((r1 == r2 && r3 == r4) || (r2 == r3 && r4 == r5)
	   || (r4 == r5 && r1 == r2))
    {
      cout << "2 pairs" << endl;
    }
  // checking pair
  else if ((r1 == r2) || (r2 == r3) || (r3 == r4) || (r4 == r5))
    {
      cout << "1 Pair" << endl;
    }

  // last conditional statement

  else
    {
      cout << " Random cards" << endl;
    }

  return 0;

}
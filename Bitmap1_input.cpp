#include<graphics.h>
#include<conio.h>
#include<iostream>

using namespace std;
int  main() {
  int gdriver = DETECT, gmode, errorcode;
  initgraph( & gdriver, & gmode, "c:\\tc\\bgi");
  int a[5][7], i, j;

  cout << "Enter the array";
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      cin >> a[i][j];
    }
  }
  cout << endl << endl;
  cout << "The specific letter is:\n"
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      if (a[i][j] == 0)
        cout << " ";
      else
        cout << a[i][j] << " ";
    }
    cout << endl;
  }
  getch();
}

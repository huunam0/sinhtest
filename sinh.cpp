//Tran Huu Nam - huunam0@gmail.com - 2/2022
#include "testlib.h"
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(int argc, char* argv[])
{
   registerGen(argc, argv, 1);
   lli g1 = argc >= 2 ? stoll(argv[1],nullptr,10) : 10;
   lli g2 = argc >= 3 ? stoll(argv[2],nullptr,10) : g1;
   lli n = rnd.next(g1, g2);
   lli m = sqrt(n);
   if (m<5) m=2*m;
   lli q = rnd.next(2ll,m);
   lli x,s=0;
   cout<<n<<" "<<q<<endl;
   for (int i=1; i<=n; i++) {
      x=rnd.next(1ll,m);
      s+=x;
      cout << x;
      if (i==n) cout<<endl; else cout<<" ";
   } 
   for (int i=1; i<=q; i++) cout<<rnd.next(1ll,s-1)<<endl;
   return 0;
	
}
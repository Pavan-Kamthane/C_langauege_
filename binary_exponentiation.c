#include <stdio.h>

long long binpow(long long a, long long b) {
  long long res = 1;
  while (b > 0) {
      if (b & 1)
          res = res * a;
      a = a * a;
      b >>= 1;
  }
  return res;
}
void solve(){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("The value of a^b is : %lld\n",binpow(a,b));
}
int main(){
  int t = 1;
  // cin >> t;
  while(t--)  solve();
  return 0;
}

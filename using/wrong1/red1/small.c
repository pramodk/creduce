struct S0 {
  int f0;
  int f6;
  int f7
}
c;
struct {
  struct S0 f2
    }
a[];
b;
main () {
  for (; b >= 0; b -= 1)
    a[1].f2 = c;
  printf ("%d\n");
  return 0;
}

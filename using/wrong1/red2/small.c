int printf (const char *, ...);
struct S0 {
  int f0;
  int f5;
};
#pragma pack(1)
struct {
  struct S0 f2;
  int f3;
  int f4;
  int f6:22;
}
b = {
  1
};
int a, d;
static char c = 1;
int
main () {
  for (; a >= 0; a -= 1) {
    b.f6 = 1;
    c = 0;
  }
  for (; d; d++);
  printf ("checksum = %x\n", c);
  return 0;
}

a;
short b;
c;
fn1 () {
lbl_1651:
  a = b = a;
  char d = b;
  c = d > 0 ? : d << 1;
  if (b)
    goto lbl_1651;
}

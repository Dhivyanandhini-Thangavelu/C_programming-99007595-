#include<stdio.h>
int setbit (int num, int bit) //this block is for set the bit
{
  num = (num | 1 << bit);
  return num;
}
int resetbit (int num, int bit) //reset the bit
{
  num = num & (~(1 << (bit - 1)));
  return num;
}
int flipbit (int num, int bit) //flip the bit
{
  num = (num ^ (bit - 1 << bit));
  return num;
}
int querybit (int num, int bit)//get the bit
{
  num = (num >> 1) & 1;
  return num;
}
int main ()
{
  int num, bit, set;
  scanf ("%x %x", &num, &bit);
  int s = setbit (num, bit);
  printf ("set bit is%x\n", s);
  int r = resetbit (num, bit);
  printf ("reset bit is%x\n", r);
  int f = flipbit (num, bit);
  printf ("flip bit is%x\n", f);
  int q = (querybit (num, bit));
  printf ("query bit is%x", q);
  return 0;
}



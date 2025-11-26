// Copyright 2025 William Stafford Parsons

public class BlastCircuit {
  public ulong a;
  public ulong b;
  public ulong c;
  public ulong d;

  public ulong Next() {
    ulong mix = a ^ b;

    a += 111111111111111;
    b = (b >> 3) + c;
    c = d;
    d = ((d << 21) | (d >> 43)) + mix;
    return mix;
  }
}

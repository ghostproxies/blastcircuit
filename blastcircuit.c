// Copyright 2025 William Stafford Parsons

#include <stdint.h>

struct blastcircuit_state {
  uint64_t a;
  uint64_t b;
  uint64_t c;
  uint64_t d;
};

uint64_t blastcircuit(struct blastcircuit_state *s) {
  uint64_t mix = s->a ^ s->b;

  s->a += 111111111111111;
  s->b = (s->b >> 3) + s->c;
  s->c = s->d;
  s->d = ((s->d << 21) | (s->d >> 43)) + mix;
  return mix;
}

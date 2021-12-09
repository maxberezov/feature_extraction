void kernel_doitgen(int nr, int nq, int np, double A[150+0][140+0][160+0], double C4[160+0][160+0], double sum[160+0])
{
   int r, q, p, s;

#pragma scop
   for(r = 0; r <= nr-1; r += 1)
      for(q = 0; q <= nq-1; q += 1) {
         for(p = 0; p <= np-1; p += 1) {
            sum[p] = 0.0;
            for(s = 0; s <= np-1; s += 1)
               sum[p] += A[r][q][s]*C4[s][p];
         }
         for(p = 0; p <= np-1; p += 1)
            A[r][q][p] = sum[p];
      }
#pragma endscop

}

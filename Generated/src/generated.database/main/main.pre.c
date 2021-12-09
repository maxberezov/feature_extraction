int main(int argc, const char *argv[])
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   srand(time((void *) 0));
   
   
   int ***B = create_three_dim_int(64, 16, 16, "ones");
   int ***C = create_three_dim_int(64, 16, 64, "ones");
   int **A = create_two_dim_int(512, 512, "ones");
   int ***D = create_three_dim_int(64, 32, 16, "ones");
   int *E = create_one_dim_int(262144, "ones");
   clock_t start = clock();
   {
      int b;

      for(b = 0; b <= 506; b += 1) {
         int a;
inner:         LU_NUB0 = 508;
         LU_IB0 = 0;
         for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
            A[LU_IND0*1+0][b] = C[LU_IND0*1+0][b][LU_IND0*1+0]*E[LU_IND0*1+0];
            A[LU_IND0*1+0+4][b+5] = B[LU_IND0*1+0][b][LU_IND0*1+0]*D[LU_IND0*1+0][b][LU_IND0*1+0]+D[LU_IND0*1+0][b][LU_IND0*1+0];
l99999:            ;
         }
         for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 2) {
            A[(LU_IND0+0)*1+0][b] = C[(LU_IND0+0)*1+0][b][(LU_IND0+0)*1+0]*E[(LU_IND0+0)*1+0];
            A[(LU_IND0+0)*1+0+4][b+5] = B[(LU_IND0+0)*1+0][b][(LU_IND0+0)*1+0]*D[(LU_IND0+0)*1+0][b][(LU_IND0+0)*1+0]+D[(LU_IND0+0)*1+0][b][(LU_IND0+0)*1+0];
            A[(LU_IND0+1)*1+0][b] = C[(LU_IND0+1)*1+0][b][(LU_IND0+1)*1+0]*E[(LU_IND0+1)*1+0];
            A[(LU_IND0+1)*1+0+4][b+5] = B[(LU_IND0+1)*1+0][b][(LU_IND0+1)*1+0]*D[(LU_IND0+1)*1+0][b][(LU_IND0+1)*1+0]+D[(LU_IND0+1)*1+0][b][(LU_IND0+1)*1+0];
l99998:            ;
         }
         a = 0+MAX0(LU_NUB0, 0)*1;
      }
   }

   clock_t stop = clock();
   double elapsed = (double) (stop-start)/((clock_t) 1000000);
   printf("%f", elapsed);
   deallocate_3d_array(B, 64, 16, 16);
   deallocate_3d_array(C, 64, 16, 64);
   deallocate_2d_array(A, 512, 512);
   deallocate_3d_array(D, 64, 32, 16);
   deallocate_1d_array(E);
   return 0;
}

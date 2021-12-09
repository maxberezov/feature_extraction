static void init_array(int w, int h, float *alpha, float imgIn[4096+0][2160+0], float imgOut[4096+0][2160+0])
{
   int i, j;

   *alpha = 0.25;
   //parameter of the filter
   
   //input should be between 0 and 1 (grayscale image pixel)
   for(i = 0; i <= w-1; i += 1)
      for(j = 0; j <= h-1; j += 1)
         imgIn[i][j] = (float) ((313*i+991*j)%65536)/65535.0f;
}

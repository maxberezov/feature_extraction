int main( int argc, const char* argv[] )
{




for (int b = 4; b < 65536; b++)
inner: for (int a = 4; a < 65536; a++)
{

A[a]=A[a-4]*B[a][b][a];
}
return 0;
}

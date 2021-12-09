
struct args_t {
struct timeval t1;
struct timeval t2;
void * restrict arg_info;
};





typedef float real_t;



int dummy(real_t [32000], real_t [32000], real_t [32000], real_t [32000], real_t [32000], real_t [256][256], real_t [256][256], real_t [256][256], real_t);

void init(int **ip, real_t *s1, real_t *s2);

int initialise_arrays(const char *name);
real_t calc_checksum(const char *name);


extern real_t flat_2d_array[256*256];

extern real_t x[32000];

extern real_t a[32000], b[32000], c[32000], d[32000], e[32000], aa[256][256], bb[256][256], cc[256][256], tt[256][256];

extern int indx[32000];

extern real_t * restrict xx;
extern real_t *yy;

real_t flat_2d_array[256*256];

real_t x[32000];

real_t a[32000], b[32000], c[32000], d[32000], e[32000], aa[256][256], bb[256][256], cc[256][256], tt[256][256];

int indx[32000];

real_t * restrict xx;
real_t *yy;
real_t s000(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;

loop_s000: for(i = 0; i <= 31999; i += 1)
a[i] = b[i]+1;
}
dummy((real_t *) a, (real_t *) b, (real_t *) c, (real_t *) d, (real_t *) e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s111(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;
loop_s111: for(i = 1; i <= 31999; i += 2)
a[i] = a[i-1]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1111(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;
loop_s1111: for(i = 0; i <= 15999; i += 1)
a[2*i] = c[i]*b[i]+d[i]*b[i]+c[i]*c[i]+d[i]*b[i]+d[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s112(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 299999; nl += 1) {
{
int i;
loop_s112: for(i = 32000-2; i >= 0; i += -1)
a[i+1] = a[i]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1112(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 299999; nl += 1) {
{
int i;
loop_s1112: for(i = 32000-1; i >= 0; i += -1)
a[i] = b[i]+(real_t) 1.;
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s113(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s113: for(i = 1; i <= 31999; i += 1)
a[i] = a[0]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1113(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;
loop_s1113: for(i = 0; i <= 31999; i += 1)
a[i] = a[32000/2]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s114(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 77999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s114: for(j = 0; j <= i-1; j += 1)
aa[i][j] = aa[j][i]+bb[i][j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s115(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 389999; nl += 1) {
{
int j;
for(j = 0; j <= 255; j += 1) {
int i;
loop_s115: for(i = j+1; i <= 255; i += 1)
a[i] -= aa[j][i]*a[j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1115(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s1115: for(j = 0; j <= 255; j += 1)
aa[i][j] = aa[i][j]*cc[j][i]+bb[i][j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s116(struct args_t *func_args)
{



initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_s116: for(i = 0; i <= 31994; i += 5) {
a[i] = a[i+1]*a[i];
a[i+1] = a[i+2]*a[i+1];
a[i+2] = a[i+3]*a[i+2];
a[i+3] = a[i+4]*a[i+3];
a[i+4] = a[i+5]*a[i+4];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s118(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 77999; nl += 1) {
{
int i;
for(i = 1; i <= 255; i += 1) {
int j;
loop_s118: for(j = 0; j <= i-1; j += 1)
a[i] += bb[j][i]*a[i-j-1];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s119(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 77999; nl += 1) {
{
int i;
for(i = 1; i <= 255; i += 1) {
int j;
loop_s119: for(j = 1; j <= 255; j += 1)
aa[i][j] = aa[i-1][j-1]+bb[i][j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1119(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 77999; nl += 1) {
{
int i;
for(i = 1; i <= 255; i += 1) {
int j;
loop_s1119: for(j = 0; j <= 255; j += 1)
aa[i][j] = aa[i-1][j]+bb[i][j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s121(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
{
int nl;
for(nl = 0; nl <= 299999; nl += 1) {
{
int i;
loop_s121: for(i = 0; i <= 31998; i += 1) {
j = i+1;
a[i] = a[j]+b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s122(struct args_t *func_args)
{





struct {
int a;
int b;
} *x = func_args->arg_info;
int n1 = x->a;
int n3 = x->b;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j, k;
{
int nl;
loop_s122: for(nl = 0; nl <= 99999; nl += 1) {
j = 1;
k = 0;
{
int i;
i = n1-1;
while (i<32000) {
k += j;
a[i] += b[32000-k];
i += n3;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s123(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
j = -1;
{
int i;
loop_s123: for(i = 0; i <= 15999; i += 1) {
j++;
a[j] = b[i]+d[i]*e[i];
if (c[i]>(real_t) 0.) {
j++;
a[j] = c[i]+d[i]*e[i];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s124(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
j = -1;
{
int i;
loop_s124: for(i = 0; i <= 31999; i += 1)
if (b[i]>(real_t) 0.) {
j++;
a[j] = b[i]+d[i]*e[i];
}
else {
j++;
a[j] = c[i]+d[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s125(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k;
{
int nl;
for(nl = 0; nl <= 38999; nl += 1) {
k = -1;
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s125: for(j = 0; j <= 255; j += 1) {
k++;
flat_2d_array[k] = aa[i][j]+bb[i][j]*cc[i][j];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s126(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k;
{
int nl;
for(nl = 0; nl <= 3899; nl += 1) {
k = 1;
{
int i;
for(i = 0; i <= 255; i += 1) {
{
int j;
loop_s126: for(j = 1; j <= 255; j += 1) {
bb[j][i] = bb[j-1][i]+flat_2d_array[k-1]*cc[j][i];
++k;
}
}
++k;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s127(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
{
int nl;
for(nl = 0; nl <= 199999; nl += 1) {
j = -1;
{
int i;
loop_s127: for(i = 0; i <= 15999; i += 1) {
j++;
a[j] = b[i]+c[i]*d[i];
j++;
a[j] = b[i]+d[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s128(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j, k;
{
int nl;
for(nl = 0; nl <= 199999; nl += 1) {
j = -1;
{
int i;
loop_s128: for(i = 0; i <= 15999; i += 1) {
k = j+1;
a[i] = b[k]-d[i];
j = k+1;
b[k] = a[i]+c[k];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s131(struct args_t *func_args)
{



initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int m = 1;
{
int nl;
for(nl = 0; nl <= 499999; nl += 1) {
{
int i;
loop_s131: for(i = 0; i <= 31998; i += 1)
a[i] = a[i+m]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s132(struct args_t *func_args)
{



initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int m = 0;
int j = m;
int k = m+1;
{
int nl;
for(nl = 0; nl <= 39999999; nl += 1) {
{
int i;
loop_s132: for(i = 1; i <= 255; i += 1)
aa[j][i] = aa[k][i-1]+b[i]*c[1];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s141(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k;
{
int nl;
for(nl = 0; nl <= 77999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
k = (i+1)*(i+1-1)/2+(i+1)-1;
{
int j;
loop_s141: for(j = i; j <= 255; j += 1) {
flat_2d_array[k] += bb[j][i];
k += j+1;
}
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
void s151s(real_t a[32000], real_t b[32000], int m)
{
int i;
for(i = 0; i <= 31998; i += 1)
a[i] = a[i+m]+b[i];
}
real_t s151(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

loop_s151: for(nl = 0; nl <= 499999; nl += 1) {
s151s(a, b, 1);
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
void s152s(real_t a[32000], real_t b[32000], real_t c[32000], int i)
{
a[i] += b[i]*c[i];
}
real_t s152(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s152: for(i = 0; i <= 31999; i += 1) {
b[i] = d[i]*e[i];
s152s(a, b, c, i);
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s161(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s161: for(i = 0; i <= 31998; i += 1) {
if (b[i]<(real_t) 0.) goto L20;
a[i] = c[i]+d[i]*e[i];
goto L10;
L20: c[i+1] = a[i]+d[i]*d[i];
L10: ;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1161(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s1161: for(i = 0; i <= 31998; i += 1) {
if (c[i]<(real_t) 0.) goto L20;
a[i] = c[i]+d[i]*e[i];
goto L10;
L20: b[i] = a[i]+d[i]*d[i];
L10: ;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s162(struct args_t *func_args)
{



int k = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
if (k>0) {
int i;
loop_s162: for(i = 0; i <= 31998; i += 1)
a[i] = a[i+k]+b[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s171(struct args_t *func_args)
{




int inc = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s171: for(i = 0; i <= 31999; i += 1)
a[i*inc] += b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s172(struct args_t *func_args)
{



struct {
int a;
int b;
} *x = func_args->arg_info;
int n1 = x->a;
int n3 = x->b;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

loop_s172: for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
i = n1-1;
while (i<32000) {
a[i] += b[i];
i += n3;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s173(struct args_t *func_args)
{



initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k = 32000/2;
{
int nl;
for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_s173: for(i = 0; i <= 15999; i += 1)
a[i+k] = a[i]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s174(struct args_t *func_args)
{




int M = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_s174: for(i = 0; i <= M-1; i += 1)
a[i+M] = a[i]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s175(struct args_t *func_args)
{




int inc = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

loop_s175: for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
i = 0;
while (i<32000-1) {
a[i] = a[i+inc]+b[i];
i += inc;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s176(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int m = 32000/2;
{
int nl;
for(nl = 0; nl <= 11; nl += 1) {
{
int j;
for(j = 0; j <= 15999; j += 1) {
int i;
loop_s176: for(i = 0; i <= m-1; i += 1)
a[i] += b[i+m-j-1]*c[j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s211(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s211: for(i = 1; i <= 31998; i += 1) {
a[i] = b[i-1]+c[i]*d[i];
b[i] = b[i+1]-e[i]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s212(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s212: for(i = 0; i <= 31998; i += 1) {
a[i] *= c[i];
b[i] += a[i+1]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1213(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s1213: for(i = 1; i <= 31998; i += 1) {
a[i] = b[i-1]+c[i];
b[i] = a[i+1]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s221(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s221: for(i = 1; i <= 31999; i += 1) {
a[i] += c[i]*d[i];
b[i] = b[i-1]+a[i]+d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1221(struct args_t *func_args)
{



initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s1221: for(i = 4; i <= 31999; i += 1)
b[i] = b[i-4]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s222(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s222: for(i = 1; i <= 31999; i += 1) {
a[i] += b[i]*c[i];
e[i] = e[i-1]*e[i-1];
a[i] -= b[i]*c[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s231(struct args_t *func_args)
{



initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s231: for(j = 1; j <= 255; j += 1)
aa[j][i] = aa[j-1][i]+bb[j][i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s232(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int j;
for(j = 1; j <= 255; j += 1) {
int i;
loop_s232: for(i = 1; i <= j; i += 1)
aa[j][i] = aa[j][i-1]*aa[j][i-1]+bb[j][i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1232(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int j;
for(j = 0; j <= 255; j += 1) {
int i;
loop_s1232: for(i = j; i <= 255; i += 1)
aa[i][j] = bb[i][j]+cc[i][j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s233(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int i;
for(i = 1; i <= 255; i += 1) {
{
int j;
for(j = 1; j <= 255; j += 1)
aa[j][i] = aa[j-1][i]+cc[j][i];
}
{
int j;
loop_s233: for(j = 1; j <= 255; j += 1)
bb[j][i] = bb[j][i-1]+cc[j][i];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2233(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int i;
for(i = 1; i <= 255; i += 1) {
{
int j;
for(j = 1; j <= 255; j += 1)
aa[j][i] = aa[j-1][i]+cc[j][i];
}
{
int j;
loop_s2233: for(j = 1; j <= 255; j += 1)
bb[i][j] = bb[i-1][j]+cc[i][j];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s235(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 77999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
a[i] += b[i]*c[i];
{
int j;
loop_s235: for(j = 1; j <= 255; j += 1)
aa[j][i] = aa[j-1][i]+bb[j][i]*a[i];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s241(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;
loop_s241: for(i = 0; i <= 31998; i += 1) {
a[i] = b[i]*c[i]*d[i];
b[i] = a[i]*a[i+1]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s242(struct args_t *func_args)
{



struct {
real_t a;
real_t b;
} *x = func_args->arg_info;
real_t s1 = x->a;
real_t s2 = x->b;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 19999; nl += 1) {
{
int i;
loop_s242: for(i = 1; i <= 31999; i += 1)
a[i] = a[i-1]+s1+s2+b[i]+c[i]+d[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s243(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s243: for(i = 0; i <= 31998; i += 1) {
a[i] = b[i]+c[i]*d[i];
b[i] = a[i]+d[i]*e[i];
a[i] = b[i]+a[i+1]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s244(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s244: for(i = 0; i <= 31998; i += 1) {
a[i] = b[i]+c[i]*d[i];
b[i] = c[i]+b[i];
a[i+1] = b[i]+a[i+1]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1244(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s1244: for(i = 0; i <= 31998; i += 1) {
a[i] = b[i]+c[i]*c[i]+b[i]*b[i]+c[i];
d[i] = a[i]+a[i+1];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2244(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s2244: for(i = 0; i <= 31998; i += 1) {
a[i+1] = b[i]+e[i];
a[i] = b[i]+c[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s251(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t s;
{
int nl;
for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s251: for(i = 0; i <= 31999; i += 1) {
s = b[i]+c[i]*d[i];
a[i] = s*s;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1251(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t s;
{
int nl;
for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s1251: for(i = 0; i <= 31999; i += 1) {
s = b[i]+c[i];
b[i] = a[i]+d[i];
a[i] = s*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2251(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
real_t s = (real_t) 0.0;
{
int i;
loop_s2251: for(i = 0; i <= 31999; i += 1) {
a[i] = s*e[i];
s = b[i]+c[i];
b[i] = a[i]+d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s3251(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s3251: for(i = 0; i <= 31998; i += 1) {
a[i+1] = b[i]+c[i];
b[i] = c[i]*e[i];
d[i] = a[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s252(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t t, s;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
t = (real_t) 0.;
{
int i;
loop_s252: for(i = 0; i <= 31999; i += 1) {
s = b[i]*c[i];
a[i] = s+t;
t = s;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s253(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t s;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s253: for(i = 0; i <= 31999; i += 1)
if (a[i]>b[i]) {
s = a[i]-b[i]*d[i];
c[i] += s;
a[i] = s;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s254(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t x;
{
int nl;
for(nl = 0; nl <= 399999; nl += 1) {
x = b[32000-1];
{
int i;
loop_s254: for(i = 0; i <= 31999; i += 1) {
a[i] = (b[i]+x)*(real_t) .5;
x = b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s255(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t x, y;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
x = b[32000-1];
y = b[32000-2];
{
int i;
loop_s255: for(i = 0; i <= 31999; i += 1) {
a[i] = (b[i]+x+y)*(real_t) .333;
y = x;
x = b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s256(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 3899; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s256: for(j = 1; j <= 255; j += 1) {
a[j] = (real_t) 1.0-a[j-1];
aa[j][i] = a[j]+bb[j][i]*d[j];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s257(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 3899; nl += 1) {
{
int i;
for(i = 1; i <= 255; i += 1) {
int j;
loop_s257: for(j = 0; j <= 255; j += 1) {
a[i] = aa[j][i]-a[i-1];
aa[j][i] = a[i]+bb[j][i];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s258(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t s;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
s = 0.;
{
int i;
loop_s258: for(i = 0; i <= 255; i += 1) {
if (a[i]>0.)
s = d[i]*d[i];
b[i] = s*c[i]+d[i];
e[i] = (s+(real_t) 1.)*aa[0][i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s261(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t t;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s261: for(i = 1; i <= 31999; i += 1) {
t = a[i]+b[i];
a[i] = t+c[i-1];
t = c[i]*d[i];
c[i] = t;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s271(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s271: for(i = 0; i <= 31999; i += 1)
if (b[i]>(real_t) 0.)
a[i] += b[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s272(struct args_t *func_args)
{




int t = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s272: for(i = 0; i <= 31999; i += 1)
if (e[i]>=t) {
a[i] += c[i]*d[i];
b[i] += c[i]*c[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s273(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s273: for(i = 0; i <= 31999; i += 1) {
a[i] += d[i]*e[i];
if (a[i]<(real_t) 0.)
b[i] += d[i]*e[i];
c[i] += a[i]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s274(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s274: for(i = 0; i <= 31999; i += 1) {
a[i] = c[i]+e[i]*d[i];
if (a[i]>(real_t) 0.)
b[i] = a[i]+b[i];
else
a[i] = d[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s275(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 3899; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1)
if (aa[0][i]>(real_t) 0.) {
int j;
loop_s275: for(j = 1; j <= 255; j += 1)
aa[j][i] = aa[j-1][i]+bb[j][i]*cc[j][i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2275(struct args_t *func_args)
{



initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
{
int j;
loop_s2275: for(j = 0; j <= 255; j += 1)
aa[j][i] = aa[j][i]+bb[j][i]*cc[j][i];
}
a[i] = b[i]+c[i]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s276(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int mid = 32000/2;
{
int nl;
for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s276: for(i = 0; i <= 31999; i += 1)
if (i+1<mid)
a[i] += b[i]*c[i];
else
a[i] += b[i]*d[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s277(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s277: for(i = 0; i <= 31998; i += 1) {
if (a[i]>=(real_t) 0.) goto L20;
if (b[i]>=(real_t) 0.) goto L30;
a[i] += c[i]*d[i];
L30: b[i+1] = c[i]+d[i]*e[i];
L20: ;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s278(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s278: for(i = 0; i <= 31999; i += 1) {
if (a[i]>(real_t) 0.) goto L20;
b[i] = -b[i]+d[i]*e[i];
goto L30;
L20: c[i] = -c[i]+d[i]*e[i];
L30: ;
a[i] = b[i]+c[i]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s279(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s279: for(i = 0; i <= 31999; i += 1) {
if (a[i]>(real_t) 0.) goto L20;
b[i] = -b[i]+d[i]*d[i];
if (b[i]<=a[i]) goto L30;
c[i] += d[i]*e[i];
goto L30;
L20: c[i] = -c[i]+e[i]*e[i];
L30: ;
a[i] = b[i]+c[i]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1279(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s1279: for(i = 0; i <= 31999; i += 1)
if (a[i]<(real_t) 0.)
if (b[i]>a[i])
c[i] += d[i]*e[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2710(struct args_t *func_args)
{




int x = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s2710: for(i = 0; i <= 31999; i += 1)
if (a[i]>b[i]) {
a[i] += b[i]*d[i];
if (32000>10)
c[i] += d[i]*d[i];
else
c[i] = d[i]*e[i]+(real_t) 1.;
}
else {
b[i] = a[i]+e[i]*e[i];
if (x>(real_t) 0.)
c[i] = a[i]+d[i]*d[i];
else
c[i] += e[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2711(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s2711: for(i = 0; i <= 31999; i += 1)
if (b[i]!=(real_t) 0.0)
a[i] += b[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2712(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s2712: for(i = 0; i <= 31999; i += 1)
if (a[i]>b[i])
a[i] += b[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s281(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t x;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s281: for(i = 0; i <= 31999; i += 1) {
x = a[32000-i-1]+b[i]*c[i];
a[i] = x-((real_t) 1.0);
b[i] = x;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1281(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t x;
{
int nl;
for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s1281: for(i = 0; i <= 31999; i += 1) {
x = b[i]*c[i]+a[i]*d[i]+e[i];
a[i] = x-((real_t) 1.0);
b[i] = x;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s291(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int im1;
{
int nl;
for(nl = 0; nl <= 199999; nl += 1) {
im1 = 32000-1;
{
int i;
loop_s291: for(i = 0; i <= 31999; i += 1) {
a[i] = (b[i]+b[im1])*(real_t) .5;
im1 = i;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s292(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int im1, im2;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
im1 = 32000-1;
im2 = 32000-2;
{
int i;
loop_s292: for(i = 0; i <= 31999; i += 1) {
a[i] = (b[i]+b[im1]+b[im2])*(real_t) .333;
im2 = im1;
im1 = i;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s293(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s293: for(i = 0; i <= 31999; i += 1)
a[i] = a[0];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2101(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_s2101: for(i = 0; i <= 255; i += 1)
aa[i][i] += bb[i][i]*cc[i][i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2102(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
{
int j;
loop_s2102: for(j = 0; j <= 255; j += 1)
aa[j][i] = (real_t) 0.;
}
aa[i][i] = (real_t) 1.;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s2111(struct args_t *func_args)
{



initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int j;
for(j = 1; j <= 255; j += 1) {
int i;
loop_s2111: for(i = 1; i <= 255; i += 1)
aa[j][i] = (aa[j][i-1]+aa[j-1][i])/1.9;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s311(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
for(nl = 0; nl <= 999999; nl += 1) {
sum = (real_t) 0.;
{
int i;
loop_s311: for(i = 0; i <= 31999; i += 1)
sum += a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, sum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t test(real_t *A)
{
real_t s = (real_t) 0.0;
{
int i;
for(i = 0; i <= 3; i += 1)
s += A[i];
}
return s;
}
real_t s31111(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
loop_s31111: for(nl = 0; nl <= 199999999; nl += 1) {
sum = (real_t) 0.;
sum += test(a);
sum += test(&a[4]);
sum += test(&a[8]);
sum += test(&a[12]);
sum += test(&a[16]);
sum += test(&a[20]);
sum += test(&a[24]);
sum += test(&a[28]);
dummy(a, b, c, d, e, aa, bb, cc, sum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s312(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t prod;
{
int nl;
for(nl = 0; nl <= 999999; nl += 1) {
prod = (real_t) 1.;
{
int i;
loop_s312: for(i = 0; i <= 31999; i += 1)
prod *= a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, prod);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return prod;
}
real_t s313(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t dot;
{
int nl;
for(nl = 0; nl <= 499999; nl += 1) {
dot = (real_t) 0.;
{
int i;
loop_s313: for(i = 0; i <= 31999; i += 1)
dot += a[i]*b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, dot);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return dot;
}
real_t s314(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t x;
{
int nl;
for(nl = 0; nl <= 499999; nl += 1) {
x = a[0];
{
int i;
loop_s314: for(i = 0; i <= 31999; i += 1)
if (a[i]>x)
x = a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, x);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return x;
}
real_t s315(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int i;

for(i = 0; i <= 31999; i += 1)
a[i] = i*7%32000;
}

real_t x, chksum;
int index;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
x = a[0];
index = 0;
{
int i;
loop_s315: for(i = 0; i <= 31999; i += 1)
if (a[i]>x) {
x = a[i];
index = i;
}
}
chksum = x+(real_t) index;
dummy(a, b, c, d, e, aa, bb, cc, chksum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return index+x+1;
}
real_t s316(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t x;
{
int nl;
for(nl = 0; nl <= 499999; nl += 1) {
x = a[0];
{
int i;
loop_s316: for(i = 1; i <= 31999; i += 1)
if (a[i]<x)
x = a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, x);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return x;
}
real_t s317(struct args_t *func_args)
{






initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t q;
{
int nl;
for(nl = 0; nl <= 499999; nl += 1) {
q = (real_t) 1.;
{
int i;
loop_s317: for(i = 0; i <= 15999; i += 1)
q *= (real_t) .99;
}
dummy(a, b, c, d, e, aa, bb, cc, q);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return q;
}
real_t s318(struct args_t *func_args)
{




int inc = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k, index;
real_t max, chksum;
{
int nl;
for(nl = 0; nl <= 49999; nl += 1) {
k = 0;
index = 0;
max = fabsf(a[0]);
k += inc;
{
int i;
loop_s318: for(i = 1; i <= 31999; i += 1) {
if (fabsf(a[k])<=max) goto L5;
index = i;
max = fabsf(a[k]);
L5: ;
k += inc;
}
}
chksum = max+(real_t) index;
dummy(a, b, c, d, e, aa, bb, cc, chksum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return max+index+1;
}
real_t s319(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
for(nl = 0; nl <= 199999; nl += 1) {
sum = 0.;
{
int i;
loop_s319: for(i = 0; i <= 31999; i += 1) {
a[i] = c[i]+d[i];
sum += a[i];
b[i] = c[i]+e[i];
sum += b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, sum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
real_t s3110(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int xindex, yindex;
real_t max, chksum;
{
int nl;
for(nl = 0; nl <= 38999; nl += 1) {
max = aa[0][0];
xindex = 0;
yindex = 0;
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s3110: for(j = 0; j <= 255; j += 1)
if (aa[i][j]>max) {
max = aa[i][j];
xindex = i;
yindex = j;
}
}
}
chksum = max+(real_t) xindex+(real_t) yindex;
dummy(a, b, c, d, e, aa, bb, cc, chksum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return max+xindex+1+yindex+1;
}
real_t s13110(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int xindex, yindex;
real_t max, chksum;
{
int nl;
for(nl = 0; nl <= 38999; nl += 1) {
max = aa[0][0];
xindex = 0;
yindex = 0;
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s13110: for(j = 0; j <= 255; j += 1)
if (aa[i][j]>max) {
max = aa[i][j];
xindex = i;
yindex = j;
}
}
}
chksum = max+(real_t) xindex+(real_t) yindex;
dummy(a, b, c, d, e, aa, bb, cc, chksum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return max+xindex+1+yindex+1;
}
real_t s3111(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
for(nl = 0; nl <= 49999; nl += 1) {
sum = 0.;
{
int i;
loop_s3111: for(i = 0; i <= 31999; i += 1)
if (a[i]>(real_t) 0.)
sum += a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, sum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
real_t s3112(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
sum = (real_t) 0.0;
{
int i;
loop_s3112: for(i = 0; i <= 31999; i += 1) {
sum += a[i];
b[i] = sum;
}
}
dummy(a, b, c, d, e, aa, bb, cc, sum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
real_t s3113(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t max;
{
int nl;
for(nl = 0; nl <= 399999; nl += 1) {
max = fabsf(a[0]);
{
int i;
loop_s3113: for(i = 0; i <= 31999; i += 1)
if (fabsf(a[i])>max)
max = fabsf(a[i]);
}
dummy(a, b, c, d, e, aa, bb, cc, max);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return max;
}
real_t s321(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s321: for(i = 1; i <= 31999; i += 1)
a[i] += a[i-1]*b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s322(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s322: for(i = 2; i <= 31999; i += 1)
a[i] = a[i]+a[i-1]*b[i]+a[i-2]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s323(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s323: for(i = 1; i <= 31999; i += 1) {
a[i] = b[i-1]+c[i]*d[i];
b[i] = a[i]+c[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s331(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
real_t chksum;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
j = -1;
{
int i;
loop_s331: for(i = 0; i <= 31999; i += 1)
if (a[i]<(real_t) 0.)
j = i;
}
chksum = (real_t) j;
dummy(a, b, c, d, e, aa, bb, cc, chksum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return j+1;
}
real_t s332(struct args_t *func_args)
{




int t = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int index;
real_t value;
real_t chksum;
{
int nl;
loop_s332: for(nl = 0; nl <= 99999; nl += 1) {
index = -2;
value = -1.;
int i;
i = 0;
l99998: ;
if (!(i<32000)) goto L20;
if (a[i]>t) goto l99999;
i++;
goto l99998;
l99999: ;
index = i;
value = a[i];
L20: ;
chksum = value+(real_t) index;
dummy(a, b, c, d, e, aa, bb, cc, chksum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return value;
}
real_t s341(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
j = -1;
{
int i;
loop_s341: for(i = 0; i <= 31999; i += 1)
if (b[i]>(real_t) 0.) {
j++;
a[j] = b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s342(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j = 0;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
j = -1;
{
int i;
loop_s342: for(i = 0; i <= 31999; i += 1)
if (a[i]>(real_t) 0.) {
j++;
a[i] = b[j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s343(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k;
{
int nl;
for(nl = 0; nl <= 3899; nl += 1) {
k = -1;
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s343: for(j = 0; j <= 255; j += 1)
if (bb[j][i]>(real_t) 0.) {
k++;
flat_2d_array[k] = aa[j][i];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s351(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t alpha = c[0];
{
int nl;
for(nl = 0; nl <= 799999; nl += 1) {
{
int i;
loop_s351: for(i = 0; i <= 31999; i += 5) {
a[i] += alpha*b[i];
a[i+1] += alpha*b[i+1];
a[i+2] += alpha*b[i+2];
a[i+3] += alpha*b[i+3];
a[i+4] += alpha*b[i+4];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1351(struct args_t *func_args)
{



initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 799999; nl += 1) {
real_t * restrict A = a;
real_t * restrict B = b;
real_t * restrict C = c;
{
int i;
loop_s1351: for(i = 0; i <= 31999; i += 1) {
*A = *B+*C;
A++;
B++;
C++;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s352(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t dot;
{
int nl;
for(nl = 0; nl <= 799999; nl += 1) {
dot = (real_t) 0.;
{
int i;
loop_s352: for(i = 0; i <= 31999; i += 5)
dot = dot+a[i]*b[i]+a[i+1]*b[i+1]+a[i+2]*b[i+2]+a[i+3]*b[i+3]+a[i+4]*b[i+4];
}
dummy(a, b, c, d, e, aa, bb, cc, dot);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return dot;
}
real_t s353(struct args_t *func_args)
{





int * restrict ip = func_args->arg_info;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t alpha = c[0];
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s353: for(i = 0; i <= 31999; i += 5) {
a[i] += alpha*b[ip[i]];
a[i+1] += alpha*b[ip[i+1]];
a[i+2] += alpha*b[ip[i+2]];
a[i+3] += alpha*b[ip[i+3]];
a[i+4] += alpha*b[ip[i+4]];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s421(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

xx = flat_2d_array;
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
yy = xx;
{
int i;
loop_s421: for(i = 0; i <= 31998; i += 1)
xx[i] = yy[i+1]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s1421(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

xx = &b[32000/2];
{
int nl;

for(nl = 0; nl <= 799999; nl += 1) {
{
int i;
loop_s1421: for(i = 0; i <= 15999; i += 1)
b[i] = xx[i]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s422(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

xx = flat_2d_array+4;
{
int nl;

for(nl = 0; nl <= 799999; nl += 1) {
{
int i;
loop_s422: for(i = 0; i <= 31999; i += 1)
xx[i] = flat_2d_array[i+8]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s423(struct args_t *func_args)
{





int vl = 64;
xx = flat_2d_array+vl;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s423: for(i = 0; i <= 31998; i += 1)
flat_2d_array[i+1] = xx[i]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s424(struct args_t *func_args)
{






int vl = 63;
xx = flat_2d_array+vl;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s424: for(i = 0; i <= 31998; i += 1)
xx[i+1] = flat_2d_array[i]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s431(struct args_t *func_args)
{




int k1 = 1;
int k2 = 2;
int k = 2*k1-k2;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_s431: for(i = 0; i <= 31999; i += 1)
a[i] = a[i+k]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s441(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s441: for(i = 0; i <= 31999; i += 1)
if (d[i]<(real_t) 0.)
a[i] += b[i]*c[i];
else if (d[i]==(real_t) 0.)
a[i] += b[i]*b[i];
else
a[i] += c[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s442(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s442: for(i = 0; i <= 31999; i += 1) {
if (indx[i]==1) goto _switch_3_case_1;
if (indx[i]==2) goto _switch_3_case_2;
if (indx[i]==3) goto _switch_3_case_3;
if (indx[i]==4) goto _switch_3_case_4;
_break_3: ;
L15: a[i] += b[i]*b[i];
goto L50;
_switch_3_case_4: ;
L40: a[i] += e[i]*e[i];
goto L50;
_switch_3_case_3: ;
L30: a[i] += d[i]*d[i];
goto L50;
_switch_3_case_2: ;
L20: a[i] += c[i]*c[i];
goto L50;
_switch_3_case_1: ;
goto L15;
L50: ;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s443(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;
loop_s443: for(i = 0; i <= 31999; i += 1) {
if (d[i]<=(real_t) 0.) goto L20;
L30: a[i] += b[i]*b[i];
goto L50;
L20: a[i] += b[i]*c[i];
L50: ;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s451(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 19999; nl += 1) {
{
int i;
loop_s451: for(i = 0; i <= 31999; i += 1)
a[i] = sinf(b[i])+cosf(c[i]);
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s452(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s452: for(i = 0; i <= 31999; i += 1)
a[i] = b[i]+c[i]*(real_t) (i+1);
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s453(struct args_t *func_args)
{



real_t s;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
s = 0.;
{
int i;
loop_s453: for(i = 0; i <= 31999; i += 1) {
s += (real_t) 2.;
a[i] = s*b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
int s471s(void)
{

return 0;
}
real_t s471(struct args_t *func_args)
{



int m = 32000;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s471: for(i = 0; i <= m-1; i += 1) {
x[i] = b[i]+d[i]*d[i];
s471s();
b[i] = c[i]+d[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s481(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s481: for(i = 0; i <= 31999; i += 1) {
if (d[i]<(real_t) 0.)
exit(0);
a[i] += b[i]*c[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s482(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

loop_s482: for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
i = 0;
l99999: ;
if (!(i<32000)) goto _break_2;
a[i] += b[i]*c[i];
if (c[i]>b[i]) goto _break_2;
i++;
goto l99999;
_break_2: ;
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s491(struct args_t *func_args)
{





int * restrict ip = func_args->arg_info;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s491: for(i = 0; i <= 31999; i += 1)
a[ip[i]] = b[i]+c[i]*d[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s4112(struct args_t *func_args)
{





struct {
int * restrict a;
real_t b;
} *x = func_args->arg_info;
int * restrict ip = x->a;
real_t s = x->b;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s4112: for(i = 0; i <= 31999; i += 1)
a[i] += b[ip[i]]*s;
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s4113(struct args_t *func_args)
{





int * restrict ip = func_args->arg_info;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s4113: for(i = 0; i <= 31999; i += 1)
a[ip[i]] = b[ip[i]]+c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s4114(struct args_t *func_args)
{





struct {
int * restrict a;
int b;
} *x = func_args->arg_info;
int * restrict ip = x->a;
int n1 = x->b;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s4114: for(i = n1-1; i <= 31999; i += 1) {
k = ip[i];
a[i] = b[i]+c[32000-k+1-2]*d[i];
k += 5;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t s4115(struct args_t *func_args)
{





int * restrict ip = func_args->arg_info;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
sum = 0.;
{
int i;
loop_s4115: for(i = 0; i <= 31999; i += 1)
sum += a[i]*b[ip[i]];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
real_t s4116(struct args_t *func_args)
{





struct {
int * restrict a;
int b;
int c;
} *x = func_args->arg_info;
int * restrict ip = x->a;
int j = x->b;
int inc = x->c;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
int off;
{
int nl;
for(nl = 0; nl <= 9999999; nl += 1) {
sum = 0.;
{
int i;
loop_s4116: for(i = 0; i <= 254; i += 1) {
off = inc+i;
sum += a[off]*aa[j-1][ip[i]];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
real_t s4117(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s4117: for(i = 0; i <= 31999; i += 1)
a[i] = b[i]+c[i/2]*d[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t f(real_t a, real_t b)
{
return a*b;
}
real_t s4121(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s4121: for(i = 0; i <= 31999; i += 1)
a[i] += f(b[i], c[i]);
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t va(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_va: for(i = 0; i <= 31999; i += 1)
a[i] = b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vag(struct args_t *func_args)
{





int * restrict ip = func_args->arg_info;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;
loop_vag: for(i = 0; i <= 31999; i += 1)
a[i] = b[ip[i]];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vas(struct args_t *func_args)
{





int * restrict ip = func_args->arg_info;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;
loop_vas: for(i = 0; i <= 31999; i += 1)
a[ip[i]] = b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vif(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_vif: for(i = 0; i <= 31999; i += 1)
if (b[i]>(real_t) 0.)
a[i] = b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vpv(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_vpv: for(i = 0; i <= 31999; i += 1)
a[i] += b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vtv(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_vtv: for(i = 0; i <= 31999; i += 1)
a[i] *= b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vpvtv(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_vpvtv: for(i = 0; i <= 31999; i += 1)
a[i] += b[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vpvts(struct args_t *func_args)
{




real_t s = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_vpvts: for(i = 0; i <= 31999; i += 1)
a[i] += b[i]*s;
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vpvpv(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_vpvpv: for(i = 0; i <= 31999; i += 1)
a[i] += b[i]+c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vtvtv(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_vtvtv: for(i = 0; i <= 31999; i += 1)
a[i] = a[i]*b[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
real_t vsumr(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
for(nl = 0; nl <= 999999; nl += 1) {
sum = 0.;
{
int i;
loop_vsumr: for(i = 0; i <= 31999; i += 1)
sum += a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, sum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
real_t vdotr(struct args_t *func_args)
{




initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t dot;
{
int nl;
for(nl = 0; nl <= 999999; nl += 1) {
dot = 0.;
{
int i;
loop_vdotr: for(i = 0; i <= 31999; i += 1)
dot += a[i]*b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, dot);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return dot;
}
real_t vbor(struct args_t *func_args)
{





initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t a1, b1, c1, d1, e1, f1;
{
int nl;
for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_vbor: for(i = 0; i <= 255; i += 1) {
a1 = a[i];
b1 = b[i];
c1 = c[i];
d1 = d[i];
e1 = e[i];
f1 = aa[0][i];
a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
d1 = d1*e1*f1;
x[i] = a1*b1*c1*d1;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
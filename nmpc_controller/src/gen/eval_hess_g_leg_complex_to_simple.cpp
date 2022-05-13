/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_hess_g_leg_complex_to_simple_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[112] = {108, 1, 0, 108, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107};
static const casadi_int casadi_s1[56] = {52, 1, 0, 52, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
static const casadi_int casadi_s2[58] = {54, 1, 0, 54, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53};
static const casadi_int casadi_s3[154] = {108, 108, 0, 0, 0, 0, 7, 27, 40, 40, 40, 40, 42, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 3, 4, 9, 10, 11, 106, 107, 4, 5, 9, 10, 11, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 105, 106, 107, 5, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 10, 11, 11};

/* eval_hess_g_leg_complex_to_simple:(w[108],lambda[52],p[54])->(hess_g[108x108,43nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a9;
  a0=arg[0]? arg[0][4] : 0;
  a1=cos(a0);
  a2=4.3125046780173909e-01;
  a3=arg[0]? arg[0][106] : 0;
  a4=arg[0]? arg[0][10] : 0;
  a3=(a3-a4);
  a5=arg[1]? arg[1][11] : 0;
  a6=(a3*a5);
  a6=(a2*a6);
  a7=(a1*a6);
  a8=arg[0]? arg[0][9] : 0;
  a9=arg[0]? arg[0][11] : 0;
  a10=(a8*a9);
  a11=(a10*a1);
  a12=3.6700698954086952e-01;
  a13=arg[2]? arg[2][0] : 0;
  a14=(a13*a5);
  a12=(a12*a14);
  a11=(a11*a12);
  a7=(a7-a11);
  a11=24358218631252112.;
  a15=-1.3877787807814460e-17;
  a16=arg[1]? arg[1][10] : 0;
  a17=(a13*a16);
  a15=(a15*a17);
  a18=(a8*a15);
  a19=(a11*a18);
  a20=(a4*a19);
  a7=(a7+a20);
  a20=-4.6021926780173911e-01;
  a21=arg[0]? arg[0][107] : 0;
  a21=(a21-a9);
  a22=(a21*a16);
  a22=(a20*a22);
  a7=(a7+a22);
  a22=arg[1]? arg[1][5] : 0;
  a22=(a13*a22);
  a23=(a22/a1);
  a24=(a4*a23);
  a7=(a7-a24);
  a24=arg[1]? arg[1][4] : 0;
  a24=(a13*a24);
  a25=(a9*a24);
  a7=(a7+a25);
  a25=sin(a0);
  a26=arg[1]? arg[1][3] : 0;
  a26=(a13*a26);
  a27=(a26/a1);
  a28=(a25*a27);
  a29=(a4*a28);
  a7=(a7-a29);
  a29=arg[0]? arg[0][3] : 0;
  a30=sin(a29);
  a7=(a7*a30);
  a30=(a8*a4);
  a31=3.3803818954086950e-01;
  a31=(a31*a14);
  a32=(a1*a31);
  a33=(a30*a32);
  a34=4.6021926780173911e-01;
  a21=(a21*a5);
  a21=(a34*a21);
  a35=(a1*a21);
  a33=(a33+a35);
  a35=26445640661418040.;
  a18=(a35*a18);
  a36=(a9*a18);
  a33=(a33+a36);
  a3=(a3*a16);
  a3=(a2*a3);
  a33=(a33+a3);
  a3=(a9*a23);
  a33=(a33-a3);
  a3=(a4*a24);
  a33=(a33-a3);
  a3=(a25*a27);
  a36=(a9*a3);
  a33=(a33-a36);
  a36=cos(a29);
  a33=(a33*a36);
  a7=(a7+a33);
  a7=(-a7);
  if (res[0]!=0) res[0][0]=a7;
  a7=cos(a29);
  a33=sin(a0);
  a36=(a10*a33);
  a36=(a12*a36);
  a37=(a6*a33);
  a36=(a36-a37);
  a37=(a23/a1);
  a37=(a37*a33);
  a38=(a4*a37);
  a36=(a36-a38);
  a38=(a27/a1);
  a38=(a38*a33);
  a39=(a25*a38);
  a39=(a26+a39);
  a39=(a4*a39);
  a36=(a36-a39);
  a36=(a7*a36);
  a39=sin(a29);
  a40=(a31*a33);
  a41=(a30*a40);
  a42=(a21*a33);
  a41=(a41+a42);
  a37=(a9*a37);
  a41=(a41+a37);
  a37=(a25*a38);
  a37=(a26+a37);
  a37=(a9*a37);
  a41=(a41+a37);
  a41=(a39*a41);
  a36=(a36+a41);
  if (res[0]!=0) res[0][1]=a36;
  a36=cos(a29);
  a41=(a4*a36);
  a41=(a11*a41);
  a37=sin(a29);
  a42=(a9*a37);
  a42=(a35*a42);
  a41=(a41-a42);
  a41=(a15*a41);
  a42=(a32*a37);
  a42=(a4*a42);
  a43=(a12*a36);
  a43=(a1*a43);
  a43=(a9*a43);
  a42=(a42+a43);
  a41=(a41-a42);
  if (res[0]!=0) res[0][2]=a41;
  a41=(a2*a5);
  a42=(a1*a41);
  a19=(a19-a42);
  a19=(a19-a23);
  a19=(a19-a28);
  a19=(a7*a19);
  a28=(a32*a8);
  a42=(a2*a16);
  a28=(a28-a42);
  a28=(a28-a24);
  a28=(a39*a28);
  a19=(a19-a28);
  if (res[0]!=0) res[0][3]=a19;
  a19=(a1*a8);
  a19=(a12*a19);
  a28=(a20*a16);
  a19=(a19+a28);
  a24=(a24-a19);
  a7=(a7*a24);
  a24=(a34*a5);
  a19=(a1*a24);
  a18=(a18-a19);
  a18=(a18-a23);
  a18=(a18-a3);
  a39=(a39*a18);
  a7=(a7-a39);
  if (res[0]!=0) res[0][4]=a7;
  a7=(a1*a36);
  a7=(a2*a7);
  a7=(a5*a7);
  a39=(a2*a37);
  a39=(a16*a39);
  a7=(a7-a39);
  if (res[0]!=0) res[0][5]=a7;
  a20=(a20*a36);
  a16=(a16*a20);
  a37=(a1*a37);
  a37=(a34*a37);
  a37=(a5*a37);
  a16=(a16-a37);
  if (res[0]!=0) res[0][6]=a16;
  a16=(a4*a9);
  a37=-2.8968800000000020e-02;
  a37=(a37*a14);
  a16=(a16*a37);
  a14=-9.3212278260869572e-02;
  a20=arg[0]? arg[0][105] : 0;
  a20=(a20-a8);
  a20=(a20*a5);
  a20=(a14*a20);
  a16=(a16+a20);
  a20=arg[2]? arg[2][11] : 0;
  a36=arg[0]? arg[0][70] : 0;
  a7=arg[1]? arg[1][9] : 0;
  a13=(a13*a7);
  a7=(a36*a13);
  a39=(a20*a7);
  a16=(a16-a39);
  a39=arg[2]? arg[2][12] : 0;
  a18=arg[0]? arg[0][69] : 0;
  a3=(a18*a13);
  a23=(a39*a3);
  a16=(a16+a23);
  a23=arg[2]? arg[2][8] : 0;
  a19=arg[0]? arg[0][67] : 0;
  a28=(a19*a13);
  a42=(a23*a28);
  a16=(a16-a42);
  a42=arg[2]? arg[2][9] : 0;
  a43=arg[0]? arg[0][66] : 0;
  a44=(a43*a13);
  a45=(a42*a44);
  a16=(a16+a45);
  a45=arg[2]? arg[2][5] : 0;
  a46=arg[0]? arg[0][64] : 0;
  a47=(a46*a13);
  a48=(a45*a47);
  a16=(a16-a48);
  a48=arg[2]? arg[2][6] : 0;
  a49=arg[0]? arg[0][63] : 0;
  a50=(a49*a13);
  a51=(a48*a50);
  a16=(a16+a51);
  a51=arg[2]? arg[2][3] : 0;
  a52=arg[0]? arg[0][60] : 0;
  a53=(a52*a13);
  a54=(a51*a53);
  a16=(a16+a54);
  a54=arg[2]? arg[2][2] : 0;
  a55=arg[0]? arg[0][61] : 0;
  a56=(a55*a13);
  a57=(a54*a56);
  a16=(a16-a57);
  a57=sin(a29);
  a58=(a4*a57);
  a59=(a58*a27);
  a16=(a16-a59);
  a29=cos(a29);
  a59=(a9*a29);
  a60=(a59*a27);
  a16=(a16-a60);
  a60=sin(a0);
  a16=(a16*a60);
  a60=cos(a0);
  a61=(a58*a38);
  a62=(a59*a38);
  a61=(a61+a62);
  a61=(a60*a61);
  a16=(a16+a61);
  a30=(a30*a29);
  a30=(a30*a31);
  a12=(a57*a12);
  a10=(a10*a12);
  a30=(a30-a10);
  a21=(a29*a21);
  a30=(a30+a21);
  a6=(a57*a6);
  a30=(a30+a6);
  a6=arg[0]? arg[0][5] : 0;
  a21=cos(a6);
  a10=(a39*a21);
  a61=sin(a6);
  a62=(a20*a61);
  a10=(a10-a62);
  a62=arg[0]? arg[0][71] : 0;
  a63=(a62*a13);
  a64=(a10*a63);
  a30=(a30+a64);
  a64=arg[2]? arg[2][13] : 0;
  a65=(a21*a7);
  a65=(a64*a65);
  a30=(a30-a65);
  a65=(a61*a3);
  a65=(a64*a65);
  a30=(a30+a65);
  a65=(a42*a21);
  a66=(a23*a61);
  a65=(a65-a66);
  a66=arg[0]? arg[0][68] : 0;
  a67=(a66*a13);
  a68=(a65*a67);
  a30=(a30+a68);
  a68=arg[2]? arg[2][10] : 0;
  a69=(a21*a28);
  a69=(a68*a69);
  a30=(a30-a69);
  a69=(a61*a44);
  a69=(a68*a69);
  a30=(a30+a69);
  a69=(a48*a21);
  a70=(a45*a61);
  a69=(a69-a70);
  a70=arg[0]? arg[0][65] : 0;
  a71=(a70*a13);
  a72=(a69*a71);
  a30=(a30+a72);
  a72=arg[2]? arg[2][7] : 0;
  a73=(a21*a47);
  a73=(a72*a73);
  a30=(a30-a73);
  a73=(a61*a50);
  a73=(a72*a73);
  a30=(a30+a73);
  a73=(a51*a21);
  a74=(a54*a61);
  a73=(a73-a74);
  a74=arg[0]? arg[0][62] : 0;
  a75=(a74*a13);
  a76=(a73*a75);
  a30=(a30+a76);
  a76=arg[2]? arg[2][4] : 0;
  a77=(a61*a53);
  a77=(a76*a77);
  a30=(a30+a77);
  a77=(a21*a56);
  a77=(a76*a77);
  a30=(a30-a77);
  a77=(a9*a29);
  a78=(a4*a57);
  a77=(a77+a78);
  a77=(a77/a1);
  a78=(a77/a1);
  a79=(a78*a22);
  a30=(a30+a79);
  a79=(a8*a1);
  a80=(a59*a25);
  a79=(a79+a80);
  a80=(a58*a25);
  a79=(a79+a80);
  a79=(a79/a1);
  a80=(a79/a1);
  a81=(a80*a26);
  a30=(a30+a81);
  a81=(a8*a27);
  a30=(a30-a81);
  a81=cos(a0);
  a30=(a30*a81);
  a81=sin(a0);
  a77=(a77/a1);
  a77=(a77*a33);
  a77=(a77/a1);
  a78=(a78/a1);
  a78=(a78*a33);
  a77=(a77+a78);
  a77=(a22*a77);
  a0=cos(a0);
  a59=(a59*a0);
  a78=(a8*a33);
  a59=(a59-a78);
  a58=(a58*a0);
  a59=(a59+a58);
  a59=(a59/a1);
  a79=(a79/a1);
  a79=(a79*a33);
  a59=(a59+a79);
  a59=(a59/a1);
  a80=(a80/a1);
  a80=(a80*a33);
  a59=(a59+a80);
  a59=(a26*a59);
  a77=(a77+a59);
  a38=(a8*a38);
  a77=(a77-a38);
  a77=(a81*a77);
  a30=(a30+a77);
  a16=(a16+a30);
  a16=(-a16);
  if (res[0]!=0) res[0][7]=a16;
  a16=cos(a6);
  a30=(a63*a33);
  a77=(a20*a30);
  a38=(a64*a33);
  a59=(a3*a38);
  a77=(a77-a59);
  a59=(a67*a33);
  a80=(a23*a59);
  a77=(a77+a80);
  a80=(a68*a33);
  a79=(a44*a80);
  a77=(a77-a79);
  a79=(a71*a33);
  a58=(a45*a79);
  a77=(a77+a58);
  a58=(a72*a33);
  a78=(a50*a58);
  a77=(a77-a78);
  a78=(a75*a33);
  a82=(a54*a78);
  a77=(a77+a82);
  a82=(a76*a33);
  a83=(a53*a82);
  a77=(a77-a83);
  a16=(a16*a77);
  a77=sin(a6);
  a83=(a64*a33);
  a84=(a7*a83);
  a30=(a39*a30);
  a84=(a84-a30);
  a59=(a42*a59);
  a84=(a84-a59);
  a59=(a68*a33);
  a30=(a28*a59);
  a84=(a84+a30);
  a79=(a48*a79);
  a84=(a84-a79);
  a79=(a72*a33);
  a30=(a47*a79);
  a84=(a84+a30);
  a78=(a51*a78);
  a84=(a84-a78);
  a78=(a76*a33);
  a30=(a56*a78);
  a84=(a84+a30);
  a77=(a77*a84);
  a16=(a16-a77);
  if (res[0]!=0) res[0][8]=a16;
  a16=(a12*a33);
  a16=(a9*a16);
  a40=(a29*a40);
  a40=(a4*a40);
  a16=(a16-a40);
  a14=(a14*a0);
  a14=(a5*a14);
  a16=(a16-a14);
  if (res[0]!=0) res[0][9]=a16;
  a9=(a37*a9);
  a16=(a27*a57);
  a9=(a9-a16);
  a9=(a60*a9);
  a16=(a29*a8);
  a31=(a31*a16);
  a41=(a57*a41);
  a31=(a31-a41);
  a41=(a57/a1);
  a41=(a41/a1);
  a41=(a22*a41);
  a31=(a31+a41);
  a41=(a25*a57);
  a41=(a41/a1);
  a41=(a41/a1);
  a41=(a26*a41);
  a31=(a31+a41);
  a31=(a81*a31);
  a9=(a9-a31);
  if (res[0]!=0) res[0][10]=a9;
  a4=(a37*a4);
  a27=(a27*a29);
  a4=(a4-a27);
  a60=(a60*a4);
  a4=(a29/a1);
  a4=(a4/a1);
  a22=(a22*a4);
  a8=(a12*a8);
  a24=(a29*a24);
  a8=(a8+a24);
  a22=(a22-a8);
  a8=(a25*a29);
  a8=(a8/a1);
  a8=(a8/a1);
  a26=(a26*a8);
  a22=(a22+a26);
  a81=(a81*a22);
  a60=(a60-a81);
  if (res[0]!=0) res[0][11]=a60;
  a60=(a51*a0);
  a82=(a61*a82);
  a60=(a60-a82);
  a60=(a13*a60);
  if (res[0]!=0) res[0][12]=a60;
  a60=(a54*a0);
  a78=(a21*a78);
  a60=(a60-a78);
  a60=(a13*a60);
  a60=(-a60);
  if (res[0]!=0) res[0][13]=a60;
  a73=(a73*a33);
  a73=(a13*a73);
  a73=(-a73);
  if (res[0]!=0) res[0][14]=a73;
  a73=(a48*a0);
  a58=(a61*a58);
  a73=(a73-a58);
  a73=(a13*a73);
  if (res[0]!=0) res[0][15]=a73;
  a73=(a45*a0);
  a79=(a21*a79);
  a73=(a73-a79);
  a73=(a13*a73);
  a73=(-a73);
  if (res[0]!=0) res[0][16]=a73;
  a69=(a69*a33);
  a69=(a13*a69);
  a69=(-a69);
  if (res[0]!=0) res[0][17]=a69;
  a69=(a42*a0);
  a80=(a61*a80);
  a69=(a69-a80);
  a69=(a13*a69);
  if (res[0]!=0) res[0][18]=a69;
  a69=(a23*a0);
  a59=(a21*a59);
  a69=(a69-a59);
  a69=(a13*a69);
  a69=(-a69);
  if (res[0]!=0) res[0][19]=a69;
  a65=(a65*a33);
  a65=(a13*a65);
  a65=(-a65);
  if (res[0]!=0) res[0][20]=a65;
  a65=(a39*a0);
  a61=(a61*a38);
  a65=(a65-a61);
  a65=(a13*a65);
  if (res[0]!=0) res[0][21]=a65;
  a0=(a20*a0);
  a21=(a21*a83);
  a0=(a0-a21);
  a0=(a13*a0);
  a0=(-a0);
  if (res[0]!=0) res[0][22]=a0;
  a10=(a10*a33);
  a10=(a13*a10);
  a10=(-a10);
  if (res[0]!=0) res[0][23]=a10;
  if (res[0]!=0) res[0][24]=a14;
  a14=(a57*a33);
  a2=(a2*a14);
  a2=(a5*a2);
  a2=(-a2);
  if (res[0]!=0) res[0][25]=a2;
  a33=(a29*a33);
  a34=(a34*a33);
  a5=(a5*a34);
  a5=(-a5);
  if (res[0]!=0) res[0][26]=a5;
  a36=(a36*a17);
  a36=(a64*a36);
  a62=(a62*a17);
  a5=(a39*a62);
  a36=(a36-a5);
  a66=(a66*a17);
  a5=(a42*a66);
  a36=(a36-a5);
  a19=(a19*a17);
  a19=(a68*a19);
  a36=(a36+a19);
  a70=(a70*a17);
  a19=(a48*a70);
  a36=(a36-a19);
  a46=(a46*a17);
  a46=(a72*a46);
  a36=(a36+a46);
  a55=(a55*a17);
  a55=(a76*a55);
  a36=(a36+a55);
  a74=(a74*a17);
  a55=(a51*a74);
  a36=(a36-a55);
  a63=(a1*a63);
  a55=(a20*a63);
  a36=(a36-a55);
  a55=(a64*a1);
  a3=(a55*a3);
  a36=(a36+a3);
  a67=(a1*a67);
  a3=(a23*a67);
  a36=(a36-a3);
  a3=(a68*a1);
  a44=(a3*a44);
  a36=(a36+a44);
  a71=(a1*a71);
  a44=(a45*a71);
  a36=(a36-a44);
  a44=(a72*a1);
  a50=(a44*a50);
  a36=(a36+a50);
  a75=(a1*a75);
  a50=(a54*a75);
  a36=(a36-a50);
  a50=(a76*a1);
  a53=(a50*a53);
  a36=(a36+a53);
  a53=sin(a6);
  a36=(a36*a53);
  a18=(a18*a17);
  a18=(a64*a18);
  a62=(a20*a62);
  a18=(a18-a62);
  a66=(a23*a66);
  a18=(a18-a66);
  a43=(a43*a17);
  a43=(a68*a43);
  a18=(a18+a43);
  a70=(a45*a70);
  a18=(a18-a70);
  a49=(a49*a17);
  a49=(a72*a49);
  a18=(a18+a49);
  a52=(a52*a17);
  a52=(a76*a52);
  a18=(a18+a52);
  a74=(a54*a74);
  a18=(a18-a74);
  a63=(a39*a63);
  a18=(a18+a63);
  a63=(a64*a1);
  a7=(a63*a7);
  a18=(a18-a7);
  a67=(a42*a67);
  a18=(a18+a67);
  a67=(a68*a1);
  a28=(a67*a28);
  a18=(a18-a28);
  a71=(a48*a71);
  a18=(a18+a71);
  a71=(a72*a1);
  a47=(a71*a47);
  a18=(a18-a47);
  a75=(a51*a75);
  a18=(a18+a75);
  a75=(a76*a1);
  a56=(a75*a56);
  a18=(a18-a56);
  a56=cos(a6);
  a18=(a18*a56);
  a36=(a36+a18);
  a36=(-a36);
  if (res[0]!=0) res[0][27]=a36;
  a36=cos(a6);
  a50=(a50*a36);
  a50=(a13*a50);
  a6=sin(a6);
  a18=(a76*a6);
  a18=(a17*a18);
  a50=(a50-a18);
  if (res[0]!=0) res[0][28]=a50;
  a76=(a76*a36);
  a76=(a17*a76);
  a75=(a75*a6);
  a75=(a13*a75);
  a76=(a76+a75);
  if (res[0]!=0) res[0][29]=a76;
  a76=(a51*a6);
  a75=(a54*a36);
  a76=(a76+a75);
  a76=(a1*a76);
  a76=(a13*a76);
  a51=(a51*a36);
  a54=(a54*a6);
  a51=(a51-a54);
  a51=(a17*a51);
  a76=(a76+a51);
  a76=(-a76);
  if (res[0]!=0) res[0][30]=a76;
  a44=(a44*a36);
  a44=(a13*a44);
  a76=(a72*a6);
  a76=(a17*a76);
  a44=(a44-a76);
  if (res[0]!=0) res[0][31]=a44;
  a72=(a72*a36);
  a72=(a17*a72);
  a71=(a71*a6);
  a71=(a13*a71);
  a72=(a72+a71);
  if (res[0]!=0) res[0][32]=a72;
  a72=(a48*a6);
  a71=(a45*a36);
  a72=(a72+a71);
  a72=(a1*a72);
  a72=(a13*a72);
  a48=(a48*a36);
  a45=(a45*a6);
  a48=(a48-a45);
  a48=(a17*a48);
  a72=(a72+a48);
  a72=(-a72);
  if (res[0]!=0) res[0][33]=a72;
  a3=(a3*a36);
  a3=(a13*a3);
  a72=(a68*a6);
  a72=(a17*a72);
  a3=(a3-a72);
  if (res[0]!=0) res[0][34]=a3;
  a68=(a68*a36);
  a68=(a17*a68);
  a67=(a67*a6);
  a67=(a13*a67);
  a68=(a68+a67);
  if (res[0]!=0) res[0][35]=a68;
  a68=(a42*a6);
  a67=(a23*a36);
  a68=(a68+a67);
  a68=(a1*a68);
  a68=(a13*a68);
  a42=(a42*a36);
  a23=(a23*a6);
  a42=(a42-a23);
  a42=(a17*a42);
  a68=(a68+a42);
  a68=(-a68);
  if (res[0]!=0) res[0][36]=a68;
  a55=(a55*a36);
  a55=(a13*a55);
  a68=(a64*a6);
  a68=(a17*a68);
  a55=(a55-a68);
  if (res[0]!=0) res[0][37]=a55;
  a64=(a64*a36);
  a64=(a17*a64);
  a63=(a63*a6);
  a63=(a13*a63);
  a64=(a64+a63);
  if (res[0]!=0) res[0][38]=a64;
  a64=(a39*a6);
  a63=(a20*a36);
  a64=(a64+a63);
  a64=(a1*a64);
  a64=(a13*a64);
  a39=(a39*a36);
  a20=(a20*a6);
  a39=(a39-a20);
  a17=(a17*a39);
  a64=(a64+a17);
  a64=(-a64);
  if (res[0]!=0) res[0][39]=a64;
  a32=(a29*a32);
  a11=(a11*a57);
  a11=(a15*a11);
  a32=(a32+a11);
  if (res[0]!=0) res[0][40]=a32;
  a35=(a35*a29);
  a15=(a15*a35);
  a1=(a1*a12);
  a15=(a15-a1);
  if (res[0]!=0) res[0][41]=a15;
  a25=(a25*a37);
  a37=2.8968800000000020e-02;
  a37=(a37*a13);
  a25=(a25+a37);
  if (res[0]!=0) res[0][42]=a25;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_hess_g_leg_complex_to_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_hess_g_leg_complex_to_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_hess_g_leg_complex_to_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_hess_g_leg_complex_to_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_hess_g_leg_complex_to_simple_n_in(void) { return 3;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_hess_g_leg_complex_to_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_hess_g_leg_complex_to_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_hess_g_leg_complex_to_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "lambda";
    case 2: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_hess_g_leg_complex_to_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "hess_g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_hess_g_leg_complex_to_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_hess_g_leg_complex_to_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}



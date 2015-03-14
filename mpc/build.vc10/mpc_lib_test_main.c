
#define MSC_C_(x) #x  
#define MSC_CC_(x)  MSC_C_(x)
#define MSC_VERSION "Microsoft C++ (Version " MSC_CC_(_MSC_FULL_VER) ")"
#define MPC_CC MSC_VERSION

#define main tabs
#include "..\tests\tabs.c"
#undef main

#define main tadd
#define check_ternary_value ctv1
#include "..\tests\tadd.c"
#undef check_ternary_value
#undef main

#define main tadd_fr
#define check_ternary_value ctv2
#include "..\tests\tadd_fr.c"
#undef check_ternary_value
#undef main

#define main tadd_si
#include "..\tests\tadd_si.c"
#undef main

#define main tadd_ui
#define check_ternary_value ctv3
#include "..\tests\tadd_ui.c"
#undef check_ternary_value
#undef main

#define main targ
#include "..\tests\targ.c"
#undef main

#define main tconj
#include "..\tests\tconj.c"
#undef main

#define main tcos
#include "..\tests\tcos.c"
#undef main

#define main tcosh
#include "..\tests\tcosh.c"
#undef main

#define main tdiv
#include "..\tests\tdiv.c"
#undef main

#define main tdiv_2si
#include "..\tests\tdiv_2si.c"
#undef main

#define main tdiv_2ui
#include "..\tests\tdiv_2ui.c"
#undef main

#define main tdiv_fr
#include "..\tests\tdiv_fr.c"
#undef main

#define main tdtiv_ui
#include "..\tests\tdiv_ui.c"
#undef main

#define main texp
#include "..\tests\texp.c"
#undef main

#define main tfma
#include "..\tests\tfma.c"
#undef main

#define main tfr_div
#include "..\tests\tfr_div.c"
#undef main

#define main tfr_sub
#include "..\tests\tfr_sub.c"
#undef main

#define main tget_version
#include "..\tests\tget_version.c"
#undef main

#define main timag
#include "..\tests\timag.c"
#undef main

#define main tio_str
#include <io.h>
#define dup  _dup
#define dup2 _dup2
#define fileno _fileno
#include "..\tests\tio_str.c"
#undef dup _dup
#undef main

#define main tlog
#include "..\tests\tlog.c"
#undef main

#define main tmul
#define check_regular cr1
#include "..\tests\tmul.c"
#undef check_regular
#undef main

#define main tlog10
#include "..\tests\tlog10.c"
#undef main

#define main tmul_2si
#include "..\tests\tmul_2si.c"
#undef main

#define main tmul_2ui
#include "..\tests\tmul_2ui.c"
#undef main

#define main tmul_fr
#include "..\tests\tmul_fr.c"
#undef main

#define main tmul_i
#include "..\tests\tmul_i.c"
#undef main

#define main tmul_si
#include "..\tests\tmul_si.c"
#undef main

#define main tmul_ui
#include "..\tests\tmul_ui.c"
#undef main

#define main tneg
#include "..\tests\tneg.c"
#undef main

#define main tnorm
#include "..\tests\tnorm.c"
#undef main

#define main tpow
#define reuse_bug reuse_bug1
#include "..\tests\tpow.c"
#undef reuse_bug
#undef main

#define main tprec
#include "..\tests\tprec.c"
#undef main

#define main tproj
#include "..\tests\tproj.c"
#undef main

#define main treal
#include "..\tests\treal.c"
#undef main

#define main treimref
#include "..\tests\treimref.c"
#undef main

#define main tset
#include "..\tests\tset.c"
#undef main

#define main tsin
#include "..\tests\tsin.c"
#undef main

#define main tsin_cos
#include "..\tests\tsin_cos.c"
#undef main

#define main tsqr
#define reuse_bug reuse_bug2
#include "..\tests\tsqr.c"
#undef reuse_bug
#undef main

#define main tsqrt
#include "..\tests\tsqrt.c"
#undef main

#define main tstrtoc
#define check_file cf1
#include "..\tests\tstrtoc.c"
#undef check_file
#undef main

#define main tsub
#include "..\tests\tsub.c"
#undef main

#define main tsub_fr
#include "..\tests\tsub_fr.c"
#undef main

#define main tsub_ui
#include "..\tests\tsub_ui.c"
#undef main

#define main tswap
#include "..\tests\tswap.c"
#undef main

#define main ttan
#define test_failed tf1
#define pure_real_argument pra1
#define pure_imaginary_argument pia1
#include "..\tests\ttan.c"
#undef pure_real_argument
#undef pure_imaginary_argument
#undef test_failed
#undef main

#define main tui_div
#define special _special
#include "..\tests\tui_div.c"
#undef special
#undef main

#define main tui_ui_sub
#include "..\tests\tui_ui_sub.c"
#undef main

#define main tacos
#include "..\tests\tacos.c"
#undef main

#define main tacosh
#define bug20091120 bug20091120_c
#include "..\tests\tacosh.c"
#undef bug20091120
#undef main

#define main tasin
#define bug20091120 bug20091120_s
#include "..\tests\tasin.c"
#undef main

#define main tasinh
#define bug20091120 bug20091120_t
#include "..\tests\tasinh.c"
#undef bug20091120
#undef main

#define main tatan
#include "..\tests\tatan.c"
#undef bug20091120
#undef main

#define main tatanh
#include "..\tests\tatanh.c"
#undef main

#define main tpow_d
#include "..\tests\tpow_d.c"
#undef main

#define main tpow_fr
#include "..\tests\tpow_fr.c"
#undef main

#define main tpow_ld
#include "..\tests\tpow_ld.c"
#undef main

#define main tpow_si
#define compare_mpc_pow compare_mpc_pow_si
#include "..\tests\tpow_si.c"
#undef compare_mpc_pow
#undef main

#define main tpow_ui
#define compare_mpc_pow compare_mpc_pow_ui
#include "..\tests\tpow_ui.c"
#undef compare_mpc_pow
#undef main

#define main tpow_z
#include "..\tests\tpow_z.c"
#undef main

int main(void)
{
    tabs();
    tadd();
    tadd_fr();
    tadd_ui();
    targ();
    tconj();
    tcos();
    tcosh();
    tdiv();
    tdiv_2si();
    tdiv_2ui();
    tdiv_fr();
    tdtiv_ui();
    texp();
    tfma();
    tfr_div();
    tfr_sub();
    tget_version();
    timag();
    tio_str();
    tlog();
    tmul();
    tmul_2si();
    tmul_2ui();
    tmul_fr();
    tmul_i();
    tmul_si();
    tmul_ui();
    tneg();
    tnorm();
    tpow();
    tprec();
    tproj();
    treal();
    treimref();
    tset();
    tsin();
    tsqr();
    tsqrt();
    tstrtoc();
    tsub();
    tsub_fr();
    tsub_ui();
    tswap();
    ttan();
    tui_div();
    tui_ui_sub();
}
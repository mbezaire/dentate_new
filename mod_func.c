#include <stdio.h>
#include "hocdec.h"
#define IMPORT extern __declspec(dllimport)
IMPORT int nrnmpi_myid, nrn_nobanner_;

extern void _CaBK_reg();
extern void _Gfluct2_reg();
extern void _LcaMig_reg();
extern void _bgka_reg();
extern void _ccanl_reg();
extern void _exp2sid_reg();
extern void _gskch_reg();
extern void _hyperde3_reg();
extern void _ichan2_reg();
extern void _inhsyn_reg();
extern void _nca_reg();
extern void _ppsyn_reg();
extern void _tca_reg();

void modl_reg(){
	//nrn_mswindll_stdio(stdin, stdout, stderr);
    if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
	fprintf(stderr, "Additional mechanisms from files\n");

fprintf(stderr," CaBK.mod");
fprintf(stderr," Gfluct2.mod");
fprintf(stderr," LcaMig.mod");
fprintf(stderr," bgka.mod");
fprintf(stderr," ccanl.mod");
fprintf(stderr," exp2sid.mod");
fprintf(stderr," gskch.mod");
fprintf(stderr," hyperde3.mod");
fprintf(stderr," ichan2.mod");
fprintf(stderr," inhsyn.mod");
fprintf(stderr," nca.mod");
fprintf(stderr," ppsyn.mod");
fprintf(stderr," tca.mod");
fprintf(stderr, "\n");
    }
_CaBK_reg();
_Gfluct2_reg();
_LcaMig_reg();
_bgka_reg();
_ccanl_reg();
_exp2sid_reg();
_gskch_reg();
_hyperde3_reg();
_ichan2_reg();
_inhsyn_reg();
_nca_reg();
_ppsyn_reg();
_tca_reg();
}

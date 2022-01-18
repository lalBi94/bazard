#ifndef __COMPLX_LIB__
#define __COMPLX_LIB__
typedef stockageComplx stockageComplx;

struct stockageComplx{
    double reel;
    double imaginaire;
};

stockageComplx ajtComplx();
stockageComplx creeComplx(stockageComplx x1, stockageComplx x2);
stockageComplx additionComplx(stockageComplx x1, stockageComplx x2);
stockageComplx multiplicationComplx(stockageComplx x1, stockageComplx x2);
stockageComplx normeComplx(stockageComplx x);
int displayComplx(stockageComplx x);

#endif
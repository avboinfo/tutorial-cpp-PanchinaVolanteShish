#include <stdio.h>
#include <assert.h>

int compra(int N, int M, int A, int B) {  // N è Corse da fare, M corse in 1 carne, A costo di 1 corsa, B costo del carnet
    int x = N/M;
    int v = A*N; // costo tot big singoli
    int Z;

    if (B<A){
        if (N%M!=0)
        {
            x++;
            Z=x*B;
            return Z;
        }else if (x!=0)
        {
            Z=x*B;
            return Z;
        }else{
            return B;
        }
    }
    if (N%M==0){
        int u = x*B;
        if (v>u)
        {
            Z=x*B;
            return Z;
        }else{
            return v;
        }
    }else{
        
    }
    
}
int main() {
    FILE *fr, *fw;
    int N, M, A, B;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);
    return 0;
}

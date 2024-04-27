#include <stdio.h>
#include <assert.h>

int compra(int N, int M, int A, int B) {
    int x = N/M;
    int Z;
    if (B<A){
        
       if (N==M)
       {
        return B;
       }else{
        if (x==0)
        {
            Z = x+1;
            return Z;
        }else{
            Z=N%M
            Z= Z*B;
            return Z;
        }
        
        
       }
    }else if (N==M)
    {
        Z=N*A;
        return Z;
    }else if (x>=1)
    {
        Z= x*B;
        x=N%M;
        x=x*A;
        Z=Z+x;
        return Z;
    }else{
        Z= N*A;
        return Z;
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

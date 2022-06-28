#include <mpi.h>

extern void mat_mul(int, int, int, int);


int main(int argc, char ** argv)
{
    int m_k_n_size = 4096*4;
    int repeats = 20;
    int verbose = 1;

    int size, rank;
    MPI_Init(NULL, NULL);

    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    MPI_Finalize();
    mat_mul(rank, m_k_n_size, repeats, verbose); // TODO multinode supprot
    return 0;
}
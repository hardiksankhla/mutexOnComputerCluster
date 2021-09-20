#include<stdio.h>
#include<mpi.h>
#include<time.h>
int main(argc,argv)
int argc;
char *argv[];
{
int numtasks,rank,rank1,z,tag=1,r,t,msg=1,rep=1,t1,process='w';
r=MPI_Init(&argc,&argv);
if(r!=0)
{
printf("error starting MPI program,Terminating.\n");
MPI_Abort(MPI_COMM_WORLD,r);
}

/*entering th section*/

if(process=='w')
{
state=1;
MPI_Comm_size(MPI_COMM_WORLD,&numtasks);
MPI_Comm_rank(MPI_COMM_WORLD,&rank);
int MPI_Bcast(&msg,1,MPI_Int,int rank,MPI_COMM_WORLD);

t=int stime(time_t *rank);
z=int MPI_Reduce(&rep,1,MPI_Int,MPI_Op op,int rank,MPI_COMM_WORLD);

if(z==1)
{
state=2}
else
{state=1};
}
if(z != 0)
{
MPI_Comm_size(MPI_COMM_WORLD,&numtasks);
MPI_Comm_Rank(MPI_COMM_WORLD,&rank1);
t1=int stime(time_t *rank1);
while (state=2)
{
  while (t1<t2)
   {
    sleep ();
   }

   MPI_Send(&msg,MPI_Int,int rank, tag, MPI_COMM_WORLD);
}


if (process=='c')
{
   state=0;
   MPI_Send(&msg,MPI_Int,int rank,tag,MPI_COMM_WORLD);

}
MPI_Finalise();
}


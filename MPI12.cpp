	
#include <mpi.h>
	#include <stdio.h>

		int main(int argc, char** argv) {
				
				// inicia o ambiente MPI 
			MPI_Init(NULL, NULL);
				// inicia o ambiente MPI
				
				// Obter o número de processos
			int world_size;
			MPI_Comm_size(MPI_COMM_WORLD, &world_size);
				// Obter o número de processos

				
				// Obter a classificação do processo
			int world_rank;
			MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
				// Obter a classificação do processo

				
				// Pega o nome do processador
			char processor_name[MPI_MAX_PROCESSOR_NAME];
			int name_len;
			MPI_Get_processor_name(processor_name, &name_len);
				// Pega o nome do processador 
			
				// Imprimir uma mensagem de olá mundo
			printf("Hello world from processor %s, rank %d out of %d processors\n",
				processor_name, world_rank, world_size);
				// Imprimir uma mensagem de olá mundo

			
				//Finalize o ambiente MPI.
				MPI_Finalize();
				//Finalize o ambiente MPI.
	}


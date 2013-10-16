set terminal pdf size 6.00in,3.00in
set output 'omp_mpi_seq_siz_time.pdf'
set xlabel 'Compute Nodes'
set ylabel 'Time'
plot  "omp_core_time_10.txt" title "OpenMP" with lines,  "mpi_core_time_10.txt" title "MPI" with lines


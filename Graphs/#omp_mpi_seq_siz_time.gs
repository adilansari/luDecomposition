set terminal pdf size 6.00in,3.00in
set output 'omp_siz_time.pdf'
set xlabel 'Matrix Size'
set ylabel 'Time'
plot  "omp_siz_time_16.txt" title "OpenMP" with lines,  "mpi_siz_time_16.txt" title "MPI" with lines, "seq.txt" title "Sequential" with lines


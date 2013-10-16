set terminal pdf size 6.00in,3.00in
set output 'mpi_core_time.pdf'
set xlabel 'Compute Nodes'
set ylabel 'Time'
plot  "mpi_core_time_10.txt" title "MatrixSize 10000" with lines,  "mpi_core_time_5.txt" title "MatrixSize 5000" with lines


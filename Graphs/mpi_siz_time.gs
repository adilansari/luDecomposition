set terminal pdf size 6.00in,3.00in
set output 'mpi_siz_time.pdf'
set xlabel 'Matrix Size'
set ylabel 'Time'
plot  "mpi_siz_time_16.txt" title "16 Cores" with lines,  "mpi_siz_time_32.txt" title "32 Cores" with lines


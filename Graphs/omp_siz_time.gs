set terminal pdf size 6.00in,3.00in
set output 'omp_siz_time.pdf'
set xlabel 'Matrix Size'
set ylabel 'Time'
plot  "omp_siz_time_16.txt" title "16 Cores" with lines,  "omp_siz_time_32.txt" title "32 Cores" with lines


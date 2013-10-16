set terminal pdf size 6.00in,3.00in
set output 'omp_core_time.pdf'
set xlabel 'Number of Threads'
set ylabel 'Time'
set style line 1 lw 4
plot  "omp_core_time_10.txt" title "MatrixSize 10000" with lines,  "omp_core_time_20.txt" title "MatrixSize 20000" with lines


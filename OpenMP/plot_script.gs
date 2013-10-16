set terminal pdf size 7.00in,5.00in
set dgrid3d 30,30
set hidden3d
set output 'Plot.pdf'
set xlabel 'Matrix Size'
set zlabel 'Time'
set ylabel 'Number of Threads'
splot "output.txt" title 'OpenMP Execution' with lines

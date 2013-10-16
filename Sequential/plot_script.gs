set terminal pdf size 6.00in,4.00in
set output 'Plot.pdf'
set xlabel 'Matrix Size'
set ylabel 'Time(seconds)'
plot "output.txt" title 'Sequential' with lines

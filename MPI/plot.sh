#!/bin/bash

# Generating Plot for output, works with gnuPlot

echo Generating Plot using gnuplot

echo output set to "Plot.pdf"
gnuplot plot_script.gs


gnome-open Plot.pdf















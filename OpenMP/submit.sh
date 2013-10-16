#!/bin/bash

# Submit script for OpenMP

echo Submitting OpenMP job for Matrix Size = 1000
sbatch submit_1x

echo Submitting OpenMP job for Matrix Size = 5000
sbatch submit_5x

echo Submitting OpenMP job for Matrix Size = 10,000
sbatch submit_10x

echo Submitting OpenMP job for Matrix Size = 20,000
sbatch submit_20x






#!/bin/bash

# Submit script for MPI

echo Submitting MPI job for Matrix Size= 1000 Processors=8
sbatch submit_1x8

echo Submitting MPI job for Matrix Size= 1000 Processors=16
sbatch submit_1x16

echo Submitting MPI job for Matrix Size= 1000 Processors=32
sbatch submit_1x32

echo Submitting MPI job for Matrix Size= 10,000 Processors=8
sbatch submit_10x8


echo Submitting MPI job for Matrix Size= 10,000 Processors=16
sbatch submit_10x16


echo Submitting MPI job for Matrix Size= 10,000 Processors=32
sbatch submit_10x32


echo Submitting MPI job for Matrix Size= 5,000 Processors=8
sbatch submit_5x8


echo Submitting MPI job for Matrix Size= 5,000 Processors=16
sbatch submit_5x16

echo Submitting MPI job for Matrix Size= 5,000 Processors=32
sbatch submit_5x32



<h1>A-New-Approach-to-Mergesort-Algorithm--Divide-Smart-and-Conquer</h1>

<b>Contents</b>
<br></br>
1- File structure of Repository
<br></br>
2- Data Availability
<br></br>
3- Testing and Getting Results from Sorting Algorithms
<br></br>
<br></br>
<h1><b>1- File structure of Repository</b></h1>

We design the repository as a 3 section to make everyting clearly. Sorting algorithms that used in paper , data generator scripts and sample mini data for testing.
<br></br>
<h3><b>A- Sorting Algorithms</b></h3>
It consists of 7 .c files which are all of the sorting algorithms used in paper. These algorithms are Algorithm-1, Algorithm-2, Algorithm-3, Heapsort,Mergesort, Quicksort and Insertion sort.
<h3><b>B- Data Genarator Scripts</b></h3>
Includes creating data scripts for each distribution used in paper. For example, gaussian.m script genarates all of gaussian distrubuted data.
<h3><b>C- Sample Data</b></h3>
Includes small portion of the data used in validating and testing our sorting algorithm.
<h1><b>2- Data Availability</b></h1>
We open dataset in kaggle to store all of the data. The data set consists of gaussian, uniform and 5 special cases. <br></br>
The link is : https://www.kaggle.com/datasets/bekiremirhanakay/benchmark-dataset-for-sorting-algorithms
<h1><b>3- Testing and Getting Results from Sorting Algorithms</b></h1>
We give simple testing execution for algorithm-3 all process will be same process for other algorithms.
<br></br>
Firstly, compile the code in linux terminal as : &nbsp;&nbsp;&nbsp;g++ algorithm3_proposed_algorithm.c
<br></br>
Secondly, try with 1 million gaussian input with writing : &nbsp;&nbsp;&nbsp;./a.out 1000000 < gaussian-input-1000000-1-float.txt
<br></br>
Output of the code is the time of the execution of the algorithm in terms of second


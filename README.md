<h1>A-New-Approach-to-Mergesort-Algorithm--Divide-Smart-and-Conquer</h1>

<b>Contents
<br></br>
1- File structure of Repository
<br></br>
2- Data Availability
<br></br>
3- Data Description
<br></br>
4- Testing and Getting Results from Sorting Algorithms
<br></br>
<br></br></b>
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
<h1><b>3- Data Description</b></h1>
There are 1212 different arrays in each of the two data
sets. These arrays are categorized into 5 different groups. In
the first group, we have 100 arrays with different sizes. The
first array in this group consists of 1000 numbers and the
size of each successive array increases by 1000 and the size
of the last array is 100000. In the second group, we have 180
arrays with different sizes. The first array in the second group
consists of 105000 numbers and the size of each successive
array increases by 5000 and the size of the last array is
1000000. In the third group, we have 100 arrays with different sizes. The first array in this group consists of 1010000
numbers and the size of each successive array increases by
10000 and the size of the last array is 2000000. In the fourth
group, we have 20 arrays with different sizes. These sizes
are 2050000, 2100000, 2150000,…, 3000000, respectively.
The dimensions of 4 arrays in the last group with different
sizes are 3250000, 3500000, 3750000, and 4000000. Thus,
in each group, there are 404 arrays of different sizes. We
obtained 1212 arrays in each data set by randomly generating
three arrays of each size. In the tests, the algorithms were run
for 3 arrays of the same size, and the average of the running
times was taken as the running time for an array of this size.
The numbers in both data sets are floating point numbers
and are not ordered because they are randomly generated. In
the first data set with a uniform distribution, the numbers
vary randomly between 0 and 30000000. A standard normal
distribution was used for the numbers with a Gaussian
distribution.
<h1><b>4- Testing and Getting Results from Sorting Algorithms</b></h1>
We give simple testing execution for algorithm-3 all process will be same process for other algorithms.
<br></br>
Firstly, compile the code in linux terminal as : &nbsp;&nbsp;&nbsp;g++ algorithm3_proposed_algorithm.c
<br></br>
Secondly, try with 1 million gaussian input with writing : &nbsp;&nbsp;&nbsp;./a.out 1000000 < gaussian-input-1000000-1-float.txt
<br></br>
Output of the code is the time of the execution of the algorithm in terms of second

<h3><b>Citation:</b></h3>
Please give an refernces for the using the dataset to authors of the dataset:
Sahin Emrah AMRAHOV,Yilmaz AR,Bulent TUGRUL,Bekir Emirhan AKAY
<br></br>
<b>Future Generation Computer Systems</b>
<br></br>
<b>DOI: https://doi.org/10.1016/j.future.2024.03.049</b>

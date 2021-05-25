/*
[문제]
2. 다음 변수 선언 문장에서 문법 오류가 있는 문장을 찾아 수정하시오.

1 전역변수: auto int n;
 => int n;
2 전역변수: register double yield;
 => 그대로 

 register   : CPU MEMORY    1MB 가장빠르고 비싸다.
 MEMORY     : RAM           4GB 보통
 DISK       : HDD, SSD     1TB  가장싸다.

3 전역변수: global static double data; 
 => static double data;
4 전역변수: global int age;
 =>  int age;
5 전역변수: static int input;
 => static int input
6 지역변수 external int a;
 => int a;
7 지역변수: int static double data;
 => static int data;
8 지역변수: automatic char ch;
 => auto char ch;
9 지역변수: static auto int b;
 => static auto int b;
10 지역변수: double extern rate;
 => double rate;

*/
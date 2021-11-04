/* csv2report.c */
/* code TBA */


// Example of what I want to acheive
/*
$ cat mydata.csv
Example CSV Data for conversion
Col1,Col2,Col3,Col4,Col5
DataR1C1,DataR1C2,DataR1C3,DataR1C4,DataR1C5
DataR2C1,DataR2C2,DataR2C3,DataR2C4,DataR2C5
Data
$
$ csv2report mydata.csv
---
Col1................DataR1C1
Col2................DataR1C2
Col3................DataR1C3
Col4................DataR1C4
Col5................DataR1C5
---
Col1................DataR2C1
Col2................DataR2C2
Col3................DataR2C3
Col4................DataR2C4
Col5................DataR2C5
...and so on


....or....

---
Col1:
  DataR1C1
  
Col2:
  DataR1C2
  
Col3:
  DataR1C3

Col4:
  DataR1C4

Col5:
  DataR1C5


---
Col1
  DataR2C1

Col2
  DataR2C2

Col3
  DataR2C3

Col4
  DataR2C4

Col5
  DataR2C5


...and so on....

or maybe a choice of options?

*/


# ch02-aggregation-relationship
## Demonstrates an aggregation relationship between three classes

In this example, we've changed the **Student** and **Teacher** classes to hold vectors of pointers to **Course** objects rather than directly creating **Course** objects within them. This way, the **Course** objects are owned by the **main()** function and not by the **Student** and **Teacher** objects. This is the essence of **aggregation**: the Student and Teacher objects aggregate Course objects that are owned by someone else.

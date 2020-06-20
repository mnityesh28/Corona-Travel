# Corona-Travel
Corona Travel is an application of Dijkstra's algorithm(Shortest Path Algorithm) (Graph Theory) and Dynamic Programming.
# Project Probelm Statement:
Covid-19 caused by CoronaVirus has caused several damages to various countries in the World. It has
trapped the world inside their Homes. Till Present, there is no vaccine available so going out of Home
is highly avoided. In this Project, We have made travelling during this pandemic by measuring the
Corona Index. According to the project, we have made Government conventions about the Corona
Index(CI) and severity caused by the Index. Every road which connects the cities is having a Corona
Index(CI) associated it with. So if a person travels through these roads while covering from one city to
another the Corona Index(CI) of that road will be injected in his body and once he reaches the
destination He will be Tested and this Parameter will be highly considered and based on this He will
be kept under Government cover and has to follow guidelines associated with it. By Convention, You
are Government Official and the Government has provided you with the Corona Index(CI) impact in
the Human's Body and has provided a number which tells the next step after the Person has reached
the destination and has undergone a test. So, Help the Government in fighting Covid-19.
# Input:
 You are given ‘N’ cities with source as City 1. You are given ‘M’ bi-directional roads connecting these
cities with Every Route having a Corona Index( CI ) associated with it. While representing a road you have
to give three parameters, in which first two parameters take the city name conveying Road between them
and the third parameter giving us the Corona Index( CI ) of the route. Being an individual you have to
make the shortest route possible considering the city which has less Corona Index, and at the end sum of
indexes he got while travelling will be compared with the Government provided index and necessary
measures will be taken accordingly.
But to your rescue, you have ‘ L ’ special offer/s, which means while travelling from City 1 to any other
city we can select utmost ‘ L ’ roads and the Local Government of that city will provide you with
Quarantine Suits so that the Corona Index of that city will not be counted towards your whole journey.
Now Being a Government Official, you have been assigned a duty to calculate the sum of indexes of an
individual through the shortest route he/she has travelled and compare the figures with Government
provided Figures and tell the individual to take necessary actions.
# Output:
You need to print what measures need to be taken while an individual travels to each city from City 1 to
City 2,3 upto N for each city.
(Remember: We need to provide answer for each destination city separately i.e we have L offers for every
city and not as a whole)

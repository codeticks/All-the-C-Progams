#include <iostream>
2. using namespace std;
3. class Person {
4. public:
5. int age;
6. Person(int initialAge);
7. void amIOld();
8. void yearPasses();
9. };
10. Person::Person(int initialAge)
11. {
12. // Add some more code to run some checks on initialAge
13. if (initialAge > 0) age = initialAge;
14. else
15. {
16. cout << "Age is not valid, setting age to 0." << endl;
17. age = 0;
18. }
19. }
20. void Person::amIOld()
21. {
22. // Do some computations in here and print out the correct statement to the console
23. if (age < 13) cout << "You are young." << endl;
24. else if (age < 18) cout << "You are a teenager." << endl;
25. else cout << "You are old." << endl;
26. }
27. void Person::yearPasses()
28. {
29. // Increment the age of the person in here
30. age++;
31. }
32. int main()
33. {
34. int t;
35. int age;
36. cin >> t;
37. for (int i = 0; i < t; i++)
38. {
39. cin >> age;
40. Person p(age);
41. p.amIOld();
42. for (int j = 0; j < 3; j++)
43. {
44. p.yearPasses();
45. }
46. p.amIOld();
47. cout << '\n';
48. }
49. return 0;
50. }
51.
52.
53.
[![kwuest's 42 C Piscine C 02 Score](https://badge42.vercel.app/api/v2/clb55h6z600300fkzy9cemaa4/project/2906558)](https://github.com/JaeSeoKim/badge42) 65%
```diff
+ ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: OK | ex09: OK | 
- ex10: Nothing turned in | ex11: Nothing turned in | ex12: Nothing turned in
```

### ex10: Post piscine attempt: 

Reproduce the behavior of the function strlcpy (man strlcpy).

Test Output
```
kwuest:/mnt/c/Code/C/C02/ex10$ ./a.out hellothere 7
Source Input      : "hellothere"
Limited by        : 7 bytes
Destination Output: "hellot"
```

### ex11: Post piscine attempt: 

Create a function that displays a string of characters onscreen. If this string contains characters that aren’t printable, they’ll have to be displayed in the shape of
hexadecimals (lowercase), preceeded by a "backslash".

• For example :

`Coucou\ntu vas bien ?`

• The function should display :

`Coucou\0atu vas bien ?`

Test Output (including full ascii table)
```
kwuest:/mnt/c/Code/C/C02/ex11$ ./a.out
Coucou\0atu vas bien ?
\00\01\02\03\04\05\06\07\08\09\0a\0b\0c\0d\0e\0f\10\11\12\13\14\15\16\17\18\19\1a\1b\1c\1d\1e\1f !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~\7f
```

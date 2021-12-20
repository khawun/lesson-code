void mainMenu() {

    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("&lt; 1 >  Check Balance\n");
    printf("&lt; 2 >  Deposit\n");
    printf("&lt; 3 >  Withdraw\n");
    printf("&lt; 4 >  Exit\n\n");

}
void checkBalance(float balance) {
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);

}
float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &amp;deposit);


    balance += deposit;

    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;

}
float moneyWithdraw(float balance) {
    float withdraw;
    bool back = true;

    printf("You choose to Withdraw a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);

    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &amp;withdraw);


    if (withdraw &lt; balance) {
        back = false;
        balance -= withdraw;
        printf("\n$$$$Your withdrawing money is:  $%.2f\n", withdraw);
        printf("****Your New Balance is:   $%.2f\n\n", balance);

    }

        else  {

        printf("+++You don't have enough money+++\n");
        printf("Please contact to your Bank Customer Services\n");
        printf("****Your Balance is:   $%.2f\n\n", balance);

    }
    }
    return balance;


}
void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    printf("-----BROUGHT TO YOU BY itsourcecode.com-----\n");


}
int main() {
    //Local Declarations
    int option;
    float balance = 15000.00;
    int choose;

    bool again = true;

    // insert code here...

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &amp;option);


        switch (option) {
            case 1:
             system("CLS");
                checkBalance(balance);
                break;
            case 2:
             system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
             system("CLS");
                balance = moneyWithdraw(balance);
                break;

            case 4:
             system("CLS");
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("&lt; 1 > Yes\n");
        printf("&lt; 2 > No\n");
        scanf("%d", &amp;choose);

        system("CLS");



        if (choose == 2) {
            again = false;
            menuExit();

        }

}


    return 0;
}
In this module which is the main module of the system.

Complete Source Code

#include &lt;stdio.h>
#include &lt;stdlib.h>
#include &lt;stdbool.h>
#include &lt;math.h>

//Functions
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();


//Main Code
int main() {
    //Local Declarations
    int option;
    float balance = 15000.00;
    int choose;

    bool again = true;

    // insert code here...

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &amp;option);


        switch (option) {
            case 1:
            	system("CLS");
                checkBalance(balance);
                break;
            case 2:
            	system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
            	system("CLS");
                balance = moneyWithdraw(balance);
                break;

            case 4:
            	system("CLS");
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("&lt; 1 > Yes\n");
        printf("&lt; 2 > No\n");
        scanf("%d", &amp;choose);

        system("CLS");



        if (choose == 2) {
            again = false;
            menuExit();

        }

}


    return 0;
}//main code



//Functions

void mainMenu() {

    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("&lt; 1 >  Check Balance\n");
    printf("&lt; 2 >  Deposit\n");
    printf("&lt; 3 >  Withdraw\n");
    printf("&lt; 4 >  Exit\n\n");

}//Main Menu

void checkBalance(float balance) {
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);

}//Check Balance

float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &amp;deposit);


    balance += deposit;

    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;

}//money deposit

float moneyWithdraw(float balance) {
    float withdraw;
    bool back = true;

    printf("You choose to Withdraw a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);

    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &amp;withdraw);


    if (withdraw &lt; balance) {
        back = false;
        balance -= withdraw;
        printf("\n$$$$Your withdrawing money is:  $%.2f\n", withdraw);
        printf("****Your New Balance is:   $%.2f\n\n", balance);

    }

        else  {

        printf("+++You don't have enough money+++\n");
        printf("Please contact to your Bank Customer Services\n");
        printf("****Your Balance is:   $%.2f\n\n", balance);

    }
    }
    return balance;


}//money withdraw

void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    printf("-----BROUGHT TO YOU BY itsourcecode.com-----\n");


}//exit menu

void errorMessage() {;
    printf("+++!!!You selected invalid number!!!+++\n");
}//error message


/* Sample Output


******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
&lt; 1 >  Check Balance
&lt; 2 >  Deposit
&lt; 3 >  Withdraw
&lt; 4 >  Exit

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Your Selection:	1
You Choose to See your Balance
****Your Available Balance is:   $15000.00

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
Would you like to do another transaction:
&lt; 1 > Yes
&lt; 2 > No
1
******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
&lt; 1 >  Check Balance
&lt; 2 >  Deposit
&lt; 3 >  Withdraw
&lt; 4 >  Exit

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Your Selection:	2
You choose to Deposit a money
$$$$Your Balance is: $15000.00

****Enter your amount to Deposit
1444
****Your New Balance is:   $16444.00

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
Would you like to do another transaction:
&lt; 1 > Yes
&lt; 2 > No
1
******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
&lt; 1 >  Check Balance
&lt; 2 >  Deposit
&lt; 3 >  Withdraw
&lt; 4 >  Exit

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Your Selection:	3
You choose to Withdraw a money
$$$$Your Balance is: $16444.00

Enter your amount to withdraw:
600000
+++You don't have enough money+++
Please contact to your Bank Customer Services
****Your Balance is:   $16444.00

Enter your amount to withdraw:
14000
$$$$Your withdrawing money is:  $14000.00
****Your New Balance is:   $2444.00

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
Would you like to do another transaction:
&lt; 1 > Yes
&lt; 2 > No
1
******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
&lt; 1 >  Check Balance
&lt; 2 >  Deposit
&lt; 3 >  Withdraw
&lt; 4 >  Exit

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Your Selection:	4
--------------Take your receipt!!!------------------
-----Thank you for using ATM Banking Machine!!!-----
-----BROUGHT TO YOU BY itsourcecode.com!!!-----
Program ended with exit code: 0

*/

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
222
223
224
225
226
227
228
229
230
231
232
233
234
235
236
237
238
239
240
241
242
243
244
245
246
247
248
249
250
251
252
253
254
255
256
257

#include &lt;stdio.h>
#include &lt;stdlib.h>
#include &lt;stdbool.h>
#include &lt;math.h>

//Functions
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();


//Main Code
int main() {
    //Local Declarations
    int option;
    float balance = 15000.00;
    int choose;

    bool again = true;

    // insert code here...

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &amp;option);


        switch (option) {
            case 1:
             system("CLS");
                checkBalance(balance);
                break;
            case 2:
             system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
             system("CLS");
                balance = moneyWithdraw(balance);
                break;

            case 4:
             system("CLS");
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("&lt; 1 > Yes\n");
        printf("&lt; 2 > No\n");
        scanf("%d", &amp;choose);

        system("CLS");



        if (choose == 2) {
            again = false;
            menuExit();

        }

}


    return 0;
}//main code



//Functions

void mainMenu() {

    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("&lt; 1 >  Check Balance\n");
    printf("&lt; 2 >  Deposit\n");
    printf("&lt; 3 >  Withdraw\n");
    printf("&lt; 4 >  Exit\n\n");

}//Main Menu

void checkBalance(float balance) {
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);

}//Check Balance

float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &amp;deposit);


    balance += deposit;

    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;

}//money deposit

float moneyWithdraw(float balance) {
    float withdraw;
    bool back = true;

    printf("You choose to Withdraw a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);

    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &amp;withdraw);


    if (withdraw &lt; balance) {
        back = false;
        balance -= withdraw;
        printf("\n$$$$Your withdrawing money is:  $%.2f\n", withdraw);
        printf("****Your New Balance is:   $%.2f\n\n", balance);

    }

        else  {

        printf("+++You don't have enough money+++\n");
        printf("Please contact to your Bank Customer Services\n");
        printf("****Your Balance is:   $%.2f\n\n", balance);

    }
    }
    return balance;


}//money withdraw

void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    printf("-----BROUGHT TO YOU BY itsourcecode.com-----\n");


}//exit menu

void errorMessage() {;
    printf("+++!!!You selected invalid number!!!+++\n");
}//error message


/* Sample Output


******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
&lt; 1 >  Check Balance
&lt; 2 >  Deposit
&lt; 3 >  Withdraw
&lt; 4 >  Exit

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Your Selection: 1
You Choose to See your Balance
****Your Available Balance is:   $15000.00

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
Would you like to do another transaction:
&lt; 1 > Yes
&lt; 2 > No
1
******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
&lt; 1 >  Check Balance
&lt; 2 >  Deposit
&lt; 3 >  Withdraw
&lt; 4 >  Exit

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Your Selection: 2
You choose to Deposit a money
$$$$Your Balance is: $15000.00

****Enter your amount to Deposit
1444
****Your New Balance is:   $16444.00

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
Would you like to do another transaction:
&lt; 1 > Yes
&lt; 2 > No
1
******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
&lt; 1 >  Check Balance
&lt; 2 >  Deposit
&lt; 3 >  Withdraw
&lt; 4 >  Exit

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Your Selection: 3
You choose to Withdraw a money
$$$$Your Balance is: $16444.00

Enter your amount to withdraw:
600000
+++You don't have enough money+++
Please contact to your Bank Customer Services
****Your Balance is:   $16444.00

Enter your amount to withdraw:
14000
$$$$Your withdrawing money is:  $14000.00
****Your New Balance is:   $2444.00

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
Would you like to do another transaction:
&lt; 1 > Yes
&lt; 2 > No
1
******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
&lt; 1 >  Check Balance
&lt; 2 >  Deposit
&lt; 3 >  Withdraw
&lt; 4 >  Exit

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Your Selection: 4
--------------Take your receipt!!!------------------
-----Thank you for using ATM Banking Machine!!!-----
-----BROUGHT TO YOU BY itsourcecode.com!!!-----
Program ended with exit code: 0

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
void clearInputStream(){
    fflush(stdin);
}
void clearscreen(){
    fflush(stdin);
    system("cls"); // clear screen for windows
}
void holdInput(){
    getch(); // wait for a key
}
void calculator(){
    clearscreen();
    float a,b,result;
    char c;
    printf("@help-> input format:: <number1> <operator> <number2>\n");
    printf("operator list:: (+,addition), (-,subtraction), (*, multiplication), (/,division), (%%,modulus), (^,exponentation)\n");
    scanf("%f %c %f",&a,&c,&b);
    switch(c){
        case '+': 
            result = a + b; break;
        case '-':
            result = a - b; break;
        case '*':
            result = a * b; break;
        case '/':
            result = a / b; break;
        case '%':
            result = (int)a % (int)b; break;
        case '^':
            result = pow(a,b); break;
        default:
            printf("Invalid Input"); break;
    }
    printf("::%.2f\n",result);
    holdInput();
}
void simpleInterest(){
    clearscreen();
    float si, p, r, t;
    printf("Enter:\n");
    printf("Principal :: "); scanf("%f",&p);
    printf("Time (in years) :: "); scanf("%f",&t);
    printf("Rate (in per year) :: "); scanf("%f",&r);
    si = p*r*t/100;
    printf("Simple Interest:: %.2f Amount:: %.2f",si,si+p);
    holdInput();
}
void table(){
    clearscreen();
    int n;
    printf("Enter a number :: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    holdInput();
}
void digitWord(){
    clearscreen();
    int n;
    printf("Enter a digit:: "); 
    scanf("%d", &n);
    switch(n){
        case 0: printf("Zero"); break;
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
        default: printf("Invalid Input");
    }
    holdInput();
}   
void oddEven(){
    clearscreen();
    int n;
    printf("Enter a number:: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even Number");
    }
    else{
        printf("Odd number");
    }
    holdInput();
}
void sumOfDigits(){
    clearscreen();
    int n,sum=0;
    printf("Enter a number:: ");
    scanf("%d",&n);
    while(n>0){
        sum += n%10;
        n/=10;
    }
    printf("Sum of digits is:: %d", sum);
    holdInput();
}
void reverseNumber(){   
    clearscreen();
    int n,rev=0;
    printf("Enter a numebr:: ");
    scanf("%d",&n);
    while(n>0){
        rev = rev * 10 + n%10;
        n/=10;
    }
    printf("Reverse of number is :: %d\n", rev);
    holdInput();
}
void armstrong(){
    clearscreen();
    int n, n2, d, sum=0;
    printf("Armstrong number:: Number whose sum of cube of digits is equal to the number itself.\n e.g. 153,370.\n");
    printf("Enter a number:: ");
    scanf("%d",&n);
    n2=n;
    while(n2>0){
        d = n2%10;
        sum += d*d*d;
        n2 /=10;
    }
    if(sum == n){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }
    holdInput();
}
void palindromeNo(){
    clearscreen();
    int n,n2, rev=0;
    printf("Palindrome Number:: Number whose reverse is the number itself.\n e.g. 121, 334433\n");
    printf("Enter a number:: ");
    scanf("%d",&n);
    n2 = n;
    while(n2>0){
        rev = rev * 10 + n2 %10;
        n2 /=10;
    }
    if(rev == n){
        printf("Palindrome number");
    }
    else{
        printf("Not a palindrome number");
    }
    holdInput();
}
void factorialNo(){
    clearscreen();
    int n,fact=1;;
    printf("Enter a number:: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        fact *= i;
    }
    printf("Factorial :: %d", fact);
    holdInput();
}
void sumNatural(){
    clearscreen();
    int n,sum=0;
    printf("Enter the limit:: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum += i;
    }
    printf("Sum :: %d\n",sum);
    holdInput();
}
void primeNo(){
    clearscreen();
    int n,flag=1;
    printf("Enter a number:: ");
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) flag = 0;
    }
    if(flag){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
    holdInput();
}
void linearSearch(){
    clearscreen();
    int n,s,flag=0,i;
    int *a;
    printf("Enter the number of elements for the array:: ");
    scanf("%d",&n);
    a = (int *)malloc(sizeof(int)*n);
    printf("Enter the elements of the array :: \n");
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    // linear search
    printf("Enter the element to search:: ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(s==a[i]){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("Element found at index:: %d", i+1);
    }
    else{
        printf("Element not found.");
    }
    holdInput();
}
void binarySearch(){
    clearscreen();
    int n,s,flag=0,i,j,temp;
    int *a;
    printf("Enter the number of elements for the array:: ");
    scanf("%d",&n);
    a = (int *)malloc(sizeof(int)*n);
    printf("Enter the elements of the array :: \n");
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    printf("Enter the element to search:: ");
    scanf("%d",&s);
    // performing sorting for binary search
    // and saving corresponding indedx entries...
    int *p = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++) p[i] = i;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                p[i] = j;
                p[j] = i;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // binary search
    int mid, start=0,end=n-1;
    while(start<=end){
        mid = (start + end)/2;
        if(a[mid]==s){
            flag = 1;
            break;
        }
        if(a[mid]>s){
            end =mid -1;
        } 
        else{
            start = mid +1;
        }
    }
    if(flag){
        printf("Element found at index :: %d ",p[mid] +1);
    }
    else {
        printf("Element not found. ");
    }
    holdInput();
}
void insertionSort(){
    clearscreen();
    int n,i,j,temp,key;
    int *a;
    printf("Enter the number of elements for the array:: ");
    scanf("%d",&n);
    a = (int *)malloc(sizeof(int)*n);
    printf("Enter the elements of the array :: \n");
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    //insertion sort
    for(i=1;i<n;i++){
        key = a[i]; 
        j =i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    // printing
    printf("\nSorted array ::\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    holdInput();
}
void bubbleSort(){
    clearscreen();
    int n,i,j,temp,flag=0;
    int *a;
    printf("Enter the number of elements for the array:: ");
    scanf("%d",&n);
    a = (int *)malloc(sizeof(int)*n);
    printf("Enter the elements of the array :: \n");
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    // bubble sort
    for(i=0;i<n;i++){
        flag = 1;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 0;
            }
        }
        if(flag) break;
    }
    // printing
    printf("\nSorted array ::\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    holdInput();
}
void selectionSort(){
    clearscreen();
    int n,i,j,temp;
    int *a;
    printf("Enter the number of elements for the array:: ");
    scanf("%d",&n);
    a = (int *)malloc(sizeof(int)*n);
    printf("Enter the elements of the array :: \n");
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    // selection sort
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // printing
    printf("\nSorted array ::\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    holdInput();
}
int factorial(int n){
    if(n==0||n==1) return 1;
    else return n*factorial(n-1);
}
void factorialRec(){
    clearscreen();
    int n,f;
    printf("Enter a number :: ");
    scanf("%d",&n);
    f = factorial(n);
    printf("Factorial :: %d",f);
    holdInput();
}
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
void gcdRec(){
    clearscreen();
    int a,b,ans;
    printf("Enter two numbers:: ");
    scanf("%d %d",&a,&b);
    ans = gcd(a,b);
    printf("GCD:: %d",ans);
    holdInput();
}
void sieveOfErathosthenese(){
    clearscreen();
    int n,i,j;
    int *p;
    printf("Enter the range till which you want to find prime numbers:: ");
    scanf("%d",&n);
    p = calloc(n+1,sizeof(int));
    for(i=2;i*i<=n;i++){
        if(p[i]==0){
            for(j=i*i;j<=n;j+=i){
                p[j]=1;
            }
        }
    }
    /// printing prime numbers
    for(i=2;i<n+1;i++){
        if(p[i]==0){
            printf("%d ",i);
        }
    }
    holdInput();
}
void reverseStirng(){
    clearscreen();
    char s[50],a;
    int i,n;
    printf("Enter a string:: ");
    gets(s);
    n = strlen(s);
    for(i=0;i<n/2;i++){
        a = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = a;
    }
    printf("String reverse is :: %s",s);
    holdInput();
}
void removeSpaces(){
    clearscreen();
    char s[50],a;
    int i,n,j;
    printf("Enter a string:: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]==' '|| s[i]=='\t'){
            for(j=i;j<=strlen(s);j++){
                s[j] = s[j+1];
            }
            i--;
        }
    }
    printf("String after removing spaces is :: %s",s);
    holdInput();
}
void toUpperCase(){
    clearscreen();
    char s[50],a;
    int i,n,j;
    printf("Enter a string:: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i] ^ 32; // to upper case
        }
    }
    printf("String converted to upper case is :: %s",s);
    holdInput();
}
void toLowerCase(){
    clearscreen();
    char s[50],a;
    int i,n,j;
    printf("Enter a string:: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] ^ 32; // to upper case
        }
    }
    printf("String converted to lower case is :: %s",s);
    holdInput();
}
void nameToInitials(){
    clearscreen();
    char s[50],a;
    int i,n,j,k;
    printf("Enter a full name:: ");
    gets(s);
    printf("Name converted to initials is :: ");
    i=0;
    for(i=strlen(s)-1;i>0;i--){
        if(s[i]==' '){
            i++;
            break;
        }
    }
    int start=0;
    for(int j=0;j<i;j++){
        if(s[j]==' '){
            printf("%c.", s[start]);
            start = j+1;
        }
    }
    for(k=i;k<strlen(s);k++){
        printf("%c",s[k]);
    }
    holdInput();
}
void palindromeString(){
    clearscreen();
    char s[50],a;
    int i,n,flag=1,l;
    printf("Enter a string:: ");
    gets(s);
    l=strlen(s);
    for(i=0;i<l/2;i++){
        if(s[i]!=s[l-i-1]){
            flag =0;
            break;
        }
    }
    if(flag){
        printf("Palindrome String");
    }
    else{
        printf("Not a palindrome String.");
    }
    holdInput();
}
void swap(int *a,int *b){
    int temp  =*a;
    *a= *b;
    *b = temp;
}
void swapUsingPointers(){
    clearscreen();
    int a, b;
    printf("Enter values for and b:: ");
    scanf("%d %d",&a,&b);
    printf("a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("After swapping.\n");
    printf("a = %d b = %d\n",a,b);
    holdInput();
}
void pascalTraingle(){
    clearscreen();
    int n;
    int *p;
    int i,j;
    printf("Enter no of rows:: ");
    scanf("%d",&n);
    p = calloc(n,sizeof(int));
    p[0]=1;
    for(i=0;i<n;i++){
        for(j=n-i;j>=0;j--) printf(" ");
        for(j=i;j>=1;j--){
            p[j] = p[j] + p[j-1];
        }
        for(j=0;j<=i;j++){
            printf("%d ",p[j]);
        }
        printf("\n");
    }
    holdInput();
}
void fibonacciSeries(){
    clearscreen();
    int n,i;
    int f1=1,f2=1;
    printf("Enter the number of fibonacci numbers you want:: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",f1);
        f2 = f2 + f1;
        f1 = f2 - f1;
    }
    holdInput();
}
void sumOfDiagonalsMatrix(){
    clearscreen();
    int n,i,j;
    int lsum=0,rsum=0;
    int **p;
    printf("Enter the order of the square matrix:: ");
    scanf("%d",&n);
    // allocating memory for matrix
    p = (int **)malloc(sizeof(int *) * n);
    for(i=0;i<n;i++){
        *(p+i) = (int *)malloc(sizeof(int)*n);
    }
    // taking input
    printf("Enter the elements of this %dx%d order matrix:: \n",n,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&p[i][j]);
        }
    }
    // summing
    for(i=0;i<n;i++){
        lsum += p[i][i];
        rsum += p[i][n-i-1];        
    }
    printf("Left diagonal sum:: %d \n Right Diagonal Sum:: %d ",lsum,rsum);
    holdInput();
}
void matrixMultiplication(){
    clearscreen();
    int n1,m1,n2,m2;
    int i,j,k,temp;
    int **a, **b, **c;
    printf("Enter the order of first matrix:: ");
    scanf("%d %d",&n1,&m1);
    printf("Enter the order of second matrix:: ");
    scanf("%d %d",&n2,&m2);
    if(m1!=n2){
        printf("Given order matrices cannot be multiplied. ");
        holdInput();
        return;
    }
    // allocating memory
    a = (int **)malloc(sizeof(int*)*n1);
    for(i=0;i<n1;i++){
        *(a+i) = (int *)malloc(sizeof(int)*m1);
    }
    b = (int **)malloc(sizeof(int*)*n2);
    for(i=0;i<n2;i++){
        *(b+i) = (int *)malloc(sizeof(int)*m2);
    }
    c = (int **)malloc(sizeof(int*)*n1);
    for(i=0;i<n1;i++){
        *(c+i) = (int *)malloc(sizeof(int)*m2);
    }
    // taking input
    printf("---------------------------------\n");
    printf("Enter the elements of first array::\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("---------------------------------\n");
    printf("Enter the elements of second array::\n");
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("---------------------------------\n");
    // performing multiplication
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            temp = 0;
            for(k=0;k<m1;k++){
                temp += a[i][k] * b[k][j];
            }
            c[i][j] = temp;
        }
    }
    // printing the result
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    holdInput();
}
void leapYear(){
    clearscreen();
    unsigned int n;
    int flag = 0;
    printf("Enter a year:: ");
    scanf("%u",&n);
    flag = (n%100==0)?((n%400==0)?1:0):(n%4==0?1:0);
    if(flag){
        printf("Leap Year.");
    }
    else{
        printf("Not a Leap year.");
    }
    holdInput();
}
void asciiTable(){
    clearscreen();
    int i;
    for(int i=0; i<=255;i++){
        if(i>=0&&i<=31){ 
            printf("| %3d -> %c |",i,32);
            if((i+1)%10==0) printf("\n");
            continue;
        }
        printf("| %3d -> %c |",i,i);
        if((i+1)%10==0) printf("\n");
    }
    holdInput();
}
void perfectSquare(){
    clearscreen();
    int n,a;
    printf("Enter a number:: ");
    scanf("%d",&n);
    a = sqrt(n);
    if(a*a==n){
        printf("Yes! %d is perfect square i.e square of %d", n,a);
    }
    else{
        printf("Not a perfect square.");
    }
    holdInput();
}
void triangularNumber(){
    clearscreen();
    int n,sum=0,i;
    printf("Enter the range till which you want triangular numbers:: ");
    scanf("%d",&n);
    printf("Triangular numbers are:: ");
    for(i=1;i<=n;i++){
        sum += i;
        printf("%d ",sum);
    }
    holdInput();
}
void asciiValue(){
    clearscreen();
    char c;
    printf("Enter a character:: ");
    scanf("%c",&c);
    printf("Its ascii value is :: %d",c);
    holdInput();
}
void averageOfN(){
    clearscreen();
    int n,a,i;
    float avg=0;
    printf("Enter the number of numbers you want to find average of :: ");
    scanf("%d",&n);
    printf("Enter the numbers:: ");
    for(i=0;i<n;i++){
        scanf("%d",&a);
        avg += a;
    }
    avg /= n;
    printf("Average of given numbers is %.2f", avg);
    holdInput();
}
void areaTriangle(){
    clearscreen();
    int a,b,c;
    float area, s;
    printf("Enter the sides of triangle:: ");
    scanf("%d %d %d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area:: %.2f Perimeter:: %.2f",area,2*s);
    holdInput();
}
void areaCircle(){
    clearscreen();
    int r;
    float area, peri;
    printf("Enter the radius of circle:: ");
    scanf("%d",&r);
    peri = 2*3.141*r;
    area = r*r*3.141;
    printf("Area::%.2f Perimeter::%.2f",area, peri);
    holdInput();
}
void sphere(){
    clearscreen();
    int r;
    float sa, v;
    printf("Enter the radius of sphere:: ");
    scanf("%d",&r);
    v = (4/3)*3.141*r*r*r;
    sa = 4*3.141*r*r;
    printf("Surface Area:: %.2f Volume:: %.2f",sa,v);
    holdInput();
}
void greatestThree(){
    clearscreen();
    int a,b,c,max;
    printf("Enter three numbers:: ");
    scanf("%d %d %d",&a,&b,&c);
    max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Maximum is:: %d", max);
    holdInput();
}
void findCharIs(){
    clearscreen();
    char c;
    printf("Enter a character:: ");
    scanf("%c",&c);
    if(c>='a'&&c<='z') printf("Lower chase alphabet");
    else if(c>='A'&&c<='Z') printf("Upper chase alphabet");
    else if(c>='0'&&c<='9') printf("Digit");
    else printf("Special Character");
    holdInput();
}
void sumOfArray(){
    clearscreen();
    int n,i,sum=0;
    int *p;
    printf("Enter the number elements of array:: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:: ");
    p = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
        sum += p[i];
    }
    printf("Sum of elements is:: %d",sum);
    holdInput();
}
void reverseArray(){
    clearscreen();
    int n,i,temp;
    int *p;
    printf("Enter the number elements of array:: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:: ");
    p = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n/2;i++){
        temp = p[i];
        p[i] = p[n-i-1];
        p[n-i-1] = temp;
    }
    printf("Reversed Array is:: ");
    for(i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    holdInput();
}
void shiftArray(){
    clearscreen();
    int n,i,temp,shift;
    int *p;
    printf("Enter the number elements of array:: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:: ");
    p = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("Enter the shift for given array:: ");
    scanf("%d",&shift);
    shift%=n;
    while(shift--){
        temp = p[0];
        for(i=0;i<n-1;i++){
            p[i] = p[i+1];
        }
        p[i] = temp;
    }
    printf("Shifted Array is:: ");
    for(i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    holdInput();
}
void maximumArray(){
    clearscreen();
    int n,i,m;
    int *p;
    printf("Enter the number elements of array:: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:: ");
    p = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    m = p[0];
    for(i=1;i<n;i++){
        if(m<p[i]){
            m = p[i];
        }
    }
    printf("Maximum Array element is:: %d",m);
    holdInput();
}
void minimumArray(){
    clearscreen();
    int n,i,m;
    int *p;
    printf("Enter the number elements of array:: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:: ");
    p = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    m = p[0];
    for(i=1;i<n;i++){
        if(m>p[i]){
            m = p[i];
        }
    }
    printf("Minimum Array element is:: %d",m);
    holdInput();
}
void countVowels(){
    clearscreen();
    char s[50],c;
    int i,n=0;
    printf("Enter a String:: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        c=s[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            n++;
        }
    }
    printf("Number of vowels :: %d",n);
    holdInput();
}
void countConsonants(){
    clearscreen();
    char s[50],c;
    int i,n=0;
    printf("Enter a String:: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        c=s[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')){
                n++;
            }
        }
    }
    printf("Number of consonants :: %d",n);
    holdInput();
}
void wordWiseReverse(){
    clearscreen();
    char s[50],c;
    int i,start,end,j;
    printf("Enter a String:: ");
    gets(s);
    start=0;
    for(i=0;i<strlen(s)+1;i++){
        if(s[i]==' '||s[i]=='\0'){
            end = i-1;
            for(j=start;j<=(start+end)/2;j++){
                c = s[j];
                s[j] = s[end-j+start];
                s[end-j+start] = c;
            }
            start = end + 2;
        }
    }
    printf("The output string is:: %s",s);
    holdInput();
}
void ceaserChiper(){
    clearscreen();
    char s[50],c;
    int i,n;
    printf("Enter a String:: ");
    gets(s);
    printf("Enter the shifting number:: ");
    scanf("%d",&n);
    n%=26;
    for(i=0;i<strlen(s);i++){
        c = s[i];
        if(c>='a'&c<='z') s[i] = (c+n-'a')%26 + 'a';
        if(c>='A'&c<='Z') s[i] = (c+n-'A')%26 + 'A';
    }
    printf("Encrypted string is :: %s",s);
    holdInput();
}
void pythagoreanTriplets(){
    clearscreen();
    int k;
    int a,b,c=0,m,n;
    printf("Enter the range till which you want to find pythagorean triplets:: ");
    scanf("%d",&k);
    // formula used
    // a,b,c are triplets if::
    // a=m*m -n*n and b = 2*m*n and c= m*m+n*n
    printf("Pythogren triplets in given range are::\n");
    m = 2;
    while(c<k){
        for(n=1;n<m;n++){
            a = m*m - n*n;
            b = 2*m*n;
            c = m*m+n*n;
            if(c>k) break;
            printf("%d %d %d\n",a,b,c);
        }
        m++;
    }
    holdInput();
}
void specialNumber(){
    clearscreen();
    int n,product =1,sum=0,d,n2;
    printf("Special number is  a number for which the sum of \"sum of its digit\" and \nthe \"product of its digits\" is equal to the number itself.\n");
    printf("Enter a number:: ");
    scanf("%d",&n);
    n2=n;
    while(n>0){
        d = n%10;
        product *= d;
        sum += d;
        n/=10;
    }
    if(product+sum==n2){
        printf("Special Number");
    }
    else {
        printf("Not a special number.");
    }
    holdInput();
}
void starTraingle(){
    clearscreen();
    int n,i,j;
    printf("Enter the number of rows:: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n-i;j>=0;j--) printf(" ");
        for(j=0;j<=i;j++) printf("*");
        printf("\n");
    }
    holdInput();
}
void decimalToBinary(){
    clearscreen();
    int n,temp=1;
    long binary=0;
    printf("Enter a number:: ");
    scanf("%d",&n);
    while(n!=0){
        binary += (n%2)*temp;
        n /= 2;
        temp *=10;
    }
    printf("Binary Equivalent is:: %ld", binary);
    holdInput();
}
void binaryToDecimal(){
    clearscreen();
    int n,decimal=0,d,temp=1;
    printf("Enter a binary number:: ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        if(d==1) decimal += temp;
        else if(d==0);
        else{
            printf("Invalid Input .."); 
            holdInput();
            return;
        }
        temp *=2;
        n /=10;
    }
    printf("Decimal Equivalent is :: %d", decimal);
    holdInput();
}
int nCr(int n,int r){
    if(r==0||r==n) return 1;
    else return nCr(n-1,r-1)+nCr(n-1,r);
}
void nCrFun(){
    clearscreen();
    int n,r,ans;
    printf("Enter the value of n and r:: ");
    scanf("%d %d",&n,&r);
    ans = nCr(n,r);
    printf("nCr :: %d",ans);
    holdInput();
}
void octalToDecimal(){
    clearscreen();
    int n;
    int dec = 0, temp=1;
    printf("Enter the number in octal:: ");
    scanf("%d",&n);
    while (n != 0) {
        if(n%10>7||n%10<0){
            printf("Invalid Input");
            holdInput();
            return;
        }
        dec += (n%10) * temp;
        n /= 10;
        temp *= 8;
    }
    printf("The given number in decimal is:: %d",dec);
    holdInput();
}
void decimalToOctal(){
    clearscreen();
    int n,octal=0,temp=1;
    printf("Enter a decimal number:: ");
    scanf("%d",&n);
    while(n!=0){
        octal += (n%8)*temp;
        temp*=10;
        n/=8; 
    }
    printf("Octal Equivalent of number is:: %d",octal);
    holdInput();
}
int power(int n,int r){
    if(r==0) return 1;
    else return n*power(n,r-1);
}
void powerFun(){
    clearscreen();
    int n,r,p;
    printf("Enter base and exponent:: ");
    scanf("%d %d",&n,&r);
    p=power(n,r);
    printf("Result ::%d",p);
    holdInput();
}
void lcmFun(){
    clearscreen();
    int a,b,lcm;
    printf("Enter two numbers:: ");
    scanf("%d %d",&a,&b);
    lcm = a*b/gcd(a,b);
    printf("LCM:: %d",lcm);
    holdInput();
}
void primeFactorization(){
    clearscreen();
    int n,i,j;
    int *p;
    printf("Enter a number:: ");
    scanf("%d",&n);
    printf("Prime factors of number are::  ");
    p = calloc(n+1,sizeof(int));
    for(i=2;i*i<=n;i++){
        if(p[i]==0){
            for(j=i*i;j<=n;j+=i){
                p[j]=1;
            }
        }
    }
    i=2;
    while(n!=1){
       if(!p[i]){
           if(n%i==0){
               printf("%d ",i);
               while(n%i==0) n/=i;
           }
       }
       i++; 
    }
    holdInput();
}
void factors(){
    clearscreen();
    int n,i;
    printf("Enter a number:: ");
    scanf("%d",&n);
    printf("Its factors are:: ");
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    holdInput();
}
void nPr(){
    clearscreen();
    int n,r,ans;
    printf("Enter the values of n and r");
    ans = factorial(n)/factorial(n-r);
    printf("nPr:: %d",ans);
    holdInput();
}
int sumOfDigit(int n){
    if(n==0) return 0;
    else return n%10 + sumOfDigit(n/10);
}
void sumOfDigitsRecursion(){
    clearscreen();
    int n;
    printf("Enter a number:: ");
    scanf("%d",&n);
    printf("Sum of it's digits is:: %d",sumOfDigit(n));
    holdInput();
}
void secondLargest(){
    clearscreen();
    int a,b,c,sm;
    printf("Enter three  numbers:: ");
    scanf("%d %d %d",&a,&b,&c);
    sm = (a>b)?((b>c)?b:((a>c)?c:a)):((b<c)?b:((a>c)?a:c));
    printf("Second largest is :: %d",sm);
    holdInput();
}
void noAtEndOfSquare(){
    clearscreen();
    int n,d=1,n2;
    printf("A number is automorphic if it is contained within its square.\n");
    printf("Enter a number:: ");
    scanf("%d",&n);
    n2=n;
    while(n2>0) {
        d *=10;
        n2/=10;
    }
    if(n*n%d == n){
        printf("Yes this number is at end of its square.");
    }
    else{
        printf("This number is at not end of its square.");
    }
    holdInput();
}
void automorphicNumber(){
    clearscreen();
    int n;
    printf("Enter the number:: ");
    scanf("%d",&n);
    if(n%10==(n*n)%10){
        printf("%d is an automorphic number",n);
    }
    else{
        printf("%d is not an automorphic number",n);
    }
    holdInput();
}
void perfectNumber(){
    clearscreen();
    int i,n,sumOfFactor=1,n2;
    printf("A number is perfect if sum of its factors is equal to the number itself.\n");
    printf("Enter the number:: ");
    scanf("%d",&n);
    n2=n;
    for(i=2;i<n;i++){
        if(n%i==0)
            sumOfFactor=sumOfFactor+i;
    }
    if(n2=sumOfFactor){
        printf("Yes %d is a perfect number.",n2);
    }
    else{
        printf("No %d is not a perfect number.",n2);
    }
    holdInput();
}
void strongNumber(){
    clearscreen();
    int n,r=0,n2;
    printf("Sum of factorial of digits of a number is equal to the number then it is strong.\n");
    printf("Enter the Number:: ");
    scanf("%d",&n);
    n2=n;
    while(n>0){
        r=r+factorial(n%10);
        n=n/10;
    }
    if(n2==r){
        printf("Yes %d is a strong number",n2);
    }
    else{
        printf("No %d is not a strong number",n2);
    }
    holdInput();
}
void findSubString(){
    clearscreen();
    char *s;
    char *s1;
    int i,j,k,flag=1;;
    s = (char*)malloc(sizeof(char)*100);
    s1 = (char*)malloc(sizeof(char)*100);
    printf("Enter the string:: ");
    gets(s);
    printf("Enter the sub-string:: ");
    gets(s1);
    s = (char*)realloc(s,strlen(s));
    s1 = (char*)realloc(s1,strlen(s1));
    puts(s);puts(s1);
    for(i=0;i<strlen(s);i++){
        if(flag){
            for(j=i,k=0;s1[k]!='\0';j++,k++){
                if(s[j]!=s1[k]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                if(s[j]==' '||s[j]=='\0'){
                    printf("Substring found at index :: %d ",i);
                    holdInput();
                    return;
                }
            }
            flag=0;
        }
        if(s[i]==' '){
            flag=1;
        }
    }
    printf("Substring not found");
    holdInput();
}
void squareSeries(){
    clearscreen();
    int n,i;
    printf("Enter the range for the series:: ");
    scanf("%d",&n);
    printf("Series till gven range is :: ");
    for(i=1;i*i<=n;i++){
        printf("%d ",i*i); 
    }
    holdInput();
}
void cubeSeries(){
    clearscreen();
    int n,i;
    printf("Enter the range for the series:: ");
    scanf("%d",&n);
    printf("Series till gven range is :: ");
    for(i=1;i*i*i<=n;i++){
        printf("%d ",i*i*i); 
    }
    holdInput();
}
void floydsTriangle(){
    clearscreen();
    int n,i,j,k=1;
    printf("Enter the number of rows of floyd's triangle:: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
                        "Draw rectangle of given thickness",
            printf("%d  ",k++);
        }
        printf("\n");
    }
    holdInput();
}
void removeRepeatingArray(){
    clearscreen();
    int n,i,j,k;
    int *p;
    printf("Enter number of element of array:: ");
    scanf("%d",&n);
    p = (int*)malloc(sizeof(int)*n);
    printf("Enter the elements of the array:: \n");
    for(i=0;i<n;i++) scanf("%d",p+i);
    for(i=0;i<n;i++){
        for(j=i-1;j>=0;j--){
            if(p[i]==p[j]){
                for(k=i;k<n-1;k++){
                    p[k]=p[k+1];
                }
                p = (int*)realloc(p,sizeof(int)*(n-1));
                n--;
            }
        }
    }
    printf("Updated array is:: \n");
    for(i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    holdInput();
}
void friendlyPair(){
    clearscreen();
    int num1,num2,sum1=0,sum2=0,a,b,i;
    printf("Enter two numbers:: ");
    scanf("%d %d",&num1, &num2);
    a=num1;
    b=num2;
    for(i=1;i<=num1;i++){
        if(num1%i==0) sum1+=i;
    }
    for(i=1;i<=num2;i++){
        if(num2%i==0) sum2+=i;
    }
    if(sum1*b==sum2*a){
        printf("%d and %d are friendly paired",num1,num2);
    }
    else{
        printf("%d and %d are not friendly paired",num1,num2);
    }
    holdInput();
}
void harshadNumber(){
    clearscreen();
    int n,r=0,b;
    printf("A number is harshad's if it is divisible by sum of it's digits.\n");
    printf("Enter the number:: ");
    scanf("%d",&n);
    b=n;
    while(n>0){
        r=r+n%10;
        n=n/10;
    }
    if(b%r==0){
        printf("%d is a harshad number.",b);
    }
    else{
        printf("%d is not a harshad number.",b);
    }
    holdInput();
}
void quadraticEquation(){
    clearscreen();
    int a,b,c;
    float x1,x2;
    printf("Given quadratic eq:: ax^2 + bx +c = 0.\n");
    printf("Enter the values of a, b and c:: ");
    scanf("%d %d %d",&a,&b,&c);
    int det;
    det = b*b - 4*a*c;
    if(det<0){
        det = -det;
        x1 = -b/(2*a);
        x2 = sqrt(det)/(2*a);
        printf("Complex roots:: (%.2f + %.2fi), (%.2f - %.2fi)",x1,x2,x1,x2);
    }
    else if(det == 0){
        x1 = -b/(2*a);
        printf("Real Equal roots:: %.2f %.2f",x1,x1);
    }
    else{
        x1 = (-b + sqrt(det))/(2*a);
        x2 = (-b - sqrt(det))/(2*a);
        printf("Real Roots :: %.2f %.2f",x1,x2);
    }
    holdInput();
}
void numberInWords(){
    clearscreen();
    char *c[]={
        "Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"
    };
    char **p;
    int n,n2,rev=0,d=0,i;
    printf("Enter a number:: ");
    scanf("%d",&n);
    n2=n;
    //counting number of digits
    while(n2>0){
        d++;
        n2/=10;
    }
    p = (char**)malloc(sizeof(char*)*d);
    //storing 
    i=0;
    while(n>0){
        *(p+i) = *(c+(n%10));
        n/=10;
        i++;
    }
    printf("Number in words is :: ");
    for(i=d-1;i>=0;i--){
        printf("%s ",*(p+i));
    }
    holdInput();
}
void replaceChar(){
    clearscreen();
    char s[50],c,d,i;
    printf("Enter a string ::");
    gets(s);
    printf("Enter the character to find and the charcter to replace:: ");
    scanf("%c %c",&c,&d);
    for(i=0;i<strlen(s);i++){
        if(s[i]==c) s[i] = d;
    }
    printf("Resultant string is:: %s",s);
    holdInput();
}
void hourGlass(){
    clearscreen();
    int n,i,j,k=0;
    printf("Enter the number of rows:: ");
    scanf("%d",&n);
    k = n%2;
    n=n/2 + 1;
    for(i=0;i<n-k;i++){
        for(j=0;j<i;j++) printf(" ");
        for(j=0;j<n-i;j++) printf("* ");
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++) printf(" ");
        for(j=0;j<=i;j++) printf("* ");
        printf("\n");
    }
    holdInput();
}
void pyramid(){
    clearscreen();
    int n,i,j;
    printf("Enter number of rows:: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++) printf(" ");
        for(j=0;j<=i;j++) printf("* ");
        printf("\n");
    }
    holdInput();
}
void palindromePyramid(){
    clearscreen();
    int n,i,j;
    printf("Enter the number of rows:: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++) printf("%d ",j);
        for(j=i-1;j>=1;j--) printf("%d ",j);
        printf("\n");
    }
    holdInput();
}
void hollowPyramid(){
    clearscreen();
    int n,i,j,k;
    printf("Enter number of rows:: ");
    scanf("%d",&n);
    for(j=0;j<n;j++)printf(" ");
    printf("*\n");
    for(i=1;i<n-1;i++){
        for(j=0;j<n-i-1;j++)printf(" ");
        printf("* ");
        for(j=1;j<=i;j++) printf("  ");
        printf("*\n");
    }
    for(i=0;i<=n;i++) printf("* ");
    holdInput();
}
void traceOfMatrix(){
    clearscreen();
    int n,i,j;
    int lmul=1,rmul=1;
    int **p;
    printf("Enter the order of the square matrix:: ");
    scanf("%d",&n);
    // allocating memory for matrix
    p = (int **)malloc(sizeof(int *) * n);
    for(i=0;i<n;i++){
        *(p+i) = (int *)malloc(sizeof(int)*n);
    }
    // taking input
    printf("Enter the elements of this %dx%d order matrix:: \n",n,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&p[i][j]);
        }
    }
    // multiplying
    for(i=0;i<n;i++){
        lmul *= p[i][i];
        rmul *= p[i][n-i-1];        
    }
    printf("Left diagonal Product:: %d \n Right Diagonal Product:: %d ",lmul,rmul);
    holdInput();
}
void matrixAddition(){
    clearscreen();
    int n1,m1,n2,m2;
    int i,j,k,temp;
    int **a, **b, **c;
    printf("Enter the order of first matrix:: ");
    scanf("%d %d",&n1,&m1);
    printf("Enter the order of second matrix:: ");
    scanf("%d %d",&n2,&m2);
    if(m1!=m2||n1!=n2){
        printf("Given order matrices cannot be added. ");
        holdInput();
        return;
    }
    // allocating memory
    a = (int **)malloc(sizeof(int*)*n1);
    for(i=0;i<n1;i++){
        *(a+i) = (int *)malloc(sizeof(int)*m1);
    }
    b = (int **)malloc(sizeof(int*)*n2);
    for(i=0;i<n2;i++){
        *(b+i) = (int *)malloc(sizeof(int)*m2);
    }
    c = (int **)malloc(sizeof(int*)*n1);
    for(i=0;i<n1;i++){
        *(c+i) = (int *)malloc(sizeof(int)*m1);
    }
    // taking input
    printf("---------------------------------\n");
    printf("Enter the elements of first array::\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("---------------------------------\n");
    printf("Enter the elements of second array::\n");
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("---------------------------------\n");
    // performing addition
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // printing the result
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    holdInput();
}
void matrixSubtraction(){
    clearscreen();
    int n1,m1,n2,m2;
    int i,j,k,temp;
    int **a, **b, **c;
    printf("Enter the order of first matrix:: ");
    scanf("%d %d",&n1,&m1);
    printf("Enter the order of second matrix:: ");
    scanf("%d %d",&n2,&m2);
    if(m1!=m2||n1!=n2){
        printf("Given order matrices cannot be subtracted. ");
        holdInput();
        return;
    }
    // allocating memory
    a = (int **)malloc(sizeof(int*)*n1);
    for(i=0;i<n1;i++){
        *(a+i) = (int *)malloc(sizeof(int)*m1);
    }
    b = (int **)malloc(sizeof(int*)*n2);
    for(i=0;i<n2;i++){
        *(b+i) = (int *)malloc(sizeof(int)*m2);
    }
    c = (int **)malloc(sizeof(int*)*n1);
    for(i=0;i<n1;i++){
        *(c+i) = (int *)malloc(sizeof(int)*m1);
    }
    // taking input
    printf("---------------------------------\n");
    printf("Enter the elements of first array::\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("---------------------------------\n");
    printf("Enter the elements of second array::\n");
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("---------------------------------\n");
    // performing subtraction
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    // printing the result
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    holdInput();
}
int countWords(char *s){
    int i, r=1;
    for(i=0;i<strlen(s);i++){
        if(s[i]==' ') r++;
    }
    return r;
}
void countWordString(){
    clearscreen();
    char s[100];
    printf("Enter a string:: ");
    gets(s);
    printf("number of words in string are:: %d",countWords(s));
    holdInput();
}
void matrixSum(){
    clearscreen();
    int **a;
    int n1,m1,sum =0,i,j;
    printf("Enter the order of matrix:: ");
    scanf("%d %d",&n1,&m1);
    // allocating memory
    a = (int **)malloc(sizeof(int*)*n1);
    for(i=0;i<n1;i++){
        *(a+i) = (int *)malloc(sizeof(int)*m1);
    }
    // taking input
    printf("---------------------------------\n");
    printf("Enter the elements of array::\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // performing addition
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            sum += a[i][j];
        }
    }
    // printing the result
    printf("Sum of elements of matrix is:: %d",sum);
    holdInput();
}
int arraySum(int *p,int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum+=p[i];
    }
    return sum;
}
void arrayAverage(){
    clearscreen();
    int n,i;
    float avg;
    int *p;
    printf("Enter the elements of array:: ");
    scanf("%d",&n);
    p = (int*)malloc(sizeof(int)*n);
    printf("Enter the elements of array:: ");
    for(i=0;i<n;i++) scanf("%d",&p[i]);
    avg = arraySum(p,n)/n;
    printf("Average of elements is:: %.2f",avg);
    holdInput();
}
void subString(){
    clearscreen();
    char s[50];
    int i,j,k,l;
    printf("Enter the string:: ");
    gets(s);
    l = strlen(s);
    printf("Substrings are:: \n");
    for(i=0;i<l;i++){
        for(j=i;j<l;j++){
            for(k=i;k<=j;k++){
                printf("%c",s[k]);
            }
            printf("\n");
        }
    }
    holdInput();
}
void sumOfRowsMatrix(){
    clearscreen();
    int **a;
    int n1,m1,sum =0,i,j;
    printf("Enter the order of matrix:: ");
    scanf("%d %d",&n1,&m1);
    // allocating memory
    a = (int **)malloc(sizeof(int*)*n1);
    for(i=0;i<n1;i++){
        *(a+i) = (int *)malloc(sizeof(int)*m1);
    }
    // taking input
    printf("---------------------------------\n");
    printf("Enter the elements of array::\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n1;i++){
        sum=0;
        for(j=0;j<m1;j++){
            sum+=a[i][j];
        }
        printf("Sum of row %d is:: %d\n",i,sum);
    }
    holdInput();
}
void sumOfColumnsMatrix(){
    clearscreen();
    int **a;
    int n1,m1,sum =0,i,j;
    printf("Enter the order of matrix:: ");
    scanf("%d %d",&n1,&m1);
    // allocating memory
    a = (int **)malloc(sizeof(int*)*n1);
    for(i=0;i<n1;i++){
        *(a+i) = (int *)malloc(sizeof(int)*m1);
    }
    // taking input
    printf("---------------------------------\n");
    printf("Enter the elements of array::\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m1;i++){
        sum=0;
        for(j=0;j<n1;j++){
            sum+=a[i][j];
        }
        printf("Sum of column %d is:: %d\n",i,sum);
    }
    holdInput();
}
void strCopy(char *source,char * destination){
    int i;
    for(i=0;i<=strlen(source);i++){
        *(destination+i)=*(source+i);
    }
}
void copyString(){
    clearscreen();
    char s[50];
    char *p;
    int i;
    printf("Enter a string:: ");
    gets(s);
    p = (char *)malloc(sizeof(char)*strlen(s));
    strCopy(s,p);
    printf("Copied string is :: %s",p);
    holdInput();
}
int strCompare(char *c,char *c2){
    int i;
    if(strlen(c)!=strlen(c2))
        return 0;
    for(i=0;i<strlen(c);i++){
        if(c[i]!=c2[i]){
            return 0;
        }
    }
    return 1;
}
void compareString(){
    clearscreen();
    char s[50],s2[50];
    printf("Enter the string:: ");
    gets(s);
    printf("Enter another stirng:: ");
    gets(s2);
    if(strCompare(s,s2)){
        printf("Strings Equal");
    }
    else{
        printf("String not Equal");
    }
    holdInput();
}
void polarToCartesian(){
    clearscreen();
    float theta, r;
    float x,y;
    printf("Enter the value of r and theta:: ");
    scanf("%f %f",&r, &theta);
    theta = theta*0.01745329252;
    x = r*cos(theta);
    y = r*sin(theta);
    printf("Value of x :: %.2f and y :: %.2f",x,y);
    holdInput();
}
void typesOfTraingle(){
    clearscreen();
    int a,b,c;
    printf("Enter the sides of traingle:: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&a==c){
        printf("Equilateral Triangle.");
    }
    else if(a==b||b==c||a==c){
        printf("Isosceles Triangle");
    }
    else{
        printf("Scalene Triangle");
    }
    holdInput();
}
void rectangle(){
    clearscreen();
    int l,b,a,p;
    printf("Enter the length and breadth of rectangle:: ");
    scanf("%d %d",&l,&b);
    a =l*b;
    p =2*(l+b);
    printf("Area:: %d Permeter:: %d",a,p);
    holdInput();
}
void square(){
    clearscreen();
    int l,a,p;
    printf("Enter the side of square:: ");
    scanf("%d",&l);
    a =l*l;
    p =4*l;
    printf("Area:: %d Permeter:: %d",a,p);
    holdInput();
}
void squareCubeSum(){
    clearscreen();
    int n,i;
    int sumS=0,sumC=0;
    printf("Enter the range :: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sumS += i*i;
        sumC += i*i*i;
    }
    printf("Sum of squares:: %d Sum of Cubes:: %d",sumS,sumC);
    holdInput();
}
int main(){ 

    // options array
    char *ch[]={
        "Basic Input Output",
        "Conditionals",
        "Loops",
        "Arrays",
        "Functions",
        "Strings",
        "Pointers",
        "Patterns",
        "Matrices",
        "Miscellaneous",
        NULL
    };
    int i,n=0;
    int choice=1;
    for(n=0;*(ch+n)!=NULL;n++);
    while(choice){
        clearscreen();
        printf("--------------------------------------\n");
        for(i=0;i<n;i++){
            printf("%d. %s\n",i+1,ch[i]);
        }
        printf("0. Quit\n");
        printf("Enter your choice :: ");
        clearInputStream();
        scanf("%d",&choice);
        // switching choice 
        switch(choice){
            case 1 : // basic input output
                {
                    char *c1[]={
                        "Calculator",
                        "Simple Interest Calculator",
                        "ASCII Table",
                        "Perfect square",
                        "Print n Triangular number",
                        "Print ASCII Value of given character",
                        "Average of n numbers",
                        "Find Area and perimeter of a triangle",
                        "Find area and circumference of circle",
                        "Find volume and surface area of sphere",
                        NULL
                    };
                    int n1;
                    for(n1=0;*(c1+n1)!=NULL;n1++);
                    int choice1=1;
                    while(choice1){
                        clearscreen();
                        printf("------------------------------------\n");
                        for(i=0;i<n1;i++){
                            printf("%d. %s\n",i+1,c1[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        clearInputStream();
                        scanf("%d",&choice1);
                        switch(choice1){
                            case 1: // calculator
                                {
                                    calculator();
                                    break;
                                }
                            case 2:
                                { // simple interest
                                    simpleInterest();
                                    break;
                                }
                            case 3: // ascii table
                                {
                                    asciiTable();
                                    break;
                                }
                            case 4: //perfect square
                                {
                                    perfectSquare();
                                    break;
                                }
                            case 5: // Print n Triangular number
                                {
                                    triangularNumber();
                                    break;
                                }
                            case 6: // print ascii value of given character
                                {
                                    asciiValue();
                                    break;
                                }
                            case 7: //average of n numbers
                                {
                                    averageOfN();
                                    break;
                                }
                            case 8: // area of traingle
                                {
                                    areaTriangle();
                                    break;
                                }
                            case 9: //are of circle
                                {
                                    areaCircle();
                                    break;
                                }
                            case 10:
                                {
                                    sphere();
                                    break;
                                }
                        }
                    }
                    break;
                }
            case 2: // conditionals
                {
                    char *c2[]={
                        "Print Digit in Words",
                        "Check for odd and even",
                        "Leap year or not",
                        "Find largest of three numbers",
                        "Check what a given character is..",
                        "Find the second largest number of three given numbers.",
                        "Check if number is at the end of its square..",
                        "Automorphic Number",
                        "Perfect Number",
                        "Strong Number",
                        NULL
                    };
                    int n2;
                    int choice2=1;
                    for(n2=0;*(c2+n2)!=NULL;n2++);
                    while(choice2){
                        clearscreen();
                        printf("------------------------------\n");
                        for(i=0;i<n2;i++){
                            printf("%d. %s\n",i+1,c2[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        scanf("%d",&choice2);
                        switch(choice2){
                            case 1: // print digit in words
                                { 
                                    digitWord();
                                    break;
                                }
                            case 2: //odd even code
                                {
                                    oddEven();
                                    break;
                                }
                            case 3: //leap year
                                {
                                    leapYear();
                                    break;
                                }
                            case 4: // greatest of three numbers
                                {
                                    greatestThree();
                                    break;
                                }
                            case 5: //find what char is
                                {
                                    findCharIs();
                                    break;
                                }
                            case 6: //second largest
                                {
                                    secondLargest();
                                    break;
                                }
                            case 7: //no at end of its square
                                {
                                    noAtEndOfSquare();
                                    break;
                                }
                            case 8: //automorphic number
                                {
                                    automorphicNumber();
                                    break;
                                }
                            case 9: //perfect number
                                {
                                    perfectNumber();
                                    break;
                                }
                            case 10: //strong number
                                {
                                    strongNumber();
                                    break;
                                }
                        }
                    }
                    break;
                }
            case 3: // loops
                {
                    char *c3[]={
                        "Table of given Number",
                        "Sum of digits in a number",
                        "Reverse of a number",
                        "Armstrong number",
                        "Palindrome  number",
                        "Factorial of a number",
                        "Sum of natural numbers till n",
                        "Prime number",
                        "Print pythagoren triplets in given range",
                        "Special Number",
                        NULL
                    };
                    int n3;
                    int choice3=1;
                    for(n3=0;*(c3+n3)!=NULL;n3++);
                    while(choice3){
                        clearscreen();
                        printf("------------------------------\n");
                        for(i=0;i<n3;i++){
                            printf("%d. %s\n",i+1,c3[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        scanf("%d",&choice3);
                        switch(choice3){
                            case 1: //print table
                                {
                                    table();
                                    break;
                                }
                            case 2: // sum of digits
                                { 
                                    sumOfDigits();
                                    break;
                                }
                            case 3: //reverse number
                                {
                                    reverseNumber();
                                    break;
                                }
                            case 4: //armstrong 
                                {
                                    armstrong();
                                    break;
                                }
                            case 5: //palindrome number
                                {
                                    palindromeNo();
                                    break;
                                }
                            case 6: // factorial of a number
                                {
                                    factorialNo();
                                    break;
                                }
                            case 7: // sum of natural no
                                {
                                    sumNatural();
                                    break;
                                }
                            case 8: // prime number
                                {
                                    primeNo();
                                    break;
                                }
                            case 9: // pythagorean triplets
                                {
                                    pythagoreanTriplets();
                                    break;
                                }
                            case 10: // special number
                                {
                                    specialNumber();
                                    break;
                                }
                        }
                    }
                    break;
                }
            case 4: // arrays
                {
                    char *c3[]={
                        "Linear Search",
                        "Binary Search",
                        "Insertion Sort",
                        "Bubble Sort",
                        "Selection sort",
                        "Sum of array",
                        "Reverse an array",
                        "Shift an array by n",
                        "Find maximum element in an array",
                        "Find minimum element in an array",
                        NULL
                    };
                    int n3;
                    int choice3=1;
                    for(n3=0;*(c3+n3)!=NULL;n3++);
                    while(choice3){
                        clearscreen();
                        printf("------------------------------\n");
                        for(i=0;i<n3;i++){
                            printf("%d. %s\n",i+1,c3[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        scanf("%d",&choice3);
                        switch(choice3){
                            case 1: //linear search
                                {
                                    linearSearch();
                                    break;
                                }
                            case 2: //binary search
                                {
                                    binarySearch();
                                    break;
                                }
                            case 3: //insertion sort
                                {
                                    insertionSort();
                                    break;
                                }
                            case 4: //bubble sort
                                {
                                    bubbleSort();
                                    break;
                                }
                            case 5: //selection sort
                                {
                                    selectionSort();
                                    break;
                                }
                            case 6: //sum of array
                                {
                                    sumOfArray();
                                    break;
                                }
                            case 7: //reverse array
                                {
                                    reverseArray();
                                    break;
                                }
                            case 8: //shift array
                                {
                                    shiftArray();
                                    break;
                                }
                            case 9: //find maximum
                                {
                                    maximumArray();
                                    break;
                                }
                            case 10: // find minimum
                                {
                                    minimumArray();
                                    break;
                                }
                        }
                    }
                    break;
                }
            case 5: // functions
                {
                    char *c4[]={
                        "Factorial using Recursion",
                        "GCD using Recursion",
                        "Sieve of eratosthenes",
                        "Calculate nCr using recursion",
                        "Power using recursion function",
                        "LCM of two numbers",
                        "Prime Factorization",
                        "Factors of number",
                        "Calculate nPr for given n and r",
                        "Sum of digits using recursion",
                        NULL
                    };
                    int n4;
                    int choice4=1;
                    for(n4=0;*(c4+n4)!=NULL;n4++);
                    while(choice4){
                        clearscreen();
                        printf("------------------------------\n");
                        for(i=0;i<n4;i++){
                            printf("%d. %s\n",i+1,c4[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        scanf("%d",&choice4);
                        switch(choice4){
                            case 1: // factorial using recursion
                                {
                                    factorialRec();
                                    break;
                                }
                            case 2: // gcd using recursion
                                {
                                    gcdRec();
                                    break;
                                }
                            case 3: //sieve of eratosthenes
                                {
                                    sieveOfErathosthenese();
                                    break;
                                }
                            case 4: // nCr
                                {
                                    nCrFun();
                                    break;
                                }
                            case 5: //power
                                {
                                    powerFun();
                                    break;
                                }
                            case 6: //lcm
                                {
                                    lcmFun();
                                    break;
                                }
                            case 7: // prime factorization
                                {
                                    primeFactorization();
                                    break;
                                }
                            case 8: //factors of number
                                {
                                    factors();
                                    break;
                                }
                            case 9: //nPr
                                {
                                    nPr();
                                    break;
                                }
                            case 10: //sum using recursion
                                {
                                    sumOfDigitsRecursion();
                                    break;
                                }
                        }
                    }
                    break;
                }
            case 6: // string
                {
                    char *c5[]={
                        "Reverse",
                        "Remove Spaces",
                        "Convert to Upper Case",
                        "Convert to Lower Case",
                        "Convert to Initials",
                        "Palindrome",
                        "Count no of Vowels",
                        "Count no of Consonants",
                        "Word wise Reverse",
                        "Ceaser Chiper",
                        NULL
                    };
                    int n5;
                    int choice5=1;
                    for(n5=0;*(c5+n5)!=NULL;n5++);
                    while(choice5){
                        clearscreen();
                        printf("------------------------------\n");
                        for(i=0;i<n5;i++){
                            printf("%d. %s\n",i+1,c5[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        scanf("%d",&choice5);
                        switch(choice5){
                            case 1: // reverse string
                                {
                                    reverseStirng();
                                    break;
                                }
                            case 2: //remove spaces
                                {
                                    removeSpaces();
                                    break;
                                }
                            case 3:// to upper case
                                {
                                    toUpperCase();
                                    break;
                                }
                            case 4: //to lower case
                                {
                                    toLowerCase();
                                    break;
                                }
                            case 5: //Convert to Initials
                                {
                                    nameToInitials();
                                    break;
                                }
                            case 6: //palindrome string
                                {
                                    palindromeString();
                                    break;
                                }
                            case 7: //count no of vowels
                                {
                                    countVowels();
                                    break;
                                }
                            case 8: //count no of consonants
                                {
                                    countConsonants();
                                    break;
                                }
                            case 9: //word wise reverse
                                {
                                    wordWiseReverse();
                                    break;
                                }
                            case 10:// ceaser chiper
                                {
                                    ceaserChiper();
                                    break;
                                }

                        }
                    }
                    break;
                }
            case 7: // pointers
                {
                    char *c6[]={
                        "Swap numbers",
                        "Find a substring within a string",
                        "Pass a string as pointer and count number of words",
                        "Return average of elements of an array using pointers",
                        "Print all substring of given string",
                        "Copy string using pointers",
                        "Compare two strings using pointer",
                            NULL
                    };
                    int n6;
                    int choice6=1;
                    for(n6=0;*(c6+n6)!=NULL;n6++);
                    while(choice6){
                        clearscreen();
                        printf("------------------------------\n");
                        for(i=0;i<n6;i++){
                            printf("%d. %s\n",i+1,c6[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        scanf("%d",&choice6);
                        switch(choice6){
                            case 1: //swap function
                                {
                                    swapUsingPointers();
                                    break;
                                }
                            case 2: //find substring
                                {
                                    findSubString();
                                    break;
                                }
                            case 3: //count words
                                {
                                    countWordString();
                                    break;
                                }
                            case 4: //average of a an array
                                {
                                    arrayAverage();
                                    break;
                                }
                            case 5: //substring
                                {
                                    subString();
                                    break;
                                }
                            case 6:
                                {
                                    copyString();
                                    break;
                                }
                            case 7: //compare string
                                {
                                    compareString();
                                    break;
                                }
                        }
                    }
                    break;
                }
            case 8: // patterns
                {
                    char *c8[]={
                        "Pascal Triangle",
                        "Fibonacci Series",
                        "Star triangle",
                        "Square series",
                        "Cube series",
                        "Floyd's triangle",
                        "Hourglass",
                        "Pyramid",
                        "Palindrome pyramid",
                        "Hollow Pyramid",
                        NULL
                    };
                    int n8;
                    int choice8=1;
                    for(n8=0;*(c8+n8)!=NULL;n8++);
                    while(choice8){
                        clearscreen();
                        printf("------------------------------\n");
                        for(i=0;i<n8;i++){
                            printf("%d. %s\n",i+1,c8[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        scanf("%d",&choice8);
                        switch(choice8){
                            case 1: // pascal trianlge
                                {
                                    pascalTraingle();
                                    break;
                                }
                            case 2://fibonacci series
                                {
                                    fibonacciSeries();
                                    break;
                                }
                            case 3://star traingle
                                {
                                    starTraingle();
                                    break;
                                }
                            case 4: // square serie
                                {
                                    squareSeries();
                                    break;
                                }
                            case 5: //cube series
                                {
                                    cubeSeries();
                                    break;
                                }
                            case 6:// floyd's triangle
                                {
                                    floydsTriangle();
                                    break;
                                }
                            case 7: // hourglass
                                {
                                    hourGlass();
                                    break;
                                }
                            case 8: //pyramid
                                {
                                    pyramid();
                                    break;
                                }
                            case 9://palindrome triangle
                                {
                                    palindromePyramid();
                                    break;
                                }
                            case 10://hollow pyramid
                                {
                                    hollowPyramid();
                                    break;
                                }
                        }
                    }
                    break;
                }
            case 9: //matrices
                {
                    char *c9[]={
                        "Sum of diagonals of matrix",
                        "Multiply two matrices",
                        "Trace of a matrix",
                        "Adding two matrices",
                        "Subtracting two matrices",
                        "Sum of all elements of matrix",
                        "Sum of all rows of an matrix",
                        "Sum of all columns of matrix",
                        NULL
                    };
                    int n9;
                    int choice9=1;
                    for(n9=0;*(c9+n9)!=NULL;n9++);
                    while(choice9){
                        clearscreen();
                        printf("------------------------------\n");
                        for(i=0;i<n9;i++){
                            printf("%d. %s\n",i+1,c9[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        scanf("%d",&choice9);
                        switch(choice9){
                            case 1:
                                {
                                    sumOfDiagonalsMatrix();
                                    break;
                                }
                            case 2:
                                {
                                    matrixMultiplication();
                                    break;
                                }
                            case 3:
                                {
                                    traceOfMatrix();
                                    break;
                                }
                            case 4: //adding matrices
                                {
                                    matrixAddition();
                                    break;
                                }
                            case 5: // subtracting matrices
                                {
                                    matrixSubtraction();
                                    break;
                                }
                            case 6: // matrix sum
                                {
                                    matrixSum();
                                    break;
                                }
                            case 7: //sum of matrix
                                {
                                    sumOfRowsMatrix();
                                    break;
                                }
                            case 8: //sum of columns
                                {
                                    sumOfColumnsMatrix();
                                    break;
                                }

                        }
                    }
                    break;
                }
            case 10:// miscellaneous
                {
                    char *c10[]={
                        "Decimal to Binary",
                        "Binary to Decimal",
                        "Octal to Decimal",
                        "Decimal to Octal",
                        "Remove repeating elements of array by backtracking",
                        "Friendly Pair",
                        "Harshad's number",
                        "Quadratic Equation",
                        "Print number in words",
                        "Find and replace given charcter in string",
                        "Convert from polar to cartesian cooordinates",
                        "Types of triangle",
                        "Area and perimeter of rectangle",
                        "Area and perimeter of square",
                        "Sum  of square and cubes of natural numbers",
                        NULL
                    };
                    int n10;
                    int choice10=1;
                    for(n10=0;*(c10+n10)!=NULL;n10++);
                    while(choice10){
                        clearscreen();
                        printf("------------------------------\n");
                        for(i=0;i<n10;i++){
                            printf("%d. %s\n",i+1,c10[i]);
                        }
                        printf("0. Quit\n");
                        printf("Enter your choice :: ");
                        scanf("%d",&choice10);
                        switch(choice10){
                            case 1: //decimal to binary
                                {
                                    decimalToBinary();
                                    break;
                                }
                            case 2: //binary to decimal
                                {
                                    binaryToDecimal();
                                    break;
                                }
                            case 3: //octal to decimal
                                {
                                    octalToDecimal();
                                    break;
                                }
                            case 4://decimall to octal
                                {
                                    decimalToOctal();
                                    break;
                                }
                            case 5: //remove repeating elements
                                {
                                    removeRepeatingArray();
                                    break;
                                }
                            case 6://friendly pair
                                {
                                    friendlyPair();
                                    break;
                                }
                            case 7://harshad number
                                {
                                    harshadNumber();
                                    break;
                                }
                            case 8://quadratic equation
                                {
                                    quadraticEquation();
                                    break;
                                }
                            case 9: //print no in digits
                                {
                                    numberInWords();
                                    break;
                                }
                            case 10: // find and replace given character in string
                                {
                                    replaceChar();
                                    break;
                                }
                            case 11: //polar to cartesian
                                {
                                    polarToCartesian();
                                    break;
                                }
                            case 12: //types of traingle
                                {
                                    typesOfTraingle();
                                    break;
                                }
                            case 13: //rectangle
                                {
                                    rectangle();
                                    break;
                                }
                            case 14://square
                                {
                                    square();
                                    break;
                                }
                            case 15://sum 
                                {
                                    squareCubeSum();
                                    break;
                                }
                        }
                    }
                    break;
                }
        }
    }
    return 0;
}
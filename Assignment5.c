#include <stdio.h>
#include <math.h>

#define MAX 10

// Function for matrix addition
void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int r, int c) {
    int sum[MAX][MAX];

    printf("\nResultant Matrix (Addition):\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// Function to find saddle point
void saddlePoint(int a[MAX][MAX], int r, int c) {
    int found = 0;

    for(int i=0;i<r;i++) {
        int min = a[i][0], col = 0;

        for(int j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        int k;
        for(k=0;k<r;k++) {
            if(a[k][col] > min)
                break;
        }

        if(k == r) {
            printf("\nSaddle Point: %d\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("\nNo Saddle Point found\n");
}

// Function to find inverse (only 2x2)
void inverseMatrix(int a[2][2]) {
    float det;

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("\nInverse does not exist\n");
        return;
    }

    printf("\nInverse Matrix:\n");
    printf("%f %f\n", a[1][1]/det, -a[0][1]/det);
    printf("%f %f\n", -a[1][0]/det, a[0][0]/det);
}

// Function to check magic square
void magicSquare(int a[MAX][MAX], int n) {
    int sum = 0, flag = 1;

    // Row sum
    for(int j=0;j<n;j++)
        sum += a[0][j];

    // Check rows
    for(int i=1;i<n;i++) {
        int rsum = 0;
        for(int j=0;j<n;j++)
            rsum += a[i][j];

        if(rsum != sum) flag = 0;
    }

    // Check columns
    for(int j=0;j<n;j++) {
        int csum = 0;
        for(int i=0;i<n;i++)
            csum += a[i][j];

        if(csum != sum) flag = 0;
    }

    // Diagonal
    int d1=0, d2=0;
    for(int i=0;i<n;i++) {
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }

    if(d1 != sum || d2 != sum)
        flag = 0;

    if(flag)
        printf("\nIt is a Magic Square\n");
    else
        printf("\nNot a Magic Square\n");
}

int main() {
    int choice;
    int a[MAX][MAX], b[MAX][MAX];
    int r, c, n;

    printf("\n1. Addition of Matrices");
    printf("\n2. Saddle Point");
    printf("\n3. Inverse of Matrix (2x2)");
    printf("\n4. Magic Square");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter rows and columns: ");
            scanf("%d%d", &r, &c);

            printf("Enter Matrix A:\n");
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    scanf("%d", &a[i][j]);

            printf("Enter Matrix B:\n");
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    scanf("%d", &b[i][j]);

            addMatrix(a, b, r, c);
            break;

        case 2:
            printf("Enter rows and columns: ");
            scanf("%d%d", &r, &c);

            printf("Enter Matrix:\n");
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    scanf("%d", &a[i][j]);

            saddlePoint(a, r, c);
            break;

        case 3: {
            int m[2][2];
            printf("Enter 2x2 Matrix:\n");
            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    scanf("%d", &m[i][j]);

            inverseMatrix(m);
            break;
        }

        case 4:
            printf("Enter order of square matrix: ");
            scanf("%d", &n);

            printf("Enter Matrix:\n");
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    scanf("%d", &a[i][j]);

            magicSquare(a, n);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}

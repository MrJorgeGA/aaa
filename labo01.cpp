# include <iostream>

int f(int x, int y) {
    if (x>y) {
        return x + y;
    }
    return x * y;
}

bool esPrimo(int n) {
    for (int i = 2; i<n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int fibonacciRecursivo (int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
}

int fibonacciIterativa (int n) {
    int f0 = 0;
    int f1 = 1;
    int suma = 0;
    if (n == 0 || n == 1) {
        return n;
    }
    for (int i = 2; i<=n; i++ ) {
        suma = f0 + f1;
        f0 = f1;
        f1 = suma;
    }
    return suma;
}

int sumaMenoresImparesRecursivo (int n) {
    if (n <= 1) {
        return 0;
    }
    if (n%2 != 0) {
        return (n-2) + sumaMenoresImparesRecursivo(n-2);
    }
    return (n-1) + sumaMenoresImparesRecursivo(n-1);


}

int sumaMenoresImparesIterativo (int n) {
    int suma = 0;
    int impar = 1;
    while (impar < n) {
        suma += impar;
        impar += 2;
    }
    return suma;
}

int sumaDivisoresHasta (int n, int m) {
    if (m == 1) {
        return m;
    }
    if (n%m == 0) {
        return m + sumaDivisoresHasta(n, m-1);
    }
    else {
        return sumaDivisoresHasta(n, m-1);
    }

}

int sumaDivisoresRecursivo (int n) {
    return sumaDivisoresHasta (n,n);
}

int sumaDivisores (int n) {
    int suma = n+1;
    for (int i = 2; i <= n/2; i++) {
        if (n%i == 0) {
            suma += i;
        }
    }
    return suma;
}

int combinatoriaRecursiva (int n, int k) {
    if (k>n) {return -1;}
    if (k == 0 || n == k) {
        return 1;
    }
    return combinatoriaRecursiva(n-1,k) + combinatoriaRecursiva(n-1,k-1);
}

int  combinatoriaIterativa (int n, int k) {
    for (int i = 0; i<=n;i++){}
}

int main() {
    std::cout << "El resultado es : " << f(12,11) << std::endl;
    std::cout << "x es primo: " << esPrimo (12) << std::endl;
    std::cout << "y es primo: " << esPrimo (11) << std::endl;
    std::cout << "El fibonacci 10 recursivo es: " << fibonacciRecursivo (10) << std::endl;
    std::cout << "El fibonacci 10 iterativo es: " << fibonacciIterativa (10) << std::endl;
    std::cout << "La suma de impares menores recursivo a 10 es: " << sumaMenoresImparesRecursivo(10) << std::endl;
    std::cout << "La suma de impares menores iterativo a 10 es: " << sumaMenoresImparesIterativo (10) << std::endl;
    std::cout << "La suma de divisores recursiva de 10 es: " << sumaDivisoresRecursivo (10) << std::endl;
    std::cout << "La suma de divisores iterativa de 10 es: " << sumaDivisores (10) << std::endl;
    std::cout << "La combinatoria de n = 5 en k = 3 es:" << combinatoriaRecursiva (5,3)<< std::endl;

    return 0;
}

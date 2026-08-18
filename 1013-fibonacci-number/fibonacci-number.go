func fib(n int) int {
    if n == 0 || n == 1 {
        return n
    }

    n1, n2 := 0, 1

    for i := 2; i <= n; i++ {
        curr := n1 + n2

        n1 = n2
        n2 = curr

    }
    return n2
}
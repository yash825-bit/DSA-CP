func fib(n int) int {
    if n <= 1 {
        return n
    }

    var n1 int = 0
    var n2 int = 1

    for i := 2; i <= n; i++ {

        var curr int = n2 + n1

        n1 = n2
        n2 = curr

    }
    return n2
}
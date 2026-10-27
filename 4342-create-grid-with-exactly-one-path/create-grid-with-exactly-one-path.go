func createGrid(m int, n int) []string {
    ans := make([]string, m)

    for i := 0; i < m; i++ {

        row := make([]byte, n)

        for j := 0; j < n; j++ {
            if i == 0 || j == n-1 {
                row[j] = '.'
            } else {
                row[j] = '#'
            }
        }
        ans[i] = string(row)
    }
    return ans
}
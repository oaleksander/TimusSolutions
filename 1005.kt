import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val stones = IntArray(n)
    for (i in 0..n)
        stones[i] = scanner.nextInt()
    val limit = 1 shl n - 1 // 2^(n-1)
    var diff = Int.MAX_VALUE
    for (i in 0..limit) {
        var sum1 = 0
        var sum2 = 0
        var k = i
        for (j in 0..n) {
            if (k and 0x1 == 0) sum1 += stones[j] else sum2 += stones[j]
            k = k shr 1 // calculate weights for each bit sequence
        }
        (if (sum1 >= sum2) sum1 - sum2 else sum2 - sum1).let {
            if (it < diff) diff = it // find min difference
        }
    }
    println(diff)
}
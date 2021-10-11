import java.util.*

fun main() {
    val cities: MutableMap<String, Int> = mutableMapOf() //<name,economy>
    val cities2: PriorityQueue<Pair<String, Int>> = PriorityQueue { p1, p2 -> p1.second - p2.second }
    val billionaires: MutableMap<String, Int> = mutableMapOf()//<name,money>
    val topcities: SortedMap<String, Int> = sortedMapOf()//<name,days>
    var start_day = 1;
    val n = readLine()!!.toInt()
    for (i in 1..n) {
        val input = readLine()?.split(" ")!!
        billionaires[input[0]] = input[2].toInt()
        cities[input[1]] = input[2].toInt() + (cities[input[1]] ?: 0);
        var previousValue = 0;
        cities2.removeIf { e -> if (e.first == input[1]) previousValue = e.second; return@removeIf e.first == input[1] }
        cities2.add(Pair(input[1],input[2].toInt()+previousValue))
    }
    println(cities2)
    /*
    val input = readLine()!!.split("\\")
    val m = input[0].toInt()
    val k = input[1].toInt()
    cities.toList()
    for (i in 1..k) {

    }

     */


}
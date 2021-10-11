fun main(){
    val input = readLine()!!.split(" ")
    val n = input[0].toInt()
    val k = input[1].toInt()-1
    val soldiers = ArrayList<Int>(List(n){it+1})
    var maxIndex = n
    var rmIndex = k
    for(i in 1 until n) {
        print("${soldiers[rmIndex]} ")
        soldiers.removeAt(rmIndex)
        maxIndex--
        rmIndex += k
        soldiers.size
        if (rmIndex > maxIndex-1)
        rmIndex-=(rmIndex/maxIndex)*maxIndex
    }
    print("${soldiers[rmIndex]}")
}
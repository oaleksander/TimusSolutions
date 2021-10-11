class Folder(val label: String, val subfolders: MutableList<Folder> = mutableListOf())

var rootDir = mutableListOf<Folder>()

fun printDirs(dirs: List<Folder>, separator: String = "") {
    dirs.stream().sorted { dir, dir2 -> dir.label.compareTo(dir2.label) }.forEach {
        println(separator + it.label)
        if (it.subfolders.isNotEmpty())
            printDirs(it.subfolders, "$separator ")
    }
}

fun main() {
    val n = readLine()?.toInt()
    for (i in 1..n!!) {
        var currentDirectory: MutableList<Folder> = rootDir
        var directoryIsNew = false
        for (label in readLine()?.split("\\")!!) {
            if (!directoryIsNew)
                directoryIsNew = currentDirectory.none(fun(dir: Folder): Boolean {
                    if (dir.label == label) {
                        currentDirectory = dir.subfolders
                        return true
                    }
                    return false
                })
            if (directoryIsNew) {
                val newDir = Folder(label)
                currentDirectory.add(newDir)
                currentDirectory = newDir.subfolders
            }
        }
    }
    printDirs(rootDir)
}
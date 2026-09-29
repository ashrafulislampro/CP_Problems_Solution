import java.util.StringTokenizer

    fun solve(){val k = readInt() val a1 = readInt() val b1 = readInt() val a2 = readInt() val b2 = readInt()

                    var aliceSrc = a1 + a2 var bobSrc = b1 + b2 var aliceWin = 0 var bobWin = 0

                if (a1> b1) aliceWin ++ else bobWin ++ if (a2> b2) aliceWin ++ else bobWin ++

                if (aliceSrc == bobSrc + k){if (aliceWin> bobWin){println("NO") } else {println("YES") } } else if (aliceSrc> bobSrc + k){println("NO") } else {println("YES") } }

fun main(){val t = readInt() repeat(t){solve() } }

// Utility for fast input
private var st = StringTokenizer("") private fun readInt() : Int{while (!st.hasMoreTokens()){st = StringTokenizer(readLine() !!) } return st.nextToken().toInt() }

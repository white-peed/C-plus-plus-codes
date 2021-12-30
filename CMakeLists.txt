cmake_minimum_required(VERSION 3.21)
project(C__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Atcoder)
include_directories(Codechef)
include_directories(Codeforces)
include_directories(justcode)
include_directories(Leetcode)
include_directories(TheCodingGuy-master)

add_executable(C__
        "Atcoder/Beginner Contest 052/a.cpp"
        "Atcoder/Beginner Contest 052/b.cpp"
        "Atcoder/Beginner Contest 052/c.cpp"
        "Atcoder/Beginner Contest 052/d.cpp"
        "Atcoder/Beginner Contest 053/a.cpp"
        "Atcoder/Beginner Contest 053/b.cpp"
        "Atcoder/Beginner Contest 053/c.cpp"
        "Atcoder/Beginner Contest 185/A.cpp"
        "Atcoder/Beginner Contest 185/B.cpp"
        "Atcoder/Beginner Contest 185/C.cpp"
        "Atcoder/Beginner Contest 185/D.cpp"
        "Atcoder/Beginner Contest 187/A.cpp"
        "Atcoder/Beginner Contest 190/A.cpp"
        "Atcoder/Beginner Contest 194/A.cpp"
        "Atcoder/Beginner Contest 199/a.cpp"
        "Atcoder/Beginner Contest 199/b.cpp"
        "Atcoder/Beginner Contest 199/d.cpp"
        "Atcoder/Beginner Contest 200/a.cpp"
        "Atcoder/Beginner Contest 200/b.cpp"
        "Atcoder/Beginner Contest 200/c.cpp"
        "Atcoder/Beginner Contest 200/d.cpp"
        "Atcoder/Beginner Contest 201/a.cpp"
        "Atcoder/Beginner Contest 201/b.cpp"
        "Atcoder/Beginner Contest 201/c.cpp"
        "Atcoder/Beginner Contest 202/a.cpp"
        "Atcoder/Beginner Contest 202/b.cpp"
        "Atcoder/Beginner Contest 203/a.cpp"
        "Atcoder/Beginner Contest 203/b.cpp"
        "Atcoder/Beginner Contest 204/a.cpp"
        "Atcoder/Beginner Contest 204/b.cpp"
        "Atcoder/Beginner Contest 205/a.cpp"
        "Atcoder/Beginner Contest 205/b.cpp"
        "Atcoder/Beginner Contest 205/c.cpp"
        "Atcoder/Beginner Contest 206/a.cpp"
        "Atcoder/Beginner Contest 206/b.cpp"
        "Atcoder/Beginner Contest 206/c.cpp"
        "Atcoder/Beginner Contest 207/a.cpp"
        "Atcoder/Beginner Contest 207/b.cpp"
        "Atcoder/Beginner Contest 208/a.cpp"
        "Atcoder/Beginner Contest 208/b.cpp"
        "Atcoder/Beginner Contest 208/c.cpp"
        "Atcoder/Beginner Contest 209/a.cpp"
        "Atcoder/Beginner Contest 209/b.cpp"
        "Atcoder/Beginner Contest 209/c.cpp"
        "Atcoder/Beginner Contest 210/a.cpp"
        "Atcoder/Beginner Contest 210/b.cpp"
        "Atcoder/Beginner Contest 210/c.cpp"
        "Atcoder/Beginner Contest 210/d.cpp"
        "Atcoder/Beginner Contest 211/a.cpp"
        "Atcoder/Beginner Contest 211/b.cpp"
        "Atcoder/Beginner Contest 230/a.cpp"
        "Atcoder/Beginner Contest 230/b.cpp"
        "Atcoder/Beginner Contest 230/c.cpp"
        "Atcoder/Beginner Contest 231/a.cpp"
        "Atcoder/Beginner Contest 231/b.cpp"
        "Atcoder/Beginner Contest 231/c.cpp"
        "Atcoder/Beginner Contest 232/a.cpp"
        "Atcoder/Beginner Contest 232/b.cpp"
        "Atcoder/Beginner Contest 232/c.cpp"
        "Atcoder/Beginner Contest 232/tempCodeRunnerFile.cpp"
        "Atcoder/Educational DP Contest/A.cpp"
        "Atcoder/Educational DP Contest/n slimes.cpp"
        "Atcoder/Educational DP Contest Solutions/a.cpp"
        "Atcoder/Educational DP Contest Solutions/b.cpp"
        "Atcoder/Educational DP Contest Solutions/c.cpp"
        "Atcoder/Educational DP Contest Solutions/d.cpp"
        "Atcoder/Educational DP Contest Solutions/e.cpp"
        "Atcoder/Educational DP Contest Solutions/f.cpp"
        "Atcoder/Educational DP Contest Solutions/g.cpp"
        "Atcoder/Educational DP Contest Solutions/h.cpp"
        "Atcoder/Educational DP Contest Solutions/i.cpp"
        "Atcoder/Educational DP Contest Solutions/j.cpp"
        "Atcoder/Educational DP Contest Solutions/k.cpp"
        "Atcoder/Educational DP Contest Solutions/l.cpp"
        "Atcoder/Educational DP Contest Solutions/m.cpp"
        "Atcoder/Educational DP Contest Solutions/n.cpp"
        "Atcoder/Educational DP Contest Solutions/o.cpp"
        "Atcoder/Educational DP Contest Solutions/p.cpp"
        "Atcoder/Educational DP Contest Solutions/q.cpp"
        "Atcoder/Educational DP Contest Solutions/r.cpp"
        "Atcoder/Educational DP Contest Solutions/s.cpp"
        "Atcoder/Educational DP Contest Solutions/t.cpp"
        "Atcoder/Educational DP Contest Solutions/u.cpp"
        "Atcoder/Educational DP Contest Solutions/v.cpp"
        "Atcoder/Educational DP Contest Solutions/w.cpp"
        "Atcoder/Educational DP Contest Solutions/x.cpp"
        "Atcoder/Educational DP Contest Solutions/y.cpp"
        "Atcoder/Educational DP Contest Solutions/z.cpp"
        "Atcoder/Practice Contest/a.cpp"
        "Atcoder/Regular Contest 117/a.cpp"
        "Atcoder/Regular Contest 119/a.cpp"
        Atcoder/RC123_a.cpp
        Atcoder/RC123_b.cpp
        "Codechef/April CodeChef Starters 2021 Division 3 (Rated)/CCISLAND.cpp"
        "Codechef/April CodeChef Starters 2021 Division 3 (Rated)/HIRETEST.cpp"
        "Codechef/April CodeChef Starters 2021 Division 3 (Rated)/TANDP.cpp"
        "Codechef/April CookOff 2021/BUILDB.cpp"
        "Codechef/April CookOff 2021/CM164364.cpp"
        "Codechef/April CookOff 2021/OROFAND.cpp"
        "Codechef/April CookOff 2021/psgrade.cpp"
        "Codechef/April Long Challenge 2021/bolt.cpp"
        "Codechef/April Long Challenge 2021/sdice.cpp"
        "Codechef/April Long Challenge 2021/socks1.cpp"
        "Codechef/April Long Challenge 2021/sscript.cpp"
        "Codechef/April Lunchtime 2021/ARRROT.cpp"
        "Codechef/April Lunchtime 2021/BENCHP.cpp"
        "Codechef/April Lunchtime 2021/CCHEAVEN.cpp"
        "Codechef/April Lunchtime 2021/EQUINOX.cpp"
        "Codechef/April Lunchtime 2021/SLOOP.cpp"
        "Codechef/August Long Challenge/CHEFWARS.cpp"
        "Codechef/August Long Challenge/CRDGAME3.cpp"
        "Codechef/August Long Challenge/LINCHESS.cpp"
        "Codechef/August Long Challenge/SKMP.cpp"
        "Codechef/Code Shake 2.0/COLLECT0.cpp"
        "Codechef/Code Shake 2.0/COVIN.cpp"
        "Codechef/Code Shake 2.0/GUESIT99.cpp"
        "Codechef/Code Shake 2.0/INDX12.cpp"
        "Codechef/Code Shake 2.0/KRAFT.cpp"
        "Codechef/Code Shake 2.0/MAKEIT.cpp"
        "Codechef/Code Shake 2.0/UNLKIT.cpp"
        "Codechef/Code Shake 2.0/UNWNT.cpp"
        "Codechef/CodeChef Starters 6 Division 3/CRICRANK.cpp"
        "Codechef/CodeChef Starters 6 Division 3/ETUP_unchecked.cpp"
        "Codechef/CodeChef Starters 6 Division 3/JOKRBTMN.cpp"
        "Codechef/CodeChef Starters 6 Division 3/THREDICE.cpp"
        "Codechef/CodeChef Starters 7 Division 2/CEILSUM.cpp"
        "Codechef/CodeChef Starters 7 Division 2/CHSFORMT.cpp"
        "Codechef/CodeChef Starters 7 Division 2/FODCHAIN.cpp"
        Codechef/Codesprint/EMPRNM.cpp
        Codechef/Codesprint/GOATRIP.cpp
        Codechef/Codesprint/PROBRGN.cpp
        Codechef/Codesprint/STCKSCAM.cpp
        "Codechef/December Cook Off/ATTENDU.cpp"
        "Codechef/December Cook Off/Untitled1.cpp"
        "Codechef/December Cook-Off 2021 Division 2/BINSTRGAME.cpp"
        "Codechef/December Cook-Off 2021 Division 2/MEDMIN.cpp"
        "Codechef/December Cook-Off 2021 Division 2/MUSICHAIR.cpp"
        "Codechef/December Long Challenge 2020/evenpsum.cpp"
        "Codechef/December Long Challenge 2020/POSPREFS.cpp"
        "Codechef/December Long Challenge 2020/VACCINE1.cpp"
        "Codechef/December Long Challenge 2020/VACCINE2.cpp"
        "Codechef/Encoding December 2020/ENDEC1.cpp"
        "Codechef/Encoding December 2020/ENDEC2.cpp"
        "Codechef/Encoding December 2020/ENDEC4.cpp"
        "Codechef/Encoding December 2020/ENDEC5.cpp"
        "Codechef/FizzBuzz Division 2/CAN_REACH.cpp"
        "Codechef/FizzBuzz Division 2/MKGPLNKS.cpp"
        "Codechef/FizzBuzz Division 2/SUBMIMX.cpp"
        "Codechef/January Long Challenge 2021/billrd.cpp"
        "Codechef/January Long Challenge 2021/decodeit.cpp"
        "Codechef/January Long Challenge 2021/divthree.cpp"
        "Codechef/January Long Challenge 2021/fairelect.cpp"
        "Codechef/July Long Challenge/ADAKING.cpp"
        "Codechef/July Long Challenge/CHEFSTR!.cpp"
        "Codechef/July Long Challenge/CHFNSWPS.cpp"
        "Codechef/July Long Challenge/CRDGAME.cpp"
        "Codechef/July Long Challenge/DRCHEF.cpp"
        "Codechef/July Long Challenge/PTMSSNG.cpp"
        "Codechef/March Cook Off 2021/guessit.cpp"
        "Codechef/March Cook Off 2021/pawri.cpp"
        "Codechef/March Cook Off 2021/weightbl.cpp"
        "Codechef/March Long Challenge 2021/groups.cpp"
        "Codechef/March Long Challenge 2021/notime.cpp"
        "Codechef/March Starters 2021/colglf5.cpp"
        "Codechef/March Starters 2021/start2c.cpp"
        "Codechef/March Starters 2021/t20mch.cpp"
        "Codechef/May Cook-Off 2021/MARARUN.cpp"
        "Codechef/May Cook-Off 2021/P7SWAPS.cpp"
        "Codechef/May Cook-Off 2021/TLAPM.cpp"
        "Codechef/May Cook-Off 2021/VACCINE3.cpp"
        "Codechef/May Long Challenge 2021/LKDNGOLF.cpp"
        "Codechef/May Long Challenge 2021/SOLBLTY.cpp"
        Codechef/noob_coding/Untitled1.cpp
        Codechef/noob_coding/Untitled2.cpp
        "Codechef/November Cook Off/flip.cpp"
        "Codechef/November Cook Off/IPCCERT.cpp"
        "Codechef/November Long Challenge/ADADISH.cpp"
        "Codechef/November Lunchtime/BEGGASOL.cpp"
        "Codechef/November Lunchtime/Gasoline.cpp"
        "Codechef/push_back 1/ITGUY14.cpp"
        "Codechef/push_back 1/ITGUY15.cpp"
        "Codechef/push_back 1/ITGUY16.cpp"
        "Codechef/push_back 1/ITGUY17.cpp"
        "Codechef/push_back 2/A.cpp"
        "Codechef/push_back 2/ITGUY21.cpp"
        "Codechef/push_back 2/ITGUY22.cpp"
        "Codechef/push_back 2/ITGUY23.cpp"
        "Codechef/push_back 2/ITGUY25.cpp"
        "Codechef/push_back 2/ITGUY26.cpp"
        "Codechef/September Long Challenge/EQDIV.cpp"
        "Codechef/September Long Challenge/EQDIV_wrong.cpp"
        Codechef/ALLDIV3.cpp
        Codechef/BLITZ3_2.cpp
        Codechef/CARVANS.cpp
        Codechef/CHARGES.cpp
        Codechef/chefsetc.cpp
        Codechef/CHFHEIST.cpp
        Codechef/CHFRICH.cpp
        Codechef/CIELAB.cpp
        Codechef/CLEANUP.cpp
        Codechef/COCONUT.cpp
        Codechef/COINS.cpp
        Codechef/CONFLIP.cpp
        Codechef/CORTSENT.cpp
        Codechef/CTIME.cpp
        Codechef/CYCLICQD.cpp
        Codechef/DISABLEDKING.cpp
        Codechef/FALSNUM.cpp
        Codechef/HORSES.cpp
        Codechef/HTMLTAGS.cpp
        Codechef/jam11.cpp
        Codechef/JOHNY.cpp
        Codechef/LAZYCHF.cpp
        Codechef/leadgame.cpp
        Codechef/MARBLES.cpp
        Codechef/MAXDIFF.cpp
        Codechef/MISSSUMS.cpp
        Codechef/MSTICK.cpp
        Codechef/NAME2.cpp
        Codechef/NUM239.cpp
        Codechef/ODDSEVENS.cpp
        Codechef/PASSWD.cpp
        Codechef/POGOSTCK.cpp
        Codechef/QUIZPLAG.cpp
        Codechef/SLPCYCLE.cpp
        Codechef/TANDJ1.cpp
        Codechef/tile.cpp
        Codechef/TOTCRT.cpp
        Codechef/TOTR.cpp
        Codechef/VISA.cpp
        "Codeforces/Codeforces Beta Round #1/a.cpp"
        "Codeforces/Codeforces Beta Round #87 (Div. 1 Only)/a.cpp"
        "Codeforces/Codeforces Global Round 14/a.cpp"
        "Codeforces/Codeforces Global Round 15/a.cpp"
        "Codeforces/Codeforces LATOKEN Round 1 (Div. 1 + Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #119 (Div. 2)/189A.cpp"
        "Codeforces/Codeforces Round #186 (Div. 2)/313b.c"
        "Codeforces/Codeforces Round #186 (Div. 2)/313b.cpp"
        "Codeforces/Codeforces Round #267 (Div. 2)/467b.cpp"
        "Codeforces/Codeforces Round #277.5 (Div. 2)/b.cpp"
        "Codeforces/Codeforces Round #367 (Div. 2)/b.cpp"
        "Codeforces/Codeforces Round #464 (Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #470 (rated, Div. 2, based on VK Cup 2018 Round 1)/a.cpp"
        "Codeforces/Codeforces Round #640 (Div. 4)/A.c"
        "Codeforces/Codeforces Round #640 (Div. 4)/A.cpp"
        "Codeforces/Codeforces Round #640 (Div. 4)/B.cpp"
        "Codeforces/Codeforces Round #640 (Div. 4)/C.c"
        "Codeforces/Codeforces Round #640 (Div. 4)/C.cpp"
        "Codeforces/Codeforces Round #674 (Div. 3)/a.cpp"
        "Codeforces/Codeforces Round #674 (Div. 3)/b.cpp"
        "Codeforces/Codeforces Round #688 (Div. 2)/A.cpp"
        "Codeforces/Codeforces Round #693 (Div. 3)/a.cpp"
        "Codeforces/Codeforces Round #693 (Div. 3)/b.cpp"
        "Codeforces/Codeforces Round #694 (Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #712 (Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #713 (Div. 3)/a.cpp"
        "Codeforces/Codeforces Round #713 (Div. 3)/b.cpp"
        "Codeforces/Codeforces Round #713 (Div. 3)/c.cpp"
        "Codeforces/Codeforces Round #713 (Div. 3)/d.cpp"
        "Codeforces/Codeforces Round #714 (Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #714 (Div. 2)/c.cpp"
        "Codeforces/Codeforces Round #716 (Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #718 (Div. 1+2)/a.cpp"
        "Codeforces/Codeforces Round #719 (Div. 3)/a.cpp"
        "Codeforces/Codeforces Round #719 (Div. 3)/b.cpp"
        "Codeforces/Codeforces Round #719 (Div. 3)/c.cpp"
        "Codeforces/Codeforces Round #719 (Div. 3)/d.cpp"
        "Codeforces/Codeforces Round #720 (Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #722 (Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #722 (Div. 2)/b.cpp"
        "Codeforces/Codeforces Round #723 (Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #723 (Div. 2)/b.cpp"
        "Codeforces/Codeforces Round #723 (Div. 2)/c.cpp"
        "Codeforces/Codeforces Round #725 (Div. 3)/a.cpp"
        "Codeforces/Codeforces Round #730 (Div. 2)/a.cpp"
        "Codeforces/Codeforces Round #730 (Div. 2)/b.cpp"
        "Codeforces/Codeforces Round #731 (Div. 3)/a.cpp"
        "Codeforces/Codeforces Round #731 (Div. 3)/b.cpp"
        "Codeforces/Codeforces Round #731 (Div. 3)/c.cpp"
        "Codeforces/Codeforces Round #731 (Div. 3)/tempCodeRunnerFile.cpp"
        "Codeforces/Codeforces Round #734 (Div. 3)/a.cpp"
        "Codeforces/Codeforces Round #734 (Div. 3)/c.cpp"
        "Codeforces/Codeforces Round #756 (Div. 3)/a.cpp"
        "Codeforces/Codeforces Round #756 (Div. 3)/b.cpp"
        "Codeforces/Codeforces Round #759/a.cpp"
        "Codeforces/Codeforces Round #759/b.cpp"
        "Codeforces/Codeforces Round #759/c.cpp"
        "Codeforces/Codeforces Round #760 (Div. 3)/a.cpp"
        "Codeforces/Codeforces Round #760 (Div. 3)/b.cpp"
        "Codeforces/Codeforces Round #760 (Div. 3)/c.cpp"
        "Codeforces/Codeforces Round #760 (Div. 3)/d.cpp"
        "Codeforces/Educational Codeforces Round 107 (Rated for Div. 2)/a.cpp"
        "Codeforces/Educational Codeforces Round 107 (Rated for Div. 2)/b.cpp"
        "Codeforces/Educational Codeforces Round 107 (Rated for Div. 2)/c.cpp"
        "Codeforces/Educational Codeforces Round 107 (Rated for Div. 2)/d.cpp"
        "Codeforces/Educational Codeforces Round 108 (Rated for Div. 2)/a.cpp"
        "Codeforces/Educational Codeforces Round 108 (Rated for Div. 2)/b.cpp"
        "Codeforces/Educational Codeforces Round 110 (Rated for Div. 2)/a.cpp"
        "Codeforces/Educational Codeforces Round 111 (Rated for Div. 2)/a.cpp"
        "Codeforces/Educational Codeforces Round 111 (Rated for Div. 2)/b.cpp"
        "Codeforces/Educational Codeforces Round 111 (Rated for Div. 2)/c.cpp"
        "Codeforces/Educational Codeforces Round 117/a.cpp"
        "Codeforces/Educational Codeforces Round 117/b.cpp"
        "Codeforces/Educational Codeforces Round 117/c.cpp"
        "Codeforces/Good Bye 2014/a.cpp"
        "Codeforces/Harbour.Space Scholarship Contest 2021-2022/a.cpp"
        "Codeforces/Harbour.Space Scholarship Contest 2021-2022/b.cpp"
        "Codeforces/Harbour.Space Scholarship Contest 2021-2022/c.cpp"
        "Codeforces/Harbour.Space Scholarship Contest 2021-2022/tempCodeRunnerFile.cpp"
        "Codeforces/#1020b.cpp"
        "Codeforces/#1030a.cpp"
        "Codeforces/#1057a.cpp"
        "Codeforces/#110a.cpp"
        "Codeforces/#116a.cpp"
        "Codeforces/#122a.cpp"
        "Codeforces/#125 b.cpp"
        "Codeforces/#125 b1.cpp"
        "Codeforces/#131a.cpp"
        "Codeforces/#1335a.cpp"
        "Codeforces/#136a.cpp"
        "Codeforces/#1472b.cpp"
        "Codeforces/#1472c.cpp"
        "Codeforces/#1472d.cpp"
        "Codeforces/#148a.cpp"
        "Codeforces/#1505C.cpp"
        "Codeforces/#1520c.cpp"
        "Codeforces/#1521a.cpp"
        "Codeforces/#1525a.cpp"
        "Codeforces/#1525b.cpp"
        "Codeforces/#1536a.cpp"
        "Codeforces/#1537a.cpp"
        "Codeforces/#1537b.cpp"
        "Codeforces/#1539a.cpp"
        "Codeforces/#1541a.cpp"
        "Codeforces/#1541b.cpp"
        "Codeforces/#158b.cpp"
        "Codeforces/#198 B1.cpp"
        "Codeforces/#200b.cpp"
        "Codeforces/#228a.cpp"
        "Codeforces/#230a.cpp"
        "Codeforces/#230b.cpp"
        "Codeforces/#236a.cpp"
        "Codeforces/#25a.cpp"
        "Codeforces/#263a.cpp"
        "Codeforces/#266a.cpp"
        "Codeforces/#268a.cpp"
        "Codeforces/#271a.cpp"
        "Codeforces/#318a.cpp"
        "Codeforces/#344a.cpp"
        "Codeforces/#399b.cpp"
        "Codeforces/#405a.cpp"
        "Codeforces/#41a.cpp"
        "Codeforces/#445a.cpp"
        "Codeforces/#451a.cpp"
        "Codeforces/#467a.cpp"
        "Codeforces/#469a.cpp"
        "Codeforces/#479a.cpp"
        "Codeforces/#486a.cpp"
        "Codeforces/#491 A.cpp"
        "Codeforces/#492b.cpp"
        "Codeforces/#510a.cpp"
        "Codeforces/#520a.cpp"
        "Codeforces/#520b.cpp"
        "Codeforces/#546a.cpp"
        "Codeforces/#580a.cpp"
        "Codeforces/#59a.cpp"
        "Codeforces/#617a.cpp"
        "Codeforces/#61a.cpp"
        "Codeforces/#677a.cpp"
        "Codeforces/#69a.cpp"
        "Codeforces/#705a.cpp"
        "Codeforces/#734a.cpp"
        "Codeforces/#750a.cpp"
        "Codeforces/#785a.cpp"
        "Codeforces/#791a.cpp"
        "Codeforces/#913b.cpp"
        "Codeforces/#958 B1.cpp"
        "Codeforces/#966 a.cpp"
        "Codeforces/#96a.cpp"
        "Codeforces/#977a.cpp"
        "Codeforces/178 A2 Educational Game.cpp"
        TheCodingGuy-master/bitmasking_bitmanipulation/bitset1.cpp
        TheCodingGuy-master/bitmasking_bitmanipulation/bitset2.cpp
        TheCodingGuy-master/bitmasking_bitmanipulation/maximizingXor.cpp
        TheCodingGuy-master/bitmasking_bitmanipulation/playinWithBits.cpp
        TheCodingGuy-master/bitmasking_bitmanipulation/stringSubsequences.cpp
        TheCodingGuy-master/bitmasking_bitmanipulation/subset_sum_queries_bitset.cpp
        TheCodingGuy-master/bitmasking_bitmanipulation/tavasAndSaddas.cpp
        TheCodingGuy-master/bitmasking_bitmanipulation/uniqueNo2.cpp
        TheCodingGuy-master/bitmasking_bitmanipulation/uniqueNo3.cpp
        TheCodingGuy-master/Sequences/flippingGame.cpp
        TheCodingGuy-master/Sequences/kadaneAlgo.cpp
        TheCodingGuy-master/Sequences/maxSumSubarrayK.cpp
        TheCodingGuy-master/Sequences/partialSumRangeQueries.cpp
        TheCodingGuy-master/Sequences/rangeIncrement.cpp
        TheCodingGuy-master/Sequences/sequences04.cpp
        1.cpp
        2.cpp
        34449669.cpp
        ideone_2myOOp.cpp
        ideone_9CPYvD.cpp
        ideone_a5pUly.cpp
        "lazy propagation.cpp"
        main.cpp
        main1.cpp
        "Segment query.cpp"
        "Segment tree.cpp"
        Untitled1.cpp
        Untitled2.cpp)

//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <fstream>
//#include <algorithm>
//#include <cmath>
//#include <map>
//using namespace std;
//const int y400 = 97;
//map<string, int> EMonth;
//int sta_y, sta_m, sta_d;
//int end_y, end_m, end_d;
//void pre()
//{
//    string mm[] = {"January", "February", "March", "April","May", "June", "July", "August","September", "October", "November" ,"December"};
//    for ( int i = 0; i < 12; i++ )
//    {
//        EMonth.insert ( pair<string, int> ( mm[i], i + 1 ) );
//    }
//}
//bool isLeap ( int y )
//{
//    return ( ! ( y % 400 ) ) || ( ( ! ( y % 4 ) ) && ( y % 100 ) );
//}
//bool isLeapDay ( int y, int m, int d )
//{
//    return ( isLeap ( y ) && m == 2 && d == 29 );
//}
//int singleYear ( int y, int m, int d, bool goRight )
//{
//    if ( isLeapDay ( y, m, d ) )
//    {
//        return 1;
//    }    /// goRight=true:y-m-d之后，会过一个2.29么
//    /// goRight=false:y-m-d之前，会过一个2.29么
//    if ( isLeap ( y ) )
//    {
//        if ( goRight )
//        {
//            return ( m <= 2 );
//        }
//        else
//        {
//            return ( m >= 3 );
//        }
//    }
//    return 0;
//}
//int duringYears ( int ya, int yb )      ///从ya1-1到yb-1-1经历多少个2.29
//{
//    int delta = 1;
//    int counter = isLeap ( ya );
//    int yearDelta = yb - ya;
//    counter = ( yearDelta / 400 ) * y400;
//    for ( int i = ya + ( yearDelta / 400 ) * 400 + 1; i < yb; i += delta )
//    {
//        if ( isLeap ( i ) )
//        {
//            counter++;
//            delta = 4;
//        }
//    }
//    return counter;
//}
//int doit()
//{
//    if ( sta_y == end_y )
//    {
//        int a = singleYear ( sta_y, sta_m, sta_d, true );
//        int b = singleYear ( end_y, end_m, end_d, false );
//        if ( a > b )
//        {
//            return 0;
//        }
//        if ( a == b )
//        {
//            return a & 1;
//        }
//        if ( a < b )
//        {
//            return 0;
//        }
//    }
//    else
//    {
//        return singleYear ( sta_y, sta_m, sta_d, true ) +
//               duringYears ( sta_y + 1, end_y ) +
//               singleYear ( end_y, end_m, end_d, false );
//    }
//}
//void debug()
//{
//    int counter = 0;
//    for ( int i = 1; i <= 40; i++ )
//    {
//        counter += isLeap ( i );
//    }
//    cout << counter << endl;
//}
//int main()
//{
//    freopen ( "new.in", "r", stdin );
//    pre();
//    int COUNTERU, ans;
//    string tMonth;
//    scanf ( "%d", &COUNTERU );
//    for ( int i = 1; i <= COUNTERU; i++ )
//    {
//        cin >> tMonth;
//        sta_m = EMonth[tMonth];
//        scanf ( "%d, %d", &sta_d, &sta_y );
//        cin >> tMonth;
//        end_m = EMonth[tMonth];
//        scanf ( "%d, %d", &end_d, &end_y );
//        ans = doit();
//        printf ( "Case #%d: %d\n", i, ans );
//    }
//    return 0;
//}
//
//

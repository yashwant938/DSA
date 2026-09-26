#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /* ============================================================
       1. PAIR
       ============================================================ */

    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << '\n';

    pair<int, pair<int, int>> nested = {1, {2, 3}};

    cout << nested.first << '\n';         // 1
    cout << nested.second.first << '\n';  // 2
    cout << nested.second.second << '\n'; // 3


    /* ============================================================
       2. VECTOR
       Dynamic Array
       Random Access: O(1)
       push_back: Amortized O(1)
       ============================================================ */

    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);

    // Constructs directly inside vector
    vec.emplace_back(30);

    cout << vec[0] << '\n';
    cout << vec.at(1) << '\n';

    cout << vec.front() << '\n';
    cout << vec.back() << '\n';

    cout << vec.size() << '\n';
    cout << vec.capacity() << '\n';

    vec.pop_back();

    vec.empty();

    // Insert
    vec.insert(vec.begin(), 5);

    // Erase one element
    vec.erase(vec.begin());

    // Erase range [first, last)
    // vec.erase(vec.begin(), vec.begin() + 2);

    // Copy vector
    vector<int> v2(vec);

    // Resize
    vec.resize(10);

    // Reserve memory
    vec.reserve(100);

    // Remove everything
    vec.clear();

    // Iterators
    for (auto it = v2.begin(); it != v2.end(); ++it) {
        cout << *it << " ";
    }

    cout << '\n';

    // Reverse iterator
    for (auto it = v2.rbegin(); it != v2.rend(); ++it) {
        cout << *it << " ";
    }

    cout << '\n';


    /* ============================================================
       3. LIST
       Internally: Doubly Linked List

       insert/delete: O(1) when iterator known
       random access NOT supported
       ============================================================ */

    list<int> ls;

    ls.push_back(10);
    ls.push_front(20);

    ls.emplace_back(30);
    ls.emplace_front(40);

    cout << ls.front() << '\n';
    cout << ls.back() << '\n';

    ls.pop_front();
    ls.pop_back();

    auto listIt = ls.begin();

    ls.insert(listIt, 100);
    ls.erase(listIt);

    ls.reverse();

    ls.sort();

    ls.unique(); // removes consecutive duplicates

    ls.clear();


    /* ============================================================
       4. FORWARD_LIST
       Internally: Singly Linked List
       ============================================================ */

    forward_list<int> fl;

    fl.push_front(10);
    fl.push_front(20);

    fl.emplace_front(30);

    fl.pop_front();

    fl.insert_after(fl.begin(), 50);

    fl.erase_after(fl.begin());


    /* ============================================================
       5. DEQUE
       Double Ended Queue

       insertion/deletion from BOTH ends
       ============================================================ */

    deque<int> dq;

    dq.push_back(10);
    dq.push_front(20);

    dq.emplace_back(30);
    dq.emplace_front(40);

    cout << dq.front() << '\n';
    cout << dq.back() << '\n';

    dq.pop_front();
    dq.pop_back();

    // Unlike list, deque supports random access
    cout << dq[0] << '\n';

    dq.clear();


    /* ============================================================
       6. STACK
       LIFO
       Last In First Out
       ============================================================ */

    stack<int> stk;

    stk.push(10);
    stk.push(20);
    stk.emplace(30);

    cout << stk.top() << '\n';

    stk.pop();

    cout << stk.size() << '\n';

    cout << stk.empty() << '\n';


    /* ============================================================
       7. QUEUE
       FIFO
       First In First Out
       ============================================================ */

    queue<int> q;

    q.push(10);
    q.push(20);
    q.emplace(30);

    cout << q.front() << '\n';
    cout << q.back() << '\n';

    q.pop();

    cout << q.size() << '\n';
    cout << q.empty() << '\n';


    /* ============================================================
       8. PRIORITY QUEUE
       Default = MAX HEAP
       ============================================================ */

    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(50);
    maxHeap.push(20);

    cout << maxHeap.top() << '\n'; // 50

    maxHeap.pop();


    // MIN HEAP

    priority_queue<
        int,
        vector<int>,
        greater<int>
    > minHeap;

    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(20);

    cout << minHeap.top() << '\n'; // 10


    /* ============================================================
       9. SET
       Sorted + Unique

       Usually Red-Black Tree

       insert  O(log n)
       erase   O(log n)
       find    O(log n)
       ============================================================ */

    set<int> st;

    st.insert(10);
    st.insert(30);
    st.insert(20);

    st.emplace(40);

    // Duplicate ignored
    st.insert(10);

    auto setIt = st.find(20);

    if (setIt != st.end()) {
        cout << "Found\n";
    }

    st.erase(20);

    int cnt = st.count(10); // 0 or 1

    // First element >= 20
    auto lb = st.lower_bound(20);

    // First element > 20
    auto ub = st.upper_bound(20);

    cout << st.size() << '\n';

    st.clear();


    /* ============================================================
       10. MULTISET
       Sorted but DUPLICATES allowed
       ============================================================ */

    multiset<int> ms;

    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);

    cout << ms.count(10) << '\n'; // 3

    // WARNING:
    // removes ALL occurrences of 10
    ms.erase(10);

    ms.insert(10);
    ms.insert(10);

    // Remove only ONE occurrence
    auto msIt = ms.find(10);

    if (msIt != ms.end()) {
        ms.erase(msIt);
    }


    /* ============================================================
       11. UNORDERED_SET
       Hash Table

       Unique but NOT sorted

       Average:
       insert/find/erase = O(1)

       Worst case = O(n)
       ============================================================ */

    unordered_set<int> us;

    us.insert(10);
    us.insert(20);
    us.emplace(30);

    us.find(10);

    us.erase(20);

    us.count(30);

    // NO:
    // lower_bound()
    // upper_bound()


    /* ============================================================
       12. MAP
       key -> value

       Keys sorted + unique

       Usually Red-Black Tree
       O(log n)
       ============================================================ */

    map<int, int> mp;

    mp[1] = 100;
    mp[2] = 200;

    mp.insert({3, 300});

    mp.emplace(4, 400);

    cout << mp[1] << '\n';

    // IMPORTANT:
    // [] inserts key if it doesn't exist
    cout << mp[100];

    // find() doesn't insert
    auto mapIt = mp.find(2);

    if (mapIt != mp.end()) {
        cout << mapIt->first << " "
             << mapIt->second << '\n';
    }

    mp.erase(2);

    mp.count(3);

    auto mapLB = mp.lower_bound(3);
    auto mapUB = mp.upper_bound(3);


    /* ============================================================
       13. MAP WITH COMPLEX VALUE
       ============================================================ */

    map<int, pair<int, int>> mpair;

    mpair.insert({33, {12, 34}});

    cout << mpair[33].first << '\n';
    cout << mpair[33].second << '\n';


    /* ============================================================
       14. MULTIMAP
       Sorted keys + DUPLICATE keys
       ============================================================ */

    multimap<int, string> mmap;

    mmap.insert({1, "Yash"});
    mmap.insert({1, "Rana"});
    mmap.insert({2, "C++"});

    cout << mmap.count(1) << '\n';

    // Get range containing key = 1
    auto range = mmap.equal_range(1);

    for (auto it = range.first;
         it != range.second;
         ++it) {

        cout << it->second << '\n';
    }


    /* ============================================================
       15. UNORDERED_MAP
       Hash Table

       Average insert/find/erase = O(1)
       Worst = O(n)

       NOT sorted
       ============================================================ */

    unordered_map<int, string> ump;

    ump[1] = "Yash";

    ump.insert({2, "C++"});

    ump.emplace(3, "Compiler");

    auto umpIt = ump.find(2);

    if (umpIt != ump.end()) {
        cout << umpIt->second << '\n';
    }

    ump.erase(2);

    ump.count(1);


    /* ============================================================
       16. ARRAY
       Fixed-size STL array
       ============================================================ */

    array<int, 5> arr = {5, 2, 8, 1, 3};

    cout << arr[0] << '\n';
    cout << arr.at(1) << '\n';

    cout << arr.front() << '\n';
    cout << arr.back() << '\n';

    cout << arr.size() << '\n';

    arr.fill(10);


    /* ============================================================
       17. STRING
       ============================================================ */

    string s = "Yash";

    s.push_back('!');
    s.pop_back();

    s += " Rana";

    cout << s.length() << '\n';
    cout << s.size() << '\n';

    // substring
    string sub = s.substr(0, 4);

    // find
    size_t pos = s.find("Rana");

    if (pos != string::npos) {
        cout << pos << '\n';
    }

    s.insert(4, "want");

    s.erase(4, 4);

    s.replace(0, 4, "YASH");

    // Convert string -> int
    int number = stoi("123");

    // int -> string
    string numberString = to_string(123);


    /* ============================================================
       18. ITERATORS
       ============================================================ */

    vector<int> nums = {1, 2, 3, 4, 5};

    auto beginIt = nums.begin();

    auto endIt = nums.end();

    // end() points AFTER last element

    cout << *beginIt << '\n';

    beginIt++;

    cout << *beginIt << '\n';

    // Constant iterators
    auto cit = nums.cbegin();

    // Reverse
    auto rit = nums.rbegin();


    /* ============================================================
       19. SORT
       ============================================================ */

    vector<int> values = {5, 2, 8, 1, 3};

    sort(values.begin(), values.end());

    // descending

    sort(
        values.begin(),
        values.end(),
        greater<int>()
    );


    /* ============================================================
       20. CUSTOM SORT / LAMBDA
       ============================================================ */

    vector<pair<int, int>> vp = {
        {1, 5},
        {2, 3},
        {3, 8}
    };

    sort(
        vp.begin(),
        vp.end(),
        [](const auto& a, const auto& b) {

            return a.second < b.second;
        }
    );


    /* ============================================================
       21. REVERSE
       ============================================================ */

    reverse(values.begin(), values.end());


    /* ============================================================
       22. MAX / MIN
       ============================================================ */

    int a = 10;
    int b = 20;

    cout << max(a, b) << '\n';
    cout << min(a, b) << '\n';

    // Maximum element iterator

    auto maxIt =
        max_element(values.begin(), values.end());

    auto minIt =
        min_element(values.begin(), values.end());

    cout << *maxIt << '\n';
    cout << *minIt << '\n';


    /* ============================================================
       23. ACCUMULATE
       ============================================================ */

    vector<int> numbers = {1, 2, 3, 4, 5};

    int sum = accumulate(
        numbers.begin(),
        numbers.end(),
        0
    );

    cout << sum << '\n';

    // For large sums:
    long long bigSum = accumulate(
        numbers.begin(),
        numbers.end(),
        0LL
    );


    /* ============================================================
       24. COUNT
       ============================================================ */

    int occurrences =
        count(numbers.begin(), numbers.end(), 2);


    /* ============================================================
       25. FIND
       ============================================================ */

    auto findIt =
        find(numbers.begin(), numbers.end(), 3);

    if (findIt != numbers.end()) {
        cout << "Found\n";
    }


    /* ============================================================
       26. BINARY SEARCH

       RANGE MUST BE SORTED
       ============================================================ */

    sort(numbers.begin(), numbers.end());

    bool exists =
        binary_search(
            numbers.begin(),
            numbers.end(),
            3
        );


    /* ============================================================
       27. LOWER_BOUND / UPPER_BOUND

       RANGE MUST BE SORTED
       ============================================================ */

    vector<int> sorted = {1, 2, 2, 2, 5, 7};

    // first element >= 2
    auto lower =
        lower_bound(
            sorted.begin(),
            sorted.end(),
            2
        );

    // first element > 2
    auto upper =
        upper_bound(
            sorted.begin(),
            sorted.end(),
            2
        );

    cout << lower - sorted.begin() << '\n';

    cout << upper - sorted.begin() << '\n';

    // Number of occurrences
    cout << upper - lower << '\n';


    /* ============================================================
       28. NEXT_PERMUTATION
       ============================================================ */

    vector<int> perm = {1, 2, 3};

    do {

        for (int x : perm)
            cout << x << " ";

        cout << '\n';

    } while (
        next_permutation(
            perm.begin(),
            perm.end()
        )
    );


    /* ============================================================
       29. PREV_PERMUTATION
       ============================================================ */

    vector<int> perm2 = {3, 2, 1};

    prev_permutation(
        perm2.begin(),
        perm2.end()
    );


    /* ============================================================
       30. UNIQUE

       Removes consecutive duplicates logically.

       Usually used after sort().
       ============================================================ */

    vector<int> duplicate = {
        1, 1, 2, 2, 2, 3, 3
    };

    auto newEnd =
        unique(
            duplicate.begin(),
            duplicate.end()
        );

    duplicate.erase(
        newEnd,
        duplicate.end()
    );


    /* ============================================================
       31. SWAP
       ============================================================ */

    int x = 10;
    int y = 20;

    swap(x, y);


    /* ============================================================
       32. IOTA

       Fill with sequential numbers
       ============================================================ */

    vector<int> sequence(5);

    iota(
        sequence.begin(),
        sequence.end(),
        1
    );

    // sequence = 1 2 3 4 5


    /* ============================================================
       33. ALL_OF / ANY_OF / NONE_OF
       ============================================================ */

    vector<int> check = {2, 4, 6, 8};

    bool allEven =
        all_of(
            check.begin(),
            check.end(),
            [](int x) {
                return x % 2 == 0;
            }
        );

    bool anyEven =
        any_of(
            check.begin(),
            check.end(),
            [](int x) {
                return x % 2 == 0;
            }
        );

    bool noNegative =
        none_of(
            check.begin(),
            check.end(),
            [](int x) {
                return x < 0;
            }
        );


    /* ============================================================
       34. BITSET
       ============================================================ */

    bitset<8> bits(10);

    cout << bits << '\n';

    cout << bits.count() << '\n';

    bits.set(0);
    bits.reset(1);
    bits.flip(2);

    cout << bits.test(0) << '\n';


    /* ============================================================
       35. TUPLE
       ============================================================ */

    tuple<int, string, double> person =
        {25, "Yash", 90.5};

    cout << get<0>(person) << '\n';
    cout << get<1>(person) << '\n';
    cout << get<2>(person) << '\n';

    // Structured binding

    auto [age, name, score] = person;


    /* ============================================================
       QUICK COMPLEXITY CHEATSHEET

       vector
       ------------------------------
       access       O(1)
       push_back    amortized O(1)
       insert mid   O(n)
       erase mid    O(n)


       list
       ------------------------------
       insert       O(1)*
       erase        O(1)*
       access       O(n)

       * when iterator is already known


       set / map
       ------------------------------
       insert       O(log n)
       find         O(log n)
       erase        O(log n)


       unordered_set / unordered_map
       ------------------------------
       insert       average O(1)
       find         average O(1)
       erase        average O(1)

       worst case   O(n)


       priority_queue
       ------------------------------
       top          O(1)
       push         O(log n)
       pop          O(log n)


       stack / queue
       ------------------------------
       push         O(1)
       pop          O(1)
       top/front    O(1)
       ============================================================ */


    return 0;
}
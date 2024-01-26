<h2><a href="https://www.geeksforgeeks.org/problems/recamans-sequence4856/1?page=1&category=Recursion&difficulty=Easy&sortBy=submissions">Recamans sequence</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an integer <strong>n</strong>. Print first n elements of&nbsp;<a href="http://mathworld.wolfram.com/RecamansSequence.html">Recaman’s sequence</a>.<br>It is basically a function with domain and co-domain as natural numbers and 0. It is recursively defined as below:<br>Specifically, let a(n) denote the (n+1)-th term. (0 being already there).<br>The rule says:</span></p>
<p><span style="font-size: 14pt;">a(0) = 0<br>a(n) = a(n-1) - n, if a(n-1) - n &gt; 0 and is not already present<br>&nbsp; &nbsp; &nbsp; &nbsp;=&nbsp; a(n-1) + n otherwise. </span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> <br>n = 6
<strong>Output:</strong> <br>0 1 3 6 2 7
<strong>Explaination:</strong> <br>Follow the rule and this will be the output.</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> <br>n = 3
<strong>Output:</strong> <br>0 1 3
<strong>Explaination:</strong> If the rule is followed, it will produce this output.</span></pre>
<p><span style="font-size: 14pt;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>recamanSequence()</strong> which takes <strong>n</strong> as the input parameter and returns the sequence.</span></p>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Recursion</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;
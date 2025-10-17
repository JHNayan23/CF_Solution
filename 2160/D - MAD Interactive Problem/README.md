<h3><a href="https://codeforces.com/contest/2160/problem/D" target="_blank" rel="noopener noreferrer">MAD Interactive Problem</a></h3>

<div class="header"><div class="title">D. MAD Interactive Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p><span class="tex-font-style-it">This is an interactive problem.</span> </p><p>There is a secret sequence $$$a_1, a_2, \ldots, a_{2n-1},a_{2n}$$$, which contains each integer from $$$1$$$ to $$$n$$$ <span class="tex-font-style-bf">exactly twice</span>.</p><p>Your task is to guess the sequence by using queries of the following type:</p><ul> <li> "? $$$k\;j_1\;j_2\;\ldots\;j_k$$$" — select the integer $$$k$$$ ($$$1 \le k \le 2n$$$) and $$$k$$$ <span class="tex-font-style-bf">distinct</span> indices $$$j_1, j_2, \ldots, j_k$$$ ($$$1 \le j_1 , j_2 , \ldots , j_k \le 2n$$$). In response to the query, the jury will return $$$\text{MAD}([a_{j_1}, a_{j_2}, \ldots, a_{j_k}])$$$. </li></ul><p>We define the $$$\operatorname{MAD}$$$ (Maximum Appearing Duplicate) of an integer sequence as the largest integer that appears at least twice. Specifically, if there is no number that appears at least twice, the $$$\operatorname{MAD}$$$ value is $$$0$$$. Some examples are as follows:</p><ul> <li> $$$\operatorname{MAD}([1, 2, 1]) = 1$$$; </li><li> $$$\operatorname{MAD}([2, 2, 3, 3]) = 3$$$; </li><li> $$$\operatorname{MAD}([1, 2, 3, 4]) = 0$$$. </li></ul><p>Please identify the secret sequence <span class="tex-font-style-bf">using at most $$$3n$$$ queries</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 3000$$$). The description of the test cases follows. </p><p>The first line of each test case contains one integer $$$n$$$ ($$$2 \le n \le 300$$$).</p><p>It is guaranteed that the sum of $$$n^2$$$ over all test cases does not exceed $$$10^5$$$.</p><p>After you read this line of input, the interaction begins with your first query.</p></div><div><div class="section-title">Interaction</div><p>To make a query, output a line (without quotes) in the following format:</p><ul> <li> "<span class="tex-font-style-tt">? </span>$$$k\;j_1\;j_2\;\ldots\;j_k$$$" ($$$1 \le k \le 2n$$$, $$$1 \le j_1 , j_2 , \ldots , j_k \le 2n$$$) </li></ul><p>Here, the indices $$$j_1 , j_2 , \ldots , j_k$$$ which you selected must be <span class="tex-font-style-bf">pairwise distinct</span>.</p><p>Then, after each query, read a single integer — the answer to your query.</p><p>You can make at most $$$3n$$$ queries of this type.</p><p>If your program has found the sequence $$$a$$$, print the line (without quotes) in the following format:</p><ul> <li> "<span class="tex-font-style-tt">! </span>$$$a_1\;a_2\;\ldots\;a_{2n-1}\;a_{2n}$$$" ($$$1 \le a_i \le n$$$) </li></ul><p>Note that this does not count towards the query limit.</p><p>After this, proceed to the next test case, or exit if this is the last test case.</p><p>The interactor in this task is <span class="tex-font-style-bf">not adaptive</span>. In other words, the sequence $$$a$$$ does not change during the interaction.</p><p>If you make more than $$$3n$$$ queries during an interaction, your program must terminate immediately, and you will receive the <span class="tex-font-style-tt">Wrong Answer</span> verdict. Otherwise, you can get an arbitrary verdict because your solution will continue to read from a closed stream.</p><p>After printing each line, do not forget to output the end of line and flush the output buffer. Otherwise, you will receive the <span class="tex-font-style-tt">Idleness Limit Exceeded</span> verdict. To flush, use:</p><ul> <li> <span class="tex-font-style-tt">fflush(stdout)</span> or <span class="tex-font-style-tt">cout.flush()</span> in C++; </li><li> <span class="tex-font-style-tt">System.out.flush()</span> in Java; </li><li> <span class="tex-font-style-tt">stdout.flush()</span> in Python; </li><li> see the documentation for other languages. </li></ul><p><span class="tex-font-style-bf">Hacks</span></p><p>To make a hack, please use the following format:</p><p>The first line should contain the number of test cases $$$t$$$ ($$$1 \leq t \leq 3000$$$).</p><p>The first line of each test case should contain an integer $$$n$$$ ($$$2 \leq n \leq 300$$$).</p><p>The following line should contain $$$2n$$$ integers $$$a_1,a_2,\ldots,a_{2n}$$$ ($$$1 \leq a_i \leq n$$$). Each number from $$$1$$$ through $$$n$$$ must appear exactly twice.</p><p>The sum of $$$n^2$$$ over all test cases should not exceed $$$10^5$$$.</p><p>For example, the hack format corresponding to the example interaction is as follows. </p><pre class="verbatim">2<br>2<br>2 2 1 1<br>2<br>1 2 1 2<br><br></pre></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008441090754324014" id="id009257484154046768" class="input-output-copier">Copy</div></div><pre id="id008441090754324014">2
2

2

0

1

2

0

1

1

</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048921946149351714" id="id0024991925723287567" class="input-output-copier">Copy</div></div><pre id="id0048921946149351714">

? 2 2 1

? 2 1 3

? 3 1 3 4

! 2 2 1 1

? 2 1 2

? 2 1 3

? 3 1 3 4

! 1 2 1 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the hidden sequence is $$$a=[2,2,1,1]$$$.</p><p>For the query "<span class="tex-font-style-tt">? 2 2 1</span>", the jury returns $$$2$$$ because $$$\operatorname{MAD}([a_2, a_1]) = \operatorname{MAD}([2, 2]) = 2$$$.</p><p>For the query "<span class="tex-font-style-tt">? 2 1 3</span>", the jury returns $$$0$$$ because $$$\operatorname{MAD}([a_1, a_3]) = \operatorname{MAD}([2, 1]) = 0$$$.</p><p>For the query "<span class="tex-font-style-tt">? 3 1 3 4</span>", the jury returns $$$1$$$ because $$$\operatorname{MAD}([a_1, a_3, a_4]) = \operatorname{MAD}([2 ,1, 1]) = 1$$$.</p><p>Note that the example interaction is only for understanding statements and does <span class="tex-font-style-bf">not</span> guarantee finding a unique sequence $$$a$$$.</p></div>
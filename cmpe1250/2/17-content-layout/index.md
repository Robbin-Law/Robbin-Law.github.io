---
layout: page
title: 17 - Layout with Content
---
The following file is required for this lesson:
* [layout-with-content.zip](files/layout-with-content.zip)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps
1.	Download the **layout-with-content.zip** file and extract its contents to a folder called **layout-with-content**.
2.	The result of this demo should look like:<br>
![Layout-final.jpg](files/layout-final.jpg)
3.	Calculate the width of each `<li>` in the `<ul class="menu">` using the following steps:<br>
    <ol type="a">
        <li>Subtract the final right margin: <code>960 - 15 = 945</code></li>
        <li>Subtract the left margin from each &lt;li&gt;: <code>945 – 75 = 870</code></li>
        <li>Subtract the left and right border of each &lt;li&gt;: <code>870 – 20 = 850</code></li>
        <li>Divide that result by 5: <code>850 / 5 = 170</code></li>
        <li>Calculate the width of the each &lt;section&gt;:
            <ol type="i">
                <li>Subtract the final right margin: <code>960 – 15 = 945</code></li>
                <li>Subtract the left margin for each &lt;div&gt;: <code>945 – 30 = 915</code></li>
                <li>Subtract the left and right borders: <code>915 – 8 = 907</code></li>
                <li>Subtract the left and right padding: <code>907 – 60 = 847</code></li>
                <li>Divide the result by 2: <code>847 / 2 = 423.5</code></li>
            </ol>
        </li>
    </ol>
4.	In the **css** folder add the following code to the **styles.css** file:<br>
    <ol type="a">
        <li>Style the typography:<br>
        <img src="files/css-styles-a.jpg" alt="typography">
        </li>
        <li>Style the <b>.site-header</b> class:<br>
        <img src="files/css-styles-b.jpg" alt=".site-header">
        </li>
        <li>Style the <b>.site-header nav</b> class:<br>
        <img src="files/css-styles-c.jpg" alt=".site-header nav">
        </li>
        <li>Style the <b>.menu</b>:<br>
        <img src="files/css-styles-d.jpg" alt=".menu">
        </li>
        <li>Style the &lt;li&gt; in the &lt;nav&gt;:<br>
         img src="files/css-styles-e.jpg" alt="li nav">
        </li>
        <li>Style the &lt;main&gt; element:<br>
        <img src="files/css-styles-f.jpg" alt="main">
        </li>
        <li>Style the &lt;section&gt; elements in the &lt;main&gt;:<br>
        <img src="files/css-styles-g.jpg" alt="main section">
        </li>
    </ol>
5.	Open the **index.html** file in your browser. If the result is different, make any necessary corrections, and refresh your browser.
6.	In your browser, open the developer tools and examine the widths of each of the <code>class="menu"</code>:<br>
![width-menu.jpg](files/width-menu.jpg)
7.	Now examine a single `<li>` element:<br>
![width-li.jpg](files/width-li.jpg)
8.	Now examine a `<section>` element:<br>
![width-section.jpg](files/width-section.jpg)
9.	Now the `<main>`:<br>
![width-main.jpg](files/width-main.jpg)

## Exercise Instructions
There are no exercises related to this demo.

#### [Module Home](../)
#### [COMP1017 Home](../../)
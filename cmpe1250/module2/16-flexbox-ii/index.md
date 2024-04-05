---
layout: page
title: 16 - Flexbox II
---
The following file is required for this lesson:
* [demo-flex-wrap.zip](files/demo-flex-wrap.zip)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps
1.	Download the **demo-flex-wrap.zip** file and extract its contents to a folder called **demo-flex-wrap**.
2.	The result of this demo should look like:<br>
![flexwrap-final.jpg](files/flexwrap-final.jpg)
3.	Calculate the width of each `<div>` in the `<main>` using the following steps:<br>
    <ol type="a">
        <li>Subtract the final right margin: <code>960 - 20 = 940</code></li>
        <li>Subtract the left margin of each &lt;div&gt;: <code>940 – 40 = 900</code></li>
        <li>Divide that result by 2: <code>900 / 2 = 450</code></li>
        <li>Calculate the width of the "black" &lt;div&gt;: Subtract left and right margins: <code>960 – 40 = 920</code></li>
    </ol>
4.	In the **css** folder add the following code to the **styles.css** file:<br>
    <ol type="a">
        <li>Style the &lt;main&gt; element:<br>
        <img src="files/css-styles-a.jpg" alt="main style">
        </li>
        <li>Style the &lt;div&gt; elements:<br>
        <img src="files/css-styles-b.jpg" alt="div style">
        </li>
        <li>Colour the first two &lt;div&gt; elements:<br>
        <img src="files/css-styles-c.jpg" alt="div colours">
        </li>
        <li>Style the <b>.full-width</b>:<br>
        <img src="files/css-styles-d.jpg" alt=".width class">
        </li>
    </ol>
5.	Open the **index.html** file in your browser. If the result is different, make any necessary corrections, and refresh your browser.
6.	In your browser, open the developer tools and examine the widths of each of the `<div>` elements in the `<main>`:<br>
![div-element-01.jpg](files/div-element-01.jpg)<br>
![div-element-02.jpg](files/div-element-02.jpg)<br>
![div-element-03.jpg](files/div-element-03.jpg)

## Exercise Instructions
There are two exercises related to this demo. Download the following exercise files from Moodle:
* **ex-css-flex-4.zip**
* **ex-css-flex-5.zip**

Complete the exercises as per the instructions on Moodle. Remember to calculate the `<div>` widths using the Box Model.

## Lab Instructions
Complete the Lab for this lesson and submit as per the instructions on Moodle.

#### [Module Home](../)
#### [COMP1017 Home](../../)
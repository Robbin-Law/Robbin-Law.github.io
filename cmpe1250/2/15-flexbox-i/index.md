---
layout: page
title: 15 - Flexbox I
---
The following file is required for this lesson:
* [demo-flexbox.zip](files/demo-flexbox.zip)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps
1.	Download the **demo-flexbox.zip** file and extract its contents to a folder called **demo-flexbox**.
2.	The result of this demo should look like:<br>
![flexbox-final.jpg](files/flexbox-final.jpg)
3.	Modify the `<footer>` element in index.html to look like:<br>
![css-footer.jpg](files/css-footer.jpg)
4.	Calculate the width of each <div> in the <main> using the following steps:<br>
    <ol type="a">
        <li>Subtract the final right margin: <code>960 - 10 = 950</code></li>
        <li>Subtract the left margin of each &lt;div&gt;: <code>950 – 20 = 930</code></li>
        <li>Divide that result by 2: <code>930 / 2 = 465</code></li>
    </ol>
5.	In the **css** folder add the following code:<br>
    <ol type="a">
        <li>Style the &lt;main&gt; element:<br>
        <img src="files/css-styles-a.jpg" alt="main element">
        </li>
        <li>Style the &lt;div&gt; elements:<br>
        <img src="files/css-styles-b.jpg" alt="div elements">
        </li>
        <li>Create a class called <b>.red-paint</b>:<br>
        <img src="files/css-styles-c.jpg" alt="red-paint">
        </li>
        <li>Create a class called <b>.blue-paint</b>:<br>
        <img src="files/css-styles-d.jpg" alt="blue-paint">
        </li>
        <li>Create a class called <b>.black-paint</b>:<br>
        <img src="files/css-styles-e.jpg" alt="black-paint">
        </li>
        <li>Style the &lt;footer&gt; element:<br>
        <img src="files/css-styles-f.jpg" alt="footer element">
        </li>
    </ol>
6.	Open the **index.html** file in your browser. If the result is different, make any necessary corrections, and refresh your browser.
7.	In your browser, open the developer tools and examine the widths of each of the `<div>` elements in the `<main>`:<br>
![div-element-01.jpg](files/div-element-01.jpg)<br>
![div-element-02.jpg](files/div-element-02.jpg)<br>
![div-element-03.jpg](files/div-element-03.jpg)
8.	As an experiment, adjust the size in the main > div to:<br>
    <ol type="a">
        <li><code>width: 465px;</code></li>
        <li><code>width: 470px;</code></li>
    </ol>

## Exercise Instructions
There are three exercises related to this demo; the first one is this demo. Download the following exercise files from Moodle:
* **ex-css-flex-2.zip**
* **ex-css-flex-3.zip**

Complete the exercises as per the instructions on Moodle. Remember to calculate the `<div>` widths using the Box Model.

#### [Module Home](../)
#### [COMP1017 Home](../../)
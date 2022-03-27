---
layout: page
title: Flexbox Layouts (1)
---
<style>
    .css-class{
        color: firebrick;
        font-weight: bold;
    }
    .html-class{
        color: blue;
        font-weight: bold;
    }
</style>

The following files are required for this lesson:
* [demo-flexbox-content.zip](files/demo-flexbox-content.zip)
* [demo-flexbox-nav.zip](files/demo-flexbox-nav.zip)

## Introduction
This lesson will be taught in two parts:
* [Part 1: Flexbox Content](#content)
* [Part 2: Flexbox Nav](#nav)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps - <a ID="content">Part 1</a>: Flexbox Content
1.	Download the **demo-flexbox-content.zip** file and extract its contents to a folder named **demo-flexbox-content**.
2.	Open **index.html** in your browser to see something like:<br>
![flexbox1-01.jpg](files/flexbox1-01.jpg)
3.	The first result you need looks like:<br>
![flexbox1-02.jpg](files/flexbox1-02.jpg)
4.	In your code editor examine the code below:<br>
![flexbox1-index-01.jpg](files/flexbox1-index-01.jpg)
5.	Examine the code in **styles.css** and notice that there is no `.flex` class style rule created. Therefore, add the following rule, save, and refresh your browser:<br>
![flexbox1-css-styles-01.jpg](files/flexbox1-css-styles-01.jpg)<br>
You should now see:<br>
![flexbox1-02.jpg](files/flexbox1-02.jpg)
6.	Now you can change the `justify-content` to different values:<br>
    <ol type="a">
        <li><span class="css-class">flex-end</span>:<br>
        <img src="files/flexbox1-03.jpg" alt="flexbox1-03">
        </li>
        <li><span class="css-class">center</span>:<br>
        <img src="files/flexbox1-03.jpg" alt="flexbox1-03"></li>
        <li><span class="css-class">>space-between</span>:<br>
        <img src="files/flexbox1-03.jpg" alt="flexbox1-03"></li>
        <li><span class="css-class">space-around</span>:<br>
        <img src="files/flexbox1-03.jpg" alt="flexbox1-03"></li>
        <li><span class="css-class">space-evenly</span>:<br>
        <img src="files/flexbox1-03.jpg" alt="flexbox1-03"></li>
    </ol>
7. The next flexbox property is `align-items` which allows the distribution on the cross axis (y-axis). Reset the `justify-content` to `flex-start` and add the following code to the class (`justify-content: flex-start;` is shown only for reference to where this code goes):<br>
![flexbox1-css-styles-02.jpg](files/flexbox1-css-styles-02.jpg)
8.	As the result is the same as was shown in step 5, make the following change in your stylesheet before displaying the result in your browser:<br>
![flexbox1-css-styles-03.jpg](files/flexbox1-css-styles-03.jpg)<br>
![flexbox1-08.jpg](files/flexbox1-08.jpg)
9.	Now examine the other values for align-items:<br>
    <ol type="a">
        <li><span class="css-class">flex-start</span>:<br>
        <img src="files/flexbox1-09.jpg" alt="flexbox1-09">
        </li>
        <li><span class="css-class">flex-end</span>:<br>
        <img src="files/flexbox1-10.jpg" alt="flexbox1-10"></li>
        <li><span class="css-class">center</span>:<br>
        <img src="files/flexbox1-11.jpg" alt="flexbox1-11"></li>
        <li><span class="css-class">>baseline</span>:<br>
        <img src="files/flexbox1-12.jpg" alt="flexbox1-12">
        <br><b>Question</b>: What is the difference between center and baseline?
        </li>
    </ol>

## Steps - <a ID="nav">Part 2</a>: Flexbox Nav
1.	Download the **demo-flexbox-nav.zip** file from Moodle and extract its contents to a folder named **demo-flexbox-nav**.
2.	The goal of this demo should look like:<br>
![flexbox2-01.jpg](files/flexbox2-01.jpg)
3.	Open **index.html** in your browser to see something like:<br>
![flexbox2-02.jpg](files/flexbox2-02.jpg)<br>
**Question**: What do you think you need to do to achieve the desired output?
4.	Add the following style rules to your **styles.css** file:<br>
    <ol type="a">
        <li>Style the <span class="html-class">&lt;body&gt;</span> element:<br>
        <img src="files/flexbox2-css-styles-01.jpg" alt="flexbox2-css-styles-01">
        </li>
        <li>Add a <span class="css-class">.flex-container</span> class:<br>
        <img src="files/flexbox2-css-styles-02.jpg" alt="flexbox2-css-styles-02">
        </li>
        <li>Style the <span class="html-class">&lt;header&gt;</span>:<br>
        <img src="files/flexbox2-css-styles-03.jpg" alt="flexbox2-css-styles-03"><br>
        <img src="files/flexbox2-03.jpg" alt="flexbox2-03">
        </li>
        <li>As the LOGO is really big, and the image used is an SVG, you can set the size of the logo using:<br>
        <img src="files/flexbox2-css-styles-04.jpg" alt="flexbox2-css-styles-04"><br>
        <img src="files/flexbox2-04.jpg" alt="flexbox2-04">
        </li>
        <li>Now set the margins for the <span class="html-class">&lt;li&gt;</span> elements:<br>
        <img src="files/flexbox2-css-styles-05.jpg" alt="flexbox2-css-styles-05"><br>
        <img src="files/flexbox2-05.jpg" alt="flexbox2-05">
        </li>
        <li>Next, the two hyperlinks, <span class="css-class">sign-in</span> and <span class="css-class">sign-up</span>, need to be styled for hover effect and to make them look like buttons:<br>
        <img src="files/flexbox2-css-styles-06.jpg" alt="flexbox2-css-styles-06"><br>
        <img src="files/flexbox2-06.jpg" alt="flexbox2-06"></li>
        <li>When you hover your mouse over these simulated buttons, there is no visible change in their appearance. To get the desired effect add the following:<br>
        <img src="files/flexbox2-css-styles-07.jpg" alt="flexbox2-css-styles-07"><br>
        <img src="files/flexbox2-07.jpg" alt="flexbox2-07">
        </li>
    </ol>
5.	Optionally, you can add hyperlinks to the menu `<li>`'s and style them appropriately.

## Summary
More properties of flexbox will be demonstrated in the next demo.

### References
* [How to Use Flexbox](files/how-to-use-flexbox.pdf){:target="_blank"}

#### [Module Home](../)
#### [DMIT1530 Home](../../)
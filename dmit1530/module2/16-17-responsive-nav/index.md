---
layout: page
title: Responsive Navigation
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
* [demo-single-level-nav-main.zip](files/demo-single-level-nav-main.zip)
* [demo-multi-level-nav-main.zip](files/demo-multi-level-nav-main.zip)

## Introduction
This lesson will be taught in two parts:
* [Part 1: Single-level Navigation](#single)
* [Part 2: Mulit-level Navigation](#multi)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps - <a ID="single">Part 1</a>: Single-level Navigation
1.	Download the **demo-single-level-nav-main.zip** file and extract its contents to a folder **named demo-single-level-nav-main**.
2.	The completed output should look like:<br>
![single-nav-01.jpg](files/single-nav-01.jpg)<br>
Note: When the browser is resized, the menu will start to wrap to the next row.
3.	The index.html file needs to be updated as follows:<br>
    <ol type="a">
        <li>Modify the <span class="html-class">&lt;head&gt;</span> to be:<br>
        <img src="files/single-index-01.jpg" alt="single-index-01">
        </li>
        <li>Add the following to the <span class="html-class">&lt;body&gt;</span>:<br>
        <img src="files/single-index-02.jpg" alt="single-index-02">
        </li>
    </ol>
4.	The web page should now look like:<br>
![single-nav-02.jpg](files/single-nav-02.jpg)<br>
**Question**: What needs to be done to the menu?
5.	Open the **styles.css** and add the following style rules:<br>
    <ol type="a">
        <li>Style the <span class="html-class">&lt;body&gt;</span> element:<br>
        <img src="files/single-css-styles-01.jpg" alt="single-css-styles-01">
        </li>
        <li>Style the <span class="html-class">&lt;header&gt;</span>:<br>
        <img src="files/single-css-styles-02.jpg" alt="single-css-styles-02">
        </li>
        <li>Style the menu <span class="html-class">&lt;ul&gt;</span>:<br>
        <img src="files/single-css-styles-03.jpg" alt="single-css-styles-03">
        </li>
        <li>Style the <span class="html-class">&lt;a&gt;</span> elements of the menu:<br>
        <img src="files/single-css-styles-04.jpg" alt="single-css-styles-04"><br>
        Your web page should now look like:<br>
        <img src="files/single-nav-03.jpg" alt="single-nav-03"><br>
        <b>Question</b>: what needs to be done next?
        </li>
        <li>Now add the media query:<br>
        <img src="files/single-css-styles-05.jpg" alt="single-css-styles-05"><br>
        <b>Question</b>: What does this media query do? What size is <span class="css-class">30em</span>?
        </li>
        <li>When you resize your browser, you should see something like:<br>
        <img src="files/single-nav-04.jpg" alt="single-nav-04">
        </li>
    </ol>
6.	The `img` folder contains several SVG files. As a challenge, add these to your menu items and modify your **styles.css** code to produce the following output:<br>
![single-nav-05.jpg](files/single-nav-05.jpg)<br>
**Note**: the green text is a hover effect.

## Steps - <a ID="multi">Part 2</a>: Multi-level Navigation
1.	Download the **demo-multi-level-nav-main.zip** file and extract its contents to a folder named **demo-multi-level-nav-main**.
2.	The completed output should look like:
![multi-01.jpg](files/multi-01.jpg)<br>
**Note**: The **Events** menu also ahs a dropdown menu.
3.	Add the following code to **index.html**:<br>
    <ol type="a">
        <li>Update the <span class="html-class">&lt;head&gt;</span> to be:<br>
        <img src="files/multi-index-01.jpg" alt="multi-index-01">
        </li>
        <li>Add the <span class="html-class">&lt;header&gt;</span>:<br>
        <img src="files/multi-index-02.jpg" alt="multi-index-02">
        </li>
        <li>Add the sub-menu for <b>Books</b>:<br>
        <img src="files/multi-index-03.jpg" alt="multi-index-03">
        </li>
        <li>Add the sub-menu for <b>Events</b>:<br>
        <img src="files/multi-index-04.jpg" alt="multi-index-04">
        </li>
        <li>Add the SVG symbol to indicate there is a sub-menu (it is the same SVG for both Books and Events) after the menu item name and before the <span class="html-class">&lt;a&gt;</span> tag:<br>
        <img src="files/multi-index-05.jpg" alt="multi-index-05"><br>
        The code is easier to just copy and paste the <span class="html-class">&lt;path d="…"&gt;</span> from the SVG file in the img folder into your code editor.
        </li>
    </ol>
4.	Running index.html in your browser should now look like:<br>
![multi-02.jpg](files/multi-02.jpg)<br>
**Question**: What needs to be done now?.
5.	Open your **styles.css** file and add the following style rules:<br>
    <ol type="a">
        <li>Style the <span class="html-class">&lt;body&gt;</span> and <span class="html-class">&lt;header&gt;</span> elements:<br>
        <img src="files/multi-css-styles-01.jpg" alt="multi-css-styles-01">
        </li>
        <li>Add a style rule for the <span class="html-class">&lt;ul&gt;</span> in the menu:<br>
        <img src="files/multi-css-styles-02.jpg" alt="multi-css-styles-02">
        </li>
        <li>Style the <span class="html-class">&lt;a&gt;</span> elements in the menu:<br>
        <img src="files/multi-css-styles-03.jpg" alt="multi-css-styles-03">
        </li>
        <li>Add a hover effect to the menu links:<br>
        <img src="files/multi-css-styles-04.jpg" alt="multi-css-styles-04">
        </li>
        <li>Style the sub-menus and the SVG:<br>
        <img src="files/multi-css-styles-05.jpg" alt="multi-css-styles-05">
        </li>
    </ol>
6.	Refreshing your browser, you should now see something like:<br>
![multi-03.jpg](files/multi-03.jpg)<br>
**Question**: What is next?.
7.	It is time to add a media query to **styles.css**:<br>
    <ol type="a">
        <li>Add a media query and style the menu:<br>
        <img src="files/multi-css-styles-06.jpg" alt="multi-css-styles-06">
        </li>
        <li>Add another rule to your media query to style the list items:<br>
        <img src="files/multi-css-styles-07.jpg" alt="multi-css-styles-07">
        </li>
        <li>Add rules to style the sub-menu:<br>
        <img src="files/multi-css-styles-08.jpg" alt="multi-css-styles-08">
        </li>
        <li>Add rules to style the dropdown for the sub-menus:<br>
        <img src="files/multi-css-styles-09.jpg" alt="multi-css-styles-09">
        </li>
        <li>There does not appear to be a significant change if you now refresh your browser. You need to hide and position the sub-menus by adding the following rule:<br>
        <img src="files/multi-css-styles-10.jpg" alt="multi-css-styles-10">
        </li>
        <li>Now add some layout rules for the menus:<br>
        <img src="files/multi-css-styles-11.jpg" alt="multi-css-styles-11"><br>
        The sub-menus are hidden but still affect the display of the menu:<br>
        <img src="files/multi-03.jpg" alt="multi-03"><br>
        Notice the vertical scroll bar which indicates there is still something there.<br>
        <b>Question</b>: How can this be fixed?
        </li>
        <li>Add a rule for the hover state of the sub-menus:<br>
        <img src="files/multi-css-styles-12.jpg" alt="multi-css-styles-12">
        </li>
        <li>Add a transition effect for the menu:<br>
        <img src="files/multi-css-styles-13.jpg" alt="multi-css-styles-13">
        </li>
        <li>Add accessibility and tab navigation:<br>
        <img src="files/multi-css-styles-14.jpg" alt="multi-css-styles-14"><br>
        Refresh your browser and use the <b>tab</b> key to tab through the menus.<br>
        <img src="files/multi-04.jpg" alt="multi-04">
        </li>
        <li>Add another media query:<br>
        <img src="files/multi-css-styles-15.jpg" alt="multi-css-styles-15"><br>
        <img src="files/multi-05.jpg" alt="multi-05"><br>
        <b>Question</b>: What happened?
        </li>
    </ol>

**Question**: In step 7.g, the vertical scrollbar was seen but after all the style rules were applied it was still there, why?


#### [Module Home](../)
#### [DMIT1530 Home](../../)

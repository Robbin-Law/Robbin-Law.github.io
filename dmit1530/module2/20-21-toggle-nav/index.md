---
layout: page
title: Toggle / Hamburger Navigation
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
* [demo-toggle-nav.zip](files/demo-toggle-nav.zip)
* [toggle-nav-3-images.zip](files/toggle-nav-3-images.zip)

## Introduction
This lesson will be taught in three stages:
* [Stage 1: Basic Toggle Nav](#toggle1)
* [Stage 2: Toggle Nav Version 2](#toggle2)
* [Stage 3: Toggle Nav Version 3](#toggle3)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps – <a ID="toggle1">Stage 1</a>: Basic Toggle Nav
1.	Download the **demo-toggle-nav.zip** file and extract its contents to a folder named **demo-toggle-nav**.
2.	The completed output should look like when you resize your browser:<br>
![toggle1-01.jpg](files/toggle1-01.jpg)![toggle1-02.jpg](files/toggle1-02.jpg)<br>
**Note**: When the browser is resized, the menu will start to wrap to the next row.
3.	Add the following code to your **index.html**:<br>
    <ol type="a">
        <li>Add the <span class="html-class">&lt;header&gt;</span> block:<br>
        <img src="files/toggle1-index-01.jpg" alt="toggle1-index-01">
        </li>
         <li>Add the <span class="html-class">&lt;section&gt;</span> block:<br>
        <img src="files/toggle1-index-02.jpg" alt="toggle1-index-02">
        </li>
         <li>Add the following code, which <b>must</b> the last line of code in the <span class="html-class">&lt;body&gt;</span>:<br>
        <img src="files/toggle1-index-03.jpg" alt="toggle1-index-03"><br>
        Open <b>index.html</b> in the browser to see:<br>
        <img src="files/toggle1-03.jpg" alt="toggle1-03"><br>
        <b>Question</b>: What needs to be done now?
        </li>
    </ol>
4.	Open **styles.css** and add the following:<br>
    <ol type="a">
        <li>You will need a <span class="css-class">.flex-container</span> class:<br>
        <img src="files/toggle1-css-styles-01.jpg" alt="toggle1-css-styles-01">
        </li>
        <li>Start styling the header and nav:<br>
        <img src="files/toggle1-css-styles-02.jpg" alt="toggle1-css-styles-02">
        </li>
        <li>Add styling for the menu and hover effects:<br>
        <img src="files/toggle1-css-styles-03.jpg" alt="toggle1-css-styles-03">
        </li>
        <li>Style the toggle button:<br>
        <img src="files/toggle1-css-styles-04.jpg" alt="toggle1-css-styles-04">
        </li>
        <li>Style the menu list items:<br>
        <img src="files/toggle1-css-styles-05.jpg" alt="toggle1-css-styles-05">
        </li>
        <li>Refresh your browser to see:<br>
        <img src="files/toggle1-04.jpg" alt="toggle1-04"><br>
        <b>Note</b>: The <em>hamburger</em> icon does not collapse the menu; it is still fixed in place.<br>
        <b>Question</b>: What is the next step?
        </li>
    </ol>
5.	The next step is to hide the menu. Add the following rules to your **styles.css**:<br>
    <ol type="a">
        <li>Style the <span class="css-class">header nav</span>:<br>
        <img src="files/toggle1-css-styles-06.jpg" alt="toggle1-css-styles-06">
        </li>
        <li>Create a class that will show the menu:<br>
        <img src="files/toggle1-css-styles-07.jpg" alt="toggle1-css-styles-07"><br>
        Refresh your browser to see (press the <em>hamburger</em> icon to see the changes):<br>
        <img src="files/toggle1-05.jpg" alt="toggle1-05"><br>
        <b>Question</b>: What is the next step?
        </li>
    </ol>
6.	Next the `<section>` needs some styling so add the following style rules:<br>
    <ol type="a">
        <li>Initial section styling:<br>
        <img src="files/toggle1-css-styles-08.jpg" alt="toggle1-css-styles-08">
        </li>
        <li>Style the paragraph:<br>
        <img src="files/toggle1-css-styles-09.jpg" alt="toggle1-css-styles-09">
        </li>
        <li>Style the heading:<br>
        <img src="files/toggle1-css-styles-10.jpg" alt="toggle1-css-styles-10"><br>
        Refresh your browser to see (you will need to resize your browser):<br>
        <img src="files/toggle1-06.jpg" alt="toggle1-06"><br>
        <b>Question</b>: What needs to be done next?
        </li>
    </ol>
7.	A media query is needed, thus add the following media query:<br>
    <ol type="a">
        <li>Hide the toggle button (<em>hamburger</em> icon):<br>
        <img src="files/toggle1-css-styles-11.jpg" alt="toggle1-css-styles-11">
        </li>
        <li>Show the nav by default, thus add the following to your media query:<br>
        <img src="files/toggle1-css-styles-12.jpg" alt="toggle1-css-styles-12">
        </li>
    </ol>
8.	The result, at a wider browser width, is:<br>
![toggle1-07.jpg](files/toggle1-07.jpg)<br>
**Question**: When the toggle button is pressed, the section content is pushed down. Would it not be better if the dropdown menu were an overlayed menu?

## Steps – <a ID="toggle2">Stage 2</a>: Toggle Nav Version 2
1.	To get the desired effect make the following changes to your **styles.css** file:<br>
    <ol type="a">
        <li>Modify the <span class="css-class">header nav</span> style rule as shown below:<br>
        <img src="files/toggle2-css-styles-01.jpg" alt="toggle2-css-styles-01">
        </li>
        <li>Add some padding to the menu (add this below the <span class="css-class">header nav</span> style rule):<br>
        <img src="files/toggle2-css-styles-02.jpg" alt="toggle2-css-styles-02">
        </li>
    </ol>
2.	Refresh your browser to see the menu now overlays the section content.<br>
![toggle2-01.jpg](files/toggle2-01.jpg)

## Steps – <a ID="toggle3">Stage 3</a>: Toggle Nav Version 3
1.	Download the **toggle-nav-3-images.zip** file from Moodle and extract the images to your **img** folder.
2.	The completed output should look like (partial view shown):<br>
![toggle3-01.jpg](files/toggle3-01.jpg)
3.	The first step is to add the following to your **index.html**:
    <ol type="a">
        <li>Add the following below the <span class="html-class">&lt;h2&gt;</span> in the <span class="html-class">&lt;section&gt;</span>:<br>
        <img src="files/toggle3-index-01.jpg" alt="toggle3-01"><br>
        You should see the images below the heading.
    </ol>
4.	Now add the following style rules below the section h2 style rule:<br>
    <ol type="a">
        <li>Style the <span class="css-class">.gallery</span> class:<br>
        <img src="files/toggle3-css-styles-01.jpg" alt="toggle3-css-styles-01">
        </li>
        <li>Style the <span class="css-class">.thumbnail</span> class:<br>
        <img src="files/toggle3-css-styles-02.jpg" alt="toggle3-css-styles-02">
        </li>
        <li>Style the <span class="html-class">&lt;span&gt;</span> class:<br>
        <img src="files/toggle3-css-styles-03.jpg" alt="toggle3-css-styles-03">
        </li>
    </ol>
5.	Test the results in your browser; use different browser widths to see the full effects.

#### [Module Home](../)
#### [DMIT1530 Home](../../)
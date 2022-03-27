---
layout: page
title: Responsive Card
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
* [demo-responsive-card-component.zip](files/demo-responsive-card-component.zip)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps:
1. Download the **demo-responsive-card-component.zip** file and extract its contents to a folder named **demo-responsive-card-component**.
2.	The completed output should look like:<br>
    <ol type="a">
        <li>Narrow Width:<br>
        <img src="files/card-01.jpg" alt="card-01">
        </li>
        <li>Wide Width:<br>
        <img src="files/card-02.jpg" alt="card-02">
        </li>
    </ol>
3.	Modify your **index.html** with the code shown below:<br>
    <ol type="a">
        <li>Update the <span class="html-class">&lt;head&gt;</span> with links to the stylesheets:<br>
        <img src="files/card-index-01.jpg" alt="card-index-01">
        </li>
        <li>Add the following div elements:<br>
        <img src="files/card-index-02.jpg" alt="card-index-02">
        </li>
        <li>Add a <span class="html-class">&lt;picture&gt;</span> element:<br>
        <img src="files/card-index-03.jpg" alt="card-index-03">
        </li>
         <li>Add the following below the <span class="html-class">&lt;/picture&gt;</span> element:<br>
        <img src="files/card-index-04.jpg" alt="card-index-04">
        </li>
        <li>Add the SVG below the paragraph (remember to copy the code from the SVG file)</li>
        <li>Below the flex container div, add the following (inside the paragraph tags, is a paragraph of lorem ipsum text):<br>
        <img src="files/card-index-05.jpg" alt="card-index-05">
        </li>
        <li>Between the two paragraphs, add the <b>thumbs-up-icon.svg</b> (remember to copy the code from the SVG file):<br>
        <img src="files/card-index-06.jpg" alt="card-index-06">
        </li>
    </ol>
4.	Refresh your browser and scroll to see something like:<br>
![card-03.jpg](files/card-03.jpg)<br>**Question**: What needs to be done next?
5.	Open your **styles.css** file and add the following style rules:<br>
    <ol type="a">
        <li>Add some initial style rules:<br>
        <img src="files/card-css-styles-01.jpg" alt="card-css-styles-01">
        </l1>
        <li>Style the card:<br>
        <img src="files/card-css-styles-02.jpg" alt="card-css-styles-02">
        </l1>
        <li>Style the SVG:<br>
        <img src="files/card-css-styles-03.jpg" alt="card-css-styles-03">
        </l1>
        <li>Style the card footer contents:<br>
        <img src="files/card-css-styles-04.jpg" alt="card-css-styles-04">
        </l1>
    </ol>
6.	Refresh your browser and use a wide width to see:<br>
![card-04.jpg](files/card-04.jpg)<br>**Question**: Now what needs to be done?
7.	You now must add the following media query for the wide width of the browser:<br>
    <ol type="a">
        <li>Add the following media query:<br>
        <img src="files/card-css-styles-05.jpg" alt="card-css-styles-05">
        </l1>
    </ol>
8.	Refresh your browser to see the desired output at both narrow and wide browser widths.

#### [Module Home](../)
#### [DMIT1530 Home](../../)
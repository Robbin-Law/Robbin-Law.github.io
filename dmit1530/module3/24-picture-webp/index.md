---
layout: page
title: Picture Element + WebP
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
* [demo-picture-element.zip](files/demo-picture-element.zip)
* [demo-responsive-card-component.zip](files/demo-responsive-card-component.zip)

## Introduction
This lesson has two components:
* [Picture Element](#picture)
* [Picture Element with Webp](#webp)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps:
### <a ID="picture">Picture Element</a>
1.	Download the **demo-picture-element.zip** file and extract its contents to a folder named **demo-picture-element**.
2.	The completed output should look like when you resize your browser:<br>
![picture-01.jpg](files/picture-01.jpg)<br>
**Note**: At a larger resolution, the images will be larger.
3.	The first step is to add the picture element to index.html:<br>
    <ol type="a">
        <li>Add the following code just before <span class="html-class">&lt;/section&gt;</span>:<br>
        <img src="files/picture-index-01.jpg" alt="picture-index-01"><br>
        <b>Note</b>: The <span class="html-class">&lt;picture&gt;</span> element has a <em>built-in</em> media query to swap out the image when the browser width reaches the breakpoint.
    </ol>

### <a ID="webp">Picture Element with Webp</a>
1. Download the **demo-picture-webp-main.zip** file and extract its contents to a folder named **demo-picture-webp-main**.
2.	The completed output should look like:<br>
    <ol type="a">
        <li>Google Chrome:<br>
        <img src="files/webp-chrome.jpg" alt="webp-chrome">
        </li>
        <li>Edge:<br>
        <img src="files/webp-edge.jpg" alt="webp-edge">
        </li>
        <li>Internet Explorer:<br>
        <img src="files/webp-ie.jpg" alt="webp-ie">
        </li>
        <li>Firefox:<br>
        <img src="files/webp-firefox.jpg" alt="webp-firefox">
        </li>
        <li>Safari:<br>
        <img src="files/webp-safari.jpg" alt="webp-chrome">
        </li>
    </ol>

## Steps - <a ID="card">Part 2</a>: Responsive Card
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
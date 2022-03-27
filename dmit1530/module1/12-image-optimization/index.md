---
layout: page
title: Image Optimization for the Web
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
* [demo-optimized-photos.zip](files/demo-optimized-photos.zip)
* [demo-svg.zip](files/demo-svg.zip)

## Introduction
This lesson will be taught in two parts:
* [Part 1: Image Optimization](#optimize)
* [Part 2: SVG](#svg)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps - <a ID="optimize">Part 1</a>: Image Optimization
1.	Download the **demo-optimized-photos.zip** file and extract its contents to a folder named **demo-optimized-photos**.
2.	Add the code below to the `<body>` of index.html:<br>
![image-index-01.jpg](files/image-index-01.jpg)
3.	Save and refresh in your browser to see:<br>
![image-opt-01.jpg](files/image-opt-01.jpg)
4.	In your **styles.css** file add the `.photos` class style rule:<br>
![image-css-styles-01.jpg](files/image-css-styles-01.jpg)
5.	You should now see something like the following:<br>
![image-opt-02.jpg](files/image-opt-02.jpg)<br>
**Question**: What effect did the styling rule have on the output?
6.	Now shrink the width of your browser to get the following:<br>
![image-opt-03.jpg](files/image-opt-03.jpg)<br>
**Question**: Why did the output change?
7.	Now you want to add some spacing between our images. Add the following style rule:<br>
![image-css-styles-02.jpg](files/image-css-styles-02.jpg)<br>
**Question**: What is the `1 rem`?
8.	Refresh your browser and you should now see:<br>
![image-opt-04.jpg](files/image-opt-04.jpg)<br>
![image-opt-05.jpg](files/image-opt-05.jpg)<br>
**Question**: Any questions relating to the final output?
9.	As before, you need to add some meta data to the `<head>` of your web page. Add something close to the following:<br>
![image-index-02.jpg](files/image-index-02.jpg)
10.	**Question**: How would different types of images affect the load time of this web page?

## Steps - <a ID="svg">Part 2</a>: SVG
1.	Download the **demo-svg.zip** file and extract its contents to a folder named **demo-svg**.
2.	In your code editor, view the **browser-website.svg** file. What do you notice about this file?
3.	Add the code below to the `<p>` in the `<section>` of index.html:<br>
![svg-index-01.jpg](files/svg-index-01.jpg)
4.	Save and refresh in your browser to see:<br>
![svg-01.jpg](files/svg-01.jpg)<br>You will have to scroll to see the full image.
5.	Experiment by increasing or minimizing the output % of the browser. What effect did this have on the display size of the image and the resolution of the image? [_Hint: Compare the image to the size of the text on the web page._]
6.	Now, comment out the `<img>` element you added.
7.	In your code editor, select the browser-website.svg file. Copy all the code that starts with `<svg> … </svg>` block and paste below the commented out `<img>` element. Save and refresh your browser to see:<br>
![svg-02.jpg](files/svg-02.jpg)
8.	You will want to be able to scale this. To do this you need to add the following style rules to your **styles.css** file:
    <ol type="a">
        <li>Add spacing to the <span class="html-class">&lt;section&gt;</span> element:<br>
        <img src="files/svg-css-styles-01.jpg" alt="svg-css-styles-01">
        </li>
        <li>Style the <span class="html-class">&lt;svg&gt;</span> element:<br>
        <img src="files/svg-css-styles-02.jpg" alt="svg-css-styles-02"><br>
        At this point, save and refresh the browser to see:<br>
        <img src="files/svg-03.jpg" alt="svg-03">
        </li>
        <li>Add a hover effect to the <span class="html-class">&lt;svg&gt;</span> element:<br>
        <img src="files/svg-css-styles-03.jpg" alt="svg-css-styles-03"><br>
        Once again, save and refresh your browser and test the hover action to see:<br>
        <img src="files/svg-04.jpg" alt="svg-04">
        </li>
        <li>Now experiment by changing the width and height of the <span class="html-class">&lt;svg&gt;</span> element:<br>
        <img src="files/svg-05.jpg" alt="svg-05"><br>Note: the image does not change in size.
        </li>
        <li>Now you can scale the <span class="html-class">&lt;svg&gt;</span> by scaling the container by commenting out the code you just added and add the following code:<br>
        <img src="files/svg-css-styles-04.jpg" alt="svg-css-styles-04">
        </li>
        <li>Uncomment the <span class="html-class">&lt;img&gt;</span> element in your **index.html** and the result should look like:<br>
        <img src="files/svg-06.jpg" alt="svg-06">
        </li>
        <li>Now change the width and heigh in the <span class="css-class">.svg</span> class:<br>
        <img src="files/svg-07.jpg" alt="svg-07">
        </li>
        <li>For a final comparison uncomment the <span class="html-class">&lt;svg&gt;</span> style rule so that both the element and the class style rules are being applied:<br>
        <img src="files/svg-08.jpg" alt="svg-08">
        </li>
    </ol>
9.	Even though we set both width and height for the SVG image, the SVG scaled proportionally. For your personal understanding, research if it is possible to scale an SVG with width and height of different values.

### Resopurces
* [Choosing the Right Image](files/choosing-the-right-image.pdf){:target="_blank"}

#### [Module Home](../)
#### [DMIT1530 Home](../../)
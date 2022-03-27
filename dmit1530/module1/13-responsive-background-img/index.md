---
layout: page
title: Responsive Background Images
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

The following file is required for this lesson:
* [demo-responsive-bg.zip](files/demo-responsive-bg.zip)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps
1.	Download the demo-responsive-bg.zip file from Moodle and extract its contents to a folder named demo-responsive-bg.
2.	The completed output should look like:<br>
![background-01.jpg](files/background-01.jpg)
3.	The first thing to do is find the size of the original image; this is needed as a starting point for this demo:<br>
![img-properties.jpg](files/img-properties.jpg)
4.	Use Photoshop or [Squoosh](https://squoosh.app/){:target="_blank"} to resize the image (save each resized image but do not overwrite the original file):<br>
    <ol type="a">
        <li>600px x 400px: name this <b>small-bg.jpg</b></li>
        <li>1200px x 800px: name this file <b>med-bg.jpg</b></li>
        <li>1800px x 1200px: name this file <b>lg-bg.jpg</b></li>
    </ol><br>
    **Note**: you should now have 4 images in your **img** folder:<br>
    ![img-folder.jpg](files/img-folder.jpg)
5.	You will need to add style rules to the **styles.css** file:<br>
    <ol type="a">
        <li>Start with the smallest image:<br>
        <img src="files/css-styles-01.jpg" alt="css-styles-01">
        </li>
        <li>Style the <span class="html-class">&lt;h1&gt;</span>:<br>
        <img src="files/css-styles-02.jpg" alt="css-styles-02">
        </li>
    </ol>
6.	As the width of the browser increases, the quality of the image degrades. To fix this we need a media query:<br>
    <ol type="a">
        <li>First break point at 850px:<br>
        <img src="files/css-styles-03.jpg" alt="css-styles-03">
        </li>
        <li>Next break point at 1000px:<br>
        <img src="files/css-styles-04.jpg" alt="css-styles-04">
        </li>
        <li>Finally, a full-sized image for wide screens:<br>
        <img src="files/css-styles-05.jpg" alt="css-styles-05">
        </li>
        <li>Open the browser’s developer tools to see:<br>
            <ol type="i">
                <li>Smallest resolution:<br>
                <img src="files/background-02.jpg" alt="background-02">
                </li>
                <li>Medium image:<br>
                <img src="files/background-03.jpg" alt="background-03">
                </li>
                <li>Large image:<br>
                <img src="files/background-04.jpg" alt="background-04">
                </li>
            </ol>
        </li>
    </ol>

## Additional Layout
For extra practice you will add content and styling rules to get the output shown below:<br>
![background-05.jpg](files/background-05.jpg)
1.	The **index.html** file needs the following code added below the `<header>` block:<br>
![index-01.jpg](files/index-01.jpg)
2.	The following code needs to be added to the **styles.css** file:<br>
    <ol type="a">
        <li>Add a <span class="css-class">.flex-container</span> class:<br>
        <img src="files/css-styles-06.jpg" alt="css-styles-06">
        </li>
        <li>Style the <span class="html-class">&lt;section&gt;</span> element:<br>
        <img src="files/css-styles-07.jpg" alt="css-styles-07">
        </li>
        <li>Style the first <span class="html-class">&lt;section&gt;</span> element:<br>
        <img src="files/css-styles-08.jpg" alt="css-styles-08">
        </li>
        <li>Style the second <span class="html-class">&lt;section&gt;</span> element:<br>
        <img src="files/css-styles-09.jpg" alt="css-styles-09">
        </li>
        <li>Style the last <span class="html-class">&lt;section&gt;</span> element:<br>
        <img src="files/css-styles-10.jpg" alt="css-styles-10">
        </li>
        <li>Add a media query so you can switch the order back to the original order:<br>
        <img src="files/css-styles-11.jpg" alt="css-styles-11">
        </li>
        <li>Add a media query for a fixed-width, edge-to-edge, background image:<br>
        <img src="files/css-styles-12.jpg" alt="css-styles-12">
        </li>
    </ol>
3.	Refresh your browser to see the final output. Additionally, use your browser’s developer tools to see the results at different screen widths.

#### [Module Home](../)
#### [DMIT1530 Home](../../)
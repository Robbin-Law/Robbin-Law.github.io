---
Layout: page
Title: Responsive Web Design (RWD)
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
* [demo-liquid-fixed-layout.zip](files/demo-liquid-fixed-layout.zip)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps
1.	Download the **demo-liquid-fixed-layout.zip** file and extract its contents to a folder named **demo-liquid-fixed-layout**.
2.	The output of this demo should look like:<br>
![rwd-01.jpg](files/rwd-01.jpg)
3.	The first step is to code the layout in **index.html** (all classes shown in the code will need to be added to your **styles.css** file):<br>
    <ol type="a">
        <li>Create a container:<br>
        <img src="files/index-01.jpg" alt="index-01">
        </li>
        <li>Add a <span class="html-class">&lt;header&gt;</span> block inside the container:<br>
        <img src="files/index-02.jpg" alt="index-02">
        </li>
        <li>Add the <span class="html-class">&lt;main&gt;</span> with a <span class="html-class">&lt;section&gt;</span>:<br>
        <img src="files/index-03.jpg" alt="index-03">
        </li>
        <li>Add a flex container below the <span class="html-class">&lt;section&gt;</span> created above:<br>
        <img src="files/index-04.jpg" alt="index-04">
        </li>
        <li>Add a <span class="html-class">&lt;footer&gt;</span>:<br>
        <img src="files/index-05.jpg" alt="index-05"><br>
        At this point, your web page should look like:<br>
        <img src="files/rwd-02.jpg" alt="rwd-02">
        </li>
    </ol>
4.	Now you need to add style rules to your **styles.css** file:<br>
    <ol type="a">
        <li>Style the <span class="html-class">&lt;body&gt;</span> element with generic CSS; this will be mobile first:<br>
        <img src="files/css-styles-01.jpg" alt="css-styles-01">
        </li>
        <li>Style the <span class="html-class">&lt;header&gt;</span> and <span class="html-class">&lt;footer&gt;</span> elements:<br>
        <img src="files/css-styles-02.jpg" alt="css-styles-02">
        </li>
        <li>Style the <span class="html-class">&lt;nav&gt;</span> element:<br>
        <img src="files/css-styles-03.jpg" alt="css-styles-03"><br>
        At this point, your web page should look like:<br>
        <img src="files/rwd-03.jpg" alt="rwd-03">
        </li>
        <li>As the <span class="html-class">&lt;section&gt;</span> blocks are not yet being displayed, are they still there? The answer is yes:<br>
        <img src="files/rwd-04.jpg" alt="rwd-04"><br>
        Now style the <b>.promo</b> class:<br>
        <img src="files/css-styles-04.jpg" alt="css-styles-04"><br>
        <img src="files/rwd-05.jpg" alt="rwd-05">
        </li>
        <li>You need each of the promo blocks to be side-by-side, equally spaced, thus add the <span class="css-class">.flex-container</span> class:<br>
        <img src="files/css-styles-05.jpg" alt="css-styles-05"><br>
        <img src="files/rwd-06.jpg" alt="rwd-06">
        </li>
        <li>You still need the <span class="css-class">.banner</span> class, which is:<br>
        <img src="files/css-styles-06.jpg" alt="css-styles-06"><br>
        <img src="files/rwd-07.jpg" alt="rwd-07">
        </li>
        <li>Next add some padding for the <span class="html-class">&lt;footer&gt;</span> element:<br>
        <img src="files/css-styles-07.jpg" alt="css-styles-07"><br>
        <img src="files/rwd-08.jpg" alt="rwd-08">
        </li>
    </ol>
5.	The next step is to add a media query that will make the web page change at a specific width. Add the following to your **styles.css** file:<br>
![css-styles-08.jpg](files/css-styles-08.jpg)
6.	You need to test this using the browser’s developer tools. Remember the min-width: 1366 px; thus, once the page width exceeds the minimum width (larger screen resolution) the web page will change:<br>
![rwd-09.jpg](files/rwd-09.jpg)&nbsp;![rwd-10.jpg](files/rwd-10.jpg)<br>
![rwd-11.jpg](files/rwd-11.jpg)&nbsp;![rwd-12.jpg](files/rwd-12.jpg)<br>
7.	The next step is to see how images behave in this layout. Add the following code below the `<h2>` in each `<section class="promo">`:<br>
![css-styles-09.jpg](files/css-styles-09.jpg)
8.	Notice how the images have broken the layout:<br>
![rwd-13.jpg](files/rwd-13.jpg)
9.	To fix this there needs to be a style rule to set the maximum width of the `<img>` element to 100%. Open the reset.css file and scroll down to line 52. Replace the `÷` symbol with the following code:<br>
![css-styles-10.jpg](files/css-styles-10.jpg)<br>
![rwd-14.jpg](files/rwd-14.jpg)
10.	Using the browser’s developer tools, change the width of the web page and notice how the images scale.

## Exercise
Open the **flexbox-exercise-instructions.docx** file on Moodle and follow the instructions to complete the exercise for this lesson.

#### [Module Home](../)
#### [DMIT1530 Home](../../)

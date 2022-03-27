---
layout: page
title: HTML5 Forms
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
* [responsive-form.zip](files/responsive-form.zip)

## Introduction
This lesson builds on the form concepts taught in [COMP1017](../../../comp1017/module3/24-styling-forms/styling-forms.md){:target="_blank"}.

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps
1.	Download the **responsive-form.zip** file and extract its contents to a folder named **responsive-form**.
2.	The output of this lesson should look like:<br>
    <ol type="a">
        <li>Wide width version:<br>
        <img src="files/forms-01.jpg" alt="forms-01.jpg">
        </li>
        <li>Narrow width version:<br>
        <img src="files/forms-02.jpg" alt="forms-02.jpg">
        </li>
    </ol>
3.	The first step is to build the form in HTML, thus add the following to your **index.html**:<br>
    <ol type="a">
        <li>Add a <span class="html-class">&lt;section&gt;</span> for your form (the paragraph has lorem ipsum text):<br>
        <img src="files/index-01.jpg" alt="index-01">
        </li>
        <li>Add a <span class="html-class">&lt;form&gt;</span> below the div:<br>
        <img src="files/index-02.jpg" alt="index-02">
        </li>
        <li>To group the form elements nively, add a <span class="html-class">&lt;fieldset&gt;</span> to the form:<br>
        <img src="files/index-03.jpg" alt="index-03">
        </li>
        <li>Add a flex container div:<br>
        <img src="files/index-04.jpg" alt="index-04">
        </li>
        <li>Add the input fields of the form:<br>
        <img src="files/index-05.jpg" alt="index-05">
        </li>
        <li>Add the submit button:<br>
        <img src="files/index-06.jpg" alt="index-06">
        </li>
    </ol>
4.	Refresh your browser to see:<br>
![forms-03.jpg](files/forms-03.jpg)<br>**Question**: What are the next steps?
5.	Open your **styles.css** file and add the following style rules:<br>
    <ol type="a">
        <li>Add the <span class="css-class">:root</span> style rule:<br>
        <img src="files/css-styles-01.jpg" alt="css-styles-01"><br>
        The <span class="css-class">:root</span> style rule:<br>
        <img src="files/css-styles-02.jpg" alt="css-styles-02"><br>
        <b>Reference</b>: <a href="https://developer.mozilla.org/en-US/docs/Web/CSS/:root" target="_blank">https://developer.mozilla.org/en-US/docs/Web/CSS/:root</a>
        </li>
        <li>Style the basic elements of the web page:<br>
        <img src="files/css-styles-03.jpg" alt="css-styles-03"><br>
        Notice the use of one of the <span class="css-class">:root</span> defined colours.
        </li>
        <li>Start styling the form by styling the <span class="css-class">&lt;fieldset&gt;</span>:<br>
        <img src="files/css-styles-04.jpg" alt="css-styles-04"><br>
        Notice the use of more <span class="css-class">:root</span> defined colours.
        </li>
        <li>Style the input fields and theier associated labels:<br>
        <img src="files/css-styles-05.jpg" alt="css-styles-05">
        </li>
        <li>Style the submit button:<br>
        <img src="files/css-styles-06.jpg" alt="css-styles-06">
        </li>
        <li>Style the anchpr elements of the form:<br>
        <img src="files/css-styles-07.jpg" alt="css-styles-07">
        </li>
    </ol>
6.	Refresh your browser and make the width wider to see something like:<br>
![forms-04.jpg](files/forms-04.jpg)<br>**Question**: What is next?
7.	Add the following media queries to your **styles.css** and refresh your browser after each is added to see the effects:<br>
    <ol type="a">
        <li>Add the following media query to affect the flex container:<br>
        <img src="files/css-styles-08.jpg" alt="css-styles-08"><br>
        <img src="files/forms-05.jpg" alt="forms-05"><br>
        <b>Question</b>: What are the changes?
        </li>
        <li>Add the following media query to affect form in the section:<br>
        <img src="files/css-styles-09.jpg" alt="css-styles-09"><br>
        <img src="files/forms-06.jpg" alt="forms-06"><br>
        <b>Question</b>: What are the changes?
        </li>
        <li>Add a media query for the max width:<br>
        <img src="files/css-styles-10.jpg" alt="css-styles-10"><br>
        <img src="files/forms-07.jpg" alt="forms-07"><br>
        <b>Question</b>: What are the changes?
        </li>
    </ol>
8.	You should now experiment with different browser widths to see the full effect of the styling and media queries.

#### [Module Home](../)
#### [DMIT1530 Home](../../)
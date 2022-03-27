---
layout: page
title: Styling HTML Forms
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
* [demo-form-styling.zip](files/demo-form-styling.zip)

## Introduction
This lesson builds on the form concepts taught in [COMP1017](../../../comp1017/module3/24-styling-forms/styling-forms.md){:target="_blank"}.

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps
1.	Download the **demo-form-styling.zip** file and extract its contents to a folder named **demo-form-styling**.
2.	The output of this lesson should look like:<br>
![style-forms-01.jpg](files/style-forms-01.jpg)
3.	The first steps are to build the web page and add the form elements. Open your **index.html** file and add the following code:
    <ol type="a">
        <li>Create the starting web page:<br>
        <img src="files/index-01.jpg" alt="index-01">
        </li>
        <li>Add the <span class="html-class">&lt;header&gt;</span> block complete with a navigation menu:<br>
        <img src="files/index-02.jpg" alt="index-02">
        </li>
        <li>Add a search form after the closing div and before the closing header:<br>
        <img src="files/index-03.jpg" alt="index-03">
        </li>
        <li>Add a <span class="html-class">&lt;section&gt;</span> inside the main <span class="html-class">&lt;form&gt;</span> block:<br>
        <img src="files/index-04.jpg" alt="index-04">
        </li>
    </ol>
4.	Refresh your browser to see:<br>
![style-forms-02.jpg](files/style-forms-02.jpg)<br>**Question**: What are the next steps?
5.	You will need to add the **reset.css** file and create a **styles.css** file to your **css** folder.
6.	Modify your styles.css file by adding the following rules:<br>
    <ol type="a">
        <li>Add the <span class="css-class">:root</span> style rule:<br>
        <img src="files/css-styles-01.jpg" alt="css-styles-01">
        </li>
        <li>Add some basic styling:<br>
        <img src="files/css-styles-02.jpg" alt="css-styles-02">
        </li>
        <li>Style the <span class="css-class">.header-top</span> class:<br>
        <img src="files/css-styles-03.jpg" alt="css-styles-03">
        </li>
        <li>Style the <span class="css-class">.sr-only</span> class:<br>
        <img src="files/css-styles-04.jpg" alt="css-styles-04">
        </li>
        <li>Style the submit buttons for uppercase letters and rounded corners:<br>
        <img src="files/css-styles-05.jpg" alt="css-styles-05">
        </li>
        <li>Style the search form:<br>
        <img src="files/css-styles-06.jpg" alt="css-styles-06">
        </li>
        <li>Add some padding to the <span class="html-class">&lt;section&gt;</span>:<br>
        <img src="files/css-styles-07.jpg" alt="css-styles-07">
        </li>
    </ol>
7.	Refresh your browser to see something like:<br>
![style-forms-03.jpg](files/style-forms-03.jpg)<br>**Question**: What needs to be done now?
8.	It is time to start styling the login form. Add the following style rules:<br>
    <ol type="a">
        <li>Add the <span class="css-class">.login-form</span> class rule:<br>
        <img src="files/css-styles-08.jpg" alt="css-styles-08">
        </li>
        <li>Style the labels:<br>
        <img src="files/css-styles-09.jpg" alt="css-styles-09">
        </li>
        <li>Style the div elements:<br>
        <img src="files/css-styles-10.jpg" alt="css-styles-10">
        </li>
        <li>Style the input fields:<br>
        <img src="files/css-styles-11.jpg" alt="css-styles-11">
        </li>
    </ol>
9.	Refresh your browser to see something like:<br>
![style-forms-04.jpg](files/style-forms-04.jpg)<br>**Question**: What are the next steps?
10.	Add more style rules to your styles.css file:<br>
    <ol type="a">
        <li>Style the submit buttons and add a hover effect:<br>
        <img src="files/css-styles-12.jpg" alt="css-styles-12">
        </li>
        <li>Add <span class="css-class">:focus</span> style rule:<br>
        <img src="files/css-styles-13.jpg" alt="css-styles-13"><br>
        <img src="files/css-styles-14.jpg" alt="css-styles-14"><br>
        <b>Reference</b>: <a href="https://developer.mozilla.org/en-US/docs/Web/CSS/:focus" target="_blank">https://developer.mozilla.org/en-US/docs/Web/CSS/:focus</a>
        </li>
        <li>Add some <em>error checking</em> to the input fields:<br>
        <img src="files/css-styles-15.jpg" alt="css-styles-15">
        </li>
    </ol>
11.	Refresh your browser and try the form:<br>
    <ol type="a">
        <li>Hover over an input field:<br>
        <img src="files/style-forms-05.jpg" alt="stlye-forms-05">
        </li>
        <li>No data entered:<br>
        <img src="files/style-forms-06.jpg" alt="stlye-forms-06">
        </li>
        <li>Form fields filled out:<br>
        <img src="files/style-forms-07.jpg" alt="stlye-forms-07">
        </li>
    </ol>

#### [Module Home](../)
#### [DMIT1530 Home](../../)
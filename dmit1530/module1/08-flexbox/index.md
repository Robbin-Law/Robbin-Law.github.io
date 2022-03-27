---
layout: page
title: Flexbox Layouts (2)
---
<style>
    .css-class{
        color: firebrick;
        font-weight: bold;
    }
</style>

The following file is required for this lesson:
* [demo-flex-flow.zip](files/demo-flex-flow.zip)

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps
1.	Download the **demo-flex-flow.zip** file from Moodle and extract its contents to a folder named **demo-flex-flow**.
2.	The first goal of this demo should look like:<br>
![flex-flow-01.jpg](files/flex-flow-01.jpg)
3.	Open **index.html** in your browser to see something like:<br>
![flex-flow-02.jpg](files/flex-flow-02.jpg)<br>
**Question**: What do you think you need to do to achieve the desired output?
4.	Add the following style rules to your **styles.css** file:<br>
    <ol type="a">
        <li>Add a <span class="css-class">.flex-container</span> class:<br>
        <img src="files/css-styles-01.jpg" alt="css-styles-01">
        </li>
        <li>Modify the following code in your <b>index.html</b>:<br>
        <img src="files/index-01.jpg" alt="index-01"><br>
        <img src="files/flex-flow-01.jpg" alt="flex-flow-01">
        </li>
    </ol>
5.	There are other properties of flexbox that you can set. First you will look at `flex-direction`. Do each of the following and examine the output:<br>
    <ol type="a">
        <li><span class="css-class">flow</span>:<br>
        <img src="files/css-styles-02.jpg" alt="css-styles-02"><br>
        The output should not have changed.
        </li>
        <li><span class="css-class">flow-reverse</span>:<br>
        <img src="files/flex-flow-03.jpg" alt="flex-flow-03">
        </li>
        <li><span class="css-class">column</span>:<br>
        <img src="files/flex-flow-02.jpg" alt="flex-flow-02">
        </li>
        <li><span class="css-class">column-reverse</span>:<br>
        <img src="files/flex-flow-04.jpg" alt="flex-flow-04">
        </li>
    </ol>
6.	Now you can examine the `flex-wrap` property. First set the `flex-flow` to `row`, then do each of the following:<br>
    <ol type="a">
        <li><span class="css-class">nowrap</span>:<br>
        <img src="files/css-styles-03.jpg" alt="css-styles-03"><br>
        The output should be the same as shown in step 4b, or if you make your browser window narrower:<br>
        <img src="files/flex-flow-05.jpg" alt="flex-flow-05">
        </li>
        <li><span class="css-class">wrap</span>:<br>
        <img src="files/flex-flow-06.jpg" alt="flex-flow-06">
        </li>
        <li><span class="css-class">wrap-reverse</span>:<br>
        <img src="files/flex-flow-07.jpg" alt="flex-flow-07">
        </li>
    </ol>
7.	Finally, you can combine `flex-direction` and `flex-wrap` as `flex-flow`. First comment out all the style rules after `display: flex;` and do each of the following and examine the output.<br>
    <ol type="a">
        <li>Default setting (<span class="css-class">flex-flow: row nowrap</span>):<br>
        <img src="files/css-styles-04.jpg" alt="css-styles-04">
        </li>
        <li><span class="css-class">flex-flow: row-reverse wrap</span>:<br>
        <img src="files/flex-flow-08.jpg" alt="flex-flow-08">
        </li>
        <li><span class="css-class">flex-flow: column-reverse wrap-reverse</span>:<br>
        <img src="files/flex-flow-09.jpg" alt="flex-flow-09"><br>
        There are other combinations which you can explore.
        </li>
    </ol>

### Resources
* [Flexbox Resoources](files/flexbox-resources.zip)

#### [Module Home](../)
#### [DMIT1530 Home](../../)
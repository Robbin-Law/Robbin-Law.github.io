---
Layout: page
Title: Advanced CSS Selectors & Flex Order
---

<style>
    .shadow{
        text-shadow: 1px 1px;
    }
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
* [demo-selectors.zip](files/demo-selectors.zip)
* [demo-flex-order.zip](files/demo-flex-order.zip)
<!--* [demo-flexbox-layout.zip](files/demo-flexbox-layout.zip)-->

## Introduction
This lesson will be taught in tw0 parts:
* [Part 1: CSS Selectors](#selectors)
* [Part 2: Flex Order](#order)
<!--* [Part 3: Flexbox Layout](#layout)-->

## Demo Instructions
You can follow along with your instructor to complete this build and/or you can use this document as a guide in completing the demo build.

## Steps - <a ID="selectors">Part 1</a>: CSS Selectors
1.	Download the demo-selectors.zip file and extract its contents to a folder named demo-selectors.
2.	The completed output should look like:<br>
![selectors-01.jpg](files/selectors-01.jpg)
3.	You need to add some code to the **index.html** file:<br>
    <ol type="a">
        <li>Add a flex container:<br>
        <img src="files/selectors-index-01.jpg" alt="selectors-index-01">
        </li>
        <li>Add <span class="html-class">&lt;section&gt;</span> blocks inside the flex container:<br>
        <img src="files/selectors-index-02.jpg" alt="selectors-index-02">
        </li>
        <li>Add a <span class="html-class">&lt;footer&gt;</span>:<br>
        <img src="files/selectors-index-03.jpg" alt="selectors-index-03"><br>
        The output in your browser should look like:<br>
        <img src="files/selectors-02.jpg" alt="selectors-02">
        </li>
    </ol>
4.	Now you need to add style rules to the **styles.css** file:<br>
    <ol type="a">
        <li>Add a <span class="css-class">.flex-container</span> class:<br>
        <img src="files/selectors-css-styles-01.jpg" alt="selectors-css-styles-01"><br>
        <b>Question</b>: What does this style rule do?
        </li>
        <li>Add styling for the <span class="html-class">&lt;section&gt;</span> elements:<br>
        <img src="files/selectors-css-styles-02.jpg" alt="selectors-css-styles-02"><br>
        <img src="files/selectors-03.jpg" alt="selectors-03">
        </li>
        <li>As the individual <span class="html-class">&lt;section&gt;</span> blocks do not appear, you need to use a pseudo-selector to target the styling of each <span class="html-class">&lt;section&gt;</span>:
            <ol type="i">
                <li><span class="css-class">first-child</span>:<br>
                <img src="files/selectors-css-styles-03.jpg" alt="selectors-css-styles-03">
                </li>
                <li><span class="css-class">last-child</span>:<br>
                <img src="files/selectors-css-styles-04.jpg" alt="selectors-css-styles-04">
                </li>
                <li><span class="css-class">>nth-child(2)</span>:<br>
                <img src="files/selectors-css-styles-05.jpg" alt="selectors-css-styles-05">
                </li>
                <li><span class="css-class">nth-child(3)</span>:<br>
                <img src="files/selectors-css-styles-06.jpg" alt="selectors-css-styles-06"><br>
                Refresh your browser to see:<br>
                <img src="files/selectors-04.jpg" alt="selectors-04">
                </li>
                <li><span class="css-class">nth-last-child(3)</span>:<br>
                <img src="files/selectors-css-styles-07.jpg" alt="selectors-css-styles-07">
                </li>
                <li><span class="css-class">nth-last-child(2)</span>:<br>
                <img src="files/selectors-css-styles-08.jpg" alt="selectors-css-styles-08"><br>
                Refresh your browser to see the following making note of the colours you used for each <span class="html-class">&lt;section&gt;</span>’s background:<br>
                <img src="files/selectors-05.jpg" alt="selectors-05">
                </li>
            </ol>
        </li>
        <li>The <span class="html-class">&lt;footer&gt;</span> needs to have a different background colour:<br>
        <img src="files/selectors-css-styles-09.jpg" alt="selectors-css-styles-09"><br>
        <img src="files/selectors-06.jpg" alt="selectors-06">
        </li>
        <li>The nth of type selector can be used to target the position of a child element. Each <span class="html-class">&lt;section&gt;</span> has two <span class="html-class">&lt;p&gt;</span> elements, thus you can target each of these using:<br>
        <img src="files/selectors-css-styles-10.jpg" alt="selectors-css-styles-10"><br>
        <img src="files/selectors-07.jpg" alt="selectors-07"><br>
        Note: the font of the 1<sup>st</sup> paragraph is now <b>bolded</b> and has a slight text <span class="shadow">shadow</span>:
        </li>
        <li>Targeting the other paragraphs is done using:<br>
        <img src="files/selectors-css-styles-11.jpg" alt="selectors-css-styles-11"><br>
        <img src="files/selectors-01.jpg" alt="selectors-01">
        </li>
    </ol>

## Steps - <a ID="order">Part 2</a>: Flex Order
1.	Download the **demo-flex-order.zip** file and extract its contents to a folder named demo-flex-order.
2.	Open the index.html in your browser to see something like:<br>
![order-01.jpg](files/order-01.jpg)
3.	The completed output should look like:<br>
![order-02.jpg](files/order-02.jpg)<br>
**Question**: What do you think we need to do to achieve the completed output?
4.	Examine the **styles.css** file and make note of the two changes that need to be made.<br>
    <ol type="a">
        <li>Add a media query to change the layout and order of the items:<br>
            <ol type="i">
                <li>Add the media query:<br>
                <img src="files/order-css-styles-01.jpg" alt="order-css-styles-01">
                </li>
                <li>Change to a 3-column layout and space the <span class="html-class">&lt;section&gt;</span> elements equally:<br>
                <img src="files/order-css-styles-02.jpg" alt="order-css-styles-02">
                </li>
                <li>Change the order of the items in the layout:<br>
                <img src="files/order-css-styles-03.jpg" alt="order-css-styles-03"><br>
                <img src="files/order-03.jpg" alt="order-03">
                </li>
            </ol>
        </li>
        <li>Position items in the order of 6, 4, 2, 5, 3, 1. In your media query set the order of the other items:<br>
            <ol type="i">
                <li>4<sup>th</sup> child:<br>
                <img src="files/order-css-styles-04.jpg" alt="order-css-styles-04">
                </li>
                <li>2<sup>nd</sup> child:<br>
                <img src="files/order-css-styles-05.jpg" alt="order-css-styles-05">
                </li>
                <li>5<sup>th</sup> child:<br>
                <img src="files/order-css-styles-06.jpg" alt="order-css-styles-06">
                </li>
                <li>3<sup>rd</sup> child:<br>
                <img src="files/order-css-styles-07.jpg" alt="order-css-styles-07">
                </li>
                <li>1<sup>st</sup> child:<br>
                <img src="files/order-css-styles-08.jpg" alt="order-css-styles-08">
                <br><img src="files/order-02.jpg" alt="order-02">
                </li>
            </ol>
        </li>
    </ol>
5.	Now you need to test the media query to see what is happening to the output:<br>
    <ol type="a">
        <li>Width < 950px:<br>
        <img src="files/order-04.jpg" alt="order-04">
        </li>
        <li>Width >= 950px:<br>
        <img src="files/order-05.jpg" alt="order-05">
        </li>
    </ol>

## Activity
For extra practice, open the [**css-selectors-activity.pdf**](files/css-selectors-activity.pdf){:target="_blank"} file and complete the activity.

#### [Module Home](../)
#### [DMIT1530 Home](../../)

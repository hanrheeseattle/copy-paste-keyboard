# copy-paste-keyboard
![Finshed](build-images/complete.jpg)


## Background
Many people joke that there's a library for everything and no new code needs to be developed. You can just copy and paste code snippets to write your application.

One of my colleagues posted an image of a "software engineer's keyboard" (only having the ctrl, c, and v keys) of one in the team Slack channels and I knew I needed to make one.

## Motivation
This project was created to participate in [Vetco.net's maker contest](https://vetco.net/blog/contest-show-us-what-you-ve-used-our-parts-to-build-500-in-prizes/2021-08-20-11-08-51-0700)

## Overview
This is a proper maker project and involves a bit of mechanics, electronics and software.

Mechanics: 
* 3d printed buttons and case

Electronics: (all available from vetco.net)
* Arduino Pro Micro 
* Protoboard
* 10k resistors
* momentar push button switches

Software:
* Simple code for the Arduino Pro Micro

## Repo contents
* arduino - code for Arduino Pro Micro
* circuit - bitmap image of protoboard layout when viewed from the top
* stl_file - raw stl files. gcode for PLA parts printed on a Prusa 3i

## Build notes
* I cut the post on the momentary switch off with a dremel
* I cut a protoboard to be 6 x 20 holes
* Initially I used a 1x3 pin headers to attach the protoboard to the Arduino but found it was nearly impossible to separate them so I used 3 short wires
* Pics from build in the ./build-images directory

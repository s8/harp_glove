# harp_glove


### Getting digispark to work:

from https://digistump.com/board/index.php/topic,3198.msg14379.html#msg14379

The newest 1.8.10 has all the parts that are required inside.  One simply needs to trick the Digistump config to use what is included, instead of its own old, out of date, no longer supported snowflake of the AVR tools.

I found this easy enough by simply linking the current shipping 64bit version, into the Digistump tree.

First, make sure your board includes are all setup properly. Next, shutdown the Arduino IDE completely.  Finally, from a shell prompt, you are gonna move the Digistump snowflake out of the way, and link in the current shipping version:

```
$ cd ~/Library/Arduino15/packages/arduino/tools/avr-gcc
$ mv 4.8.1-arduino5 orig.4.8.1
$ ln -s /Applications/Arduino.app/Contents/Java/hardware/tools/avr 4.8.1-arduino5
```
You could just delete the old stuff I suppose.  But that should cover it for you.  Fire up Arduino IDE as normal and get back to work :)

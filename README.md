# DynamicMenuSystem
DynamicMenuSystem is a simple C++ library meant to allow for easy console menu creations such as this one.
![show](https://github.com/Ruski1/Guess-The-Word/blob/main/Images-And-Plans/Guess%20the%20Word%204/image1.gif) <br />

It is currently in the starting phase and its a small project that I'm making just to expand my C++ knowledge and to also use in other projects that are made in console.

## How it works
The way it works is suprisingly simple, the library has a object called "MenuEntry" which has 2 variables which are entry name (display name shown in the menu) and Function (the function ran when enter is pressed, has to be void as I couldn't find how to allow for any functions). The object instance (the object made with the 2 variables "set") gets added to array which a foreach loop displays the name in list order.

When enter is pressed, an interator is used to advance to the currently picked entry and run the function. once the function is finished, the program goes back to the menu.

## Backstory
This "system" did originaly come from my other [project meant for school](https://github.com/Ruski1/Guess-The-Word). I got the idea to make it something that can be easily integrated into other projects when I was (and still am) working on [SWT](https://github.com/Ruski1/SideWorkTool) as I wanted to add a menu there. I realised that the menu I created in the previous project was pretty good and why rewrite it 20 times when I can just make into a library and easily intergrate it.

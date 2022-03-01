# DynamicMenuSystem
DynamicMenuSystem is a simple C++ library meant to allow for easy console menu creations such as this one.
![show](https://github.com/Ruski1/Guess-The-Word/blob/main/Images-And-Plans/Guess%20the%20Word%204/image1.gif) <br />

It is currently in the starting phase and its a small project that I'm making just to expand my C++ knowledge and to also use in other projects that are made in console.

## How it works
The way it works is suprisingly simple, the library has a object called "MenuEntry" which has 2 variables which are entry name (display name shown in the menu) and Function (the function ran when enter is pressed, has to be void as I couldn't find how to allow for any functions). The object instance (the object made with the 2 variables "set") gets added to array which a foreach loop displays the name in list order.

When enter is pressed, an interator is used to advance to the currently picked entry and run the function. once the function is finished, the program goes back to the menu.

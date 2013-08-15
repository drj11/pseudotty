# pseudotty

Use it like this:

    (slave=$(pseudotty)
     ...
    ) < /dev/ptmx

it outputs the name of the slave terminal that corresponds to
the master terminal on its stdout.

# Installation

no idea, but you can compile it with:

    make


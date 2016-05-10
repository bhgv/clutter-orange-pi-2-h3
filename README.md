# clutter-orange-pi-2-h3

this is the source of clutter ([master branch from here](https://github.com/GNOME/clutter), from 28.04.16) a little changed to build on Orange Pi 2 (pc, + and other). Allwinner H3, Mali-400, Lubuntu vivid (jaser-2). it works for me

to build:
```
$ ./my-confgure.sh
$ make
$ sudo make install
```


Clutter
=======

What is Clutter?
----------------

Clutter is an open source software library for creating fast, compelling,
portable, and dynamic graphical user interfaces.

Requirements
------------

Clutter currently requires:

* [GLib](http://git.gnome.org/browse/glib)
* [JSON-GLib](http://git.gnome.org/browse/json-glib)
* [Atk](http://git.gnome.org/browse/atk)
* [Cairo](http://cairographics.org)
* [Pango](http://git.gnome.org/browse/pango)
* [Cogl](http://git.gnome.org/browse/cogl)

On X11, Clutter depends on the following extensions:

* XComposite
* XDamage
* XExt
* XInput 2.x
* XKB

If you are building the API reference you will also need:

* [GTK-Doc](http://git.gnome.org/browse/gtk-doc)

If you are building the additional documentation you will also need:

* xsltproc
* jw (optional, for generating PDFs)

If you are building the Introspection data you will also need:

* [GObject-Introspection](http://git.gnome.org/browse/gobject-introspection)

Resources
---------

The official Clutter website is:

        http://www.clutter-project.org/

The API references for the latest stable release are available at:

        https://developer.gnome.org/clutter/stable/

The Clutter Cookbook is available at:

        https://developer.gnome.org/clutter-cookbook/

New releases of Clutter are available at:

        https://download.gnome.org/sources/clutter/

To subscribe to the Clutter mailing lists and read the archives, use the
Mailman web interface available at:

        https://mail.gnome.org/mailman/listinfo/clutter-list

New bug page on Bugzilla:

        https://bugzilla.gnome.org/enter_bug.cgi?product=clutter

Clutter is licensed under the terms of the GNU Lesser General Public
License, version 2.1 or (at your option) later: see the `COPYING` file
for more information.

Building and Installation
-------------------------

To build Clutter from a release tarball, the usual autotool triad should
be followed:

1. ./configure
2. make
3. make install

To build Clutter from a Git clone, run the `autogen.sh` script instead
of the configure one. The `autogen.sh` script will run the configure script
for you, unless the `NOCONFIGURE` environment variable is set to a non-empty
value.

See also the [BuildingClutter][building-clutter] page on the wiki.

Versioning
----------

Clutter uses the common "Linux kernel" versioning system, where
even-numbered minor versions are stable and odd-numbered minor
versions are development snapshots.

Different major versions break both API and ABI but are parallel
installable. The same major version with differing minor version is
expected to be ABI compatible with other minor versions; differing
micro versions are meant just for bug fixing. On odd minor versions
the newly added API might still change.

The micro version indicates the origin of the release: even micro
numbers are only used for released archives; odd micro numbers are
only used on the Git repository.

Contributing
------------

If you want to hack on and improve Clutter check the `HACKING` file for
general implementation guidelines, and the `HACKING.backends` for
backend-specific implementation issues.

The `CODING_STYLE` file contains the rules for writing code conformant to
the style guidelines used throughout Clutter. Remember: the coding style
is mandatory; patches not conforming to it will be rejected by default.

The usual workflow for contributions should be:

1. Fork the repository
2. Create a branch (`git checkout -b my_work`)
3. Commit your changes (`git commit -am "Added my awesome feature"`)
4. Push to the branch (`git push origin my_work`)
5. Create an [Bug][bugzilla-clutter] with a link to your branch
6. Sit back, relax and wait for feedback and eventual merge

Bugs
----

Bugs should be reported to the Clutter Bugzilla at:

        https://bugzilla.gnome.org/enter_bug.cgi?product=clutter

You will need a Bugzilla account.

In the report you should include:

* what system you're running Clutter on;
* which version of Clutter you are using;
* which version of GLib and OpenGL (or OpenGL ES) you are using;
* which video card and which drivers you are using, including output of
  glxinfo and xdpyinfo (if applicable);
* how to reproduce the bug.

If you cannot reproduce the bug with one of the tests that come with Clutter
source code, you should include a small test case displaying the bad
behaviour.

If the bug exposes a crash, the exact text printed out and a stack trace
obtained using gdb are greatly appreciated.

[building-clutter]: https://wiki.gnome.org/Projects/Clutter/Building
[bugzilla-clutter]: https://bugzilla.gnome.org/enter_bug.cgi?product=clutter

#!/bin/sh

./autogen.sh --enable-egl-backend=yes --enable-evdev-input=yes --enable-x11-backend=yes \
--enable-quartz-backend=no --disable-quartz-backend \
--enable-osx=no \
--enable-maintainer-flags=no --enable-introspection=yes  \
--enable-cogl2 \
--with-gles=2.0 \
--enable-gdk-backend=no \
--enable-wayland-backend=no \
--with-default-drivers=gles2 \
--with-flavour=eglnative \


#--with-flavour=eglx \
#--with-default-drivers=eglnative \

LIB := "gmp-6.2.0"

extract:
  #!/usr/bin/env bash
  if [[ ! -d {{LIB}} ]]; then
    tar xf {{LIB}}.tar.lz
    cd {{LIB}}
    emconfigure ./configure --enable-cxx --host=none 
  fi

build: build-gmp
  emcc hello.c {{LIB}}/.libs/libgmp.a -I {{LIB}}

build-gmp:
  cd {{LIB}} && make

test:
  node a.out.js 999988

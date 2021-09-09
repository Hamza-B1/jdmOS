Build an image for our build-environment:
 - `docker build buildenv -t myos-buildenv`

## Build

Enter build environment:
 - Linux or MacOS: `docker run --rm -it -v "$(pwd)":/root/env myos-buildenv`

 `sudo service docker start`

 `sudo docker build env -t myos-buildenv`
 `docker run --rm -it -v "$()":/root/env myos-buildenv`
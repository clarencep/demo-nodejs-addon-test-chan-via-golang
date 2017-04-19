# About This Project

[![](https://travis-ci.org/clarencep/demo-nodejs-addon-test-chan-via-golang.svg?branch=master)](https://travis-ci.org/clarencep/demo-nodejs-addon-test-chan-via-golang)

This is a demo project for developing nodejs addon via [go](http://golang.org).

This project tests `chan` in golang in nodejs addon.

# Install

```
docker pull clarencep/demo-nodejs-addon-test-chan-via-golang
```

# Run

```
docker run -it --rm clarencep/demo-nodejs-addon-test-chan-via-golang node /usr/src/node-addon-test-chan/test.js
```

The test result will be like this:

```text
module be to run...
worker 4 got 5577006791947779410
worker 4 got 8674665223082153551
worker 1 got 6129484611666145821
worker 0 got 4037200794235010051
worker 2 got 8267293389953062911
worker 3 got 2970700287221458280
worker 4 got 6651414131918424343
worker 1 got 5944830206637008055
worker 0 got 788787457839692041
...
worker 2 got 6175742077372812453
worker 3 got 5743654948930018631
worker 4 got 3409814636252858217
worker 1 got 2184302455902443631
worker 0 got 4937104021912138218
worker 2 got 1727040455672546632
worker 3 got 2202916659517317514
worker 4 got 5793183108815074904
worker 1 got 1169089424364679180
worker 0 got 2594813965004488500
worker 2 got 3784560248718450071
module run finished.
```
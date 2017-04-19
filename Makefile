build/Release/node-module.node: module.a module.h node-module.cc
	node-gyp configure
	node-gyp build

build: build/Release/node-module.node


module.a: module.go
	go build -buildmode c-archive -o module.a module.go


clean:
	rm -rf ./build module.h module.a

rebuild: clean build

test:
	node test.js && echo OK.


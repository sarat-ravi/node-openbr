.PHONY : all
all: build test

.PHONY : build
build:
	npm build .

.PHONY : test
test:
	cd examples; ./basic_example.js

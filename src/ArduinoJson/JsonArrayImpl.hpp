// Copyright Benoit Blanchon 2014-2017
// MIT License
//
// Arduino JSON library
// https://bblanchon.github.io/ArduinoJson/
// If you like this project, please add a star!

#pragma once

#include "JsonArray.hpp"
#include "JsonArraySubscript.hpp"
#include "JsonObject.hpp"

namespace ArduinoJson {

inline JsonArray &JsonArray::createNestedArray() {
  if (!_buffer) return JsonArray::invalid();
  JsonArray &array = _buffer->createArray();
  add(array);
  return array;
}

inline JsonArray &JsonArray::createNestedArray(size_t index) {
  if (!_buffer) return JsonArray::invalid();
  JsonArray &array = _buffer->createArray();
  set(index, array);
  return array;
}

inline JsonObject &JsonArray::createNestedObject() {
  if (!_buffer) return JsonObject::invalid();
  JsonObject &object = _buffer->createObject();
  add(object);
  return object;
}

inline JsonObject &JsonArray::createNestedObject(size_t index) {
  if (!_buffer) return JsonObject::invalid();
  JsonObject &object = _buffer->createObject();
  set(index, object);
  return object;
}
}

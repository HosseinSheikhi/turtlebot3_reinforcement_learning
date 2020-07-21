// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlebot3_msgs:srv/Goal.idl
// generated code does not contain a copyright notice
#include "turtlebot3_msgs/srv/goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
turtlebot3_msgs__srv__Goal_Request__init(turtlebot3_msgs__srv__Goal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
turtlebot3_msgs__srv__Goal_Request__fini(turtlebot3_msgs__srv__Goal_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

turtlebot3_msgs__srv__Goal_Request *
turtlebot3_msgs__srv__Goal_Request__create()
{
  turtlebot3_msgs__srv__Goal_Request * msg = (turtlebot3_msgs__srv__Goal_Request *)malloc(sizeof(turtlebot3_msgs__srv__Goal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlebot3_msgs__srv__Goal_Request));
  bool success = turtlebot3_msgs__srv__Goal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlebot3_msgs__srv__Goal_Request__destroy(turtlebot3_msgs__srv__Goal_Request * msg)
{
  if (msg) {
    turtlebot3_msgs__srv__Goal_Request__fini(msg);
  }
  free(msg);
}


bool
turtlebot3_msgs__srv__Goal_Request__Sequence__init(turtlebot3_msgs__srv__Goal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlebot3_msgs__srv__Goal_Request * data = NULL;
  if (size) {
    data = (turtlebot3_msgs__srv__Goal_Request *)calloc(size, sizeof(turtlebot3_msgs__srv__Goal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlebot3_msgs__srv__Goal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlebot3_msgs__srv__Goal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlebot3_msgs__srv__Goal_Request__Sequence__fini(turtlebot3_msgs__srv__Goal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlebot3_msgs__srv__Goal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlebot3_msgs__srv__Goal_Request__Sequence *
turtlebot3_msgs__srv__Goal_Request__Sequence__create(size_t size)
{
  turtlebot3_msgs__srv__Goal_Request__Sequence * array = (turtlebot3_msgs__srv__Goal_Request__Sequence *)malloc(sizeof(turtlebot3_msgs__srv__Goal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlebot3_msgs__srv__Goal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlebot3_msgs__srv__Goal_Request__Sequence__destroy(turtlebot3_msgs__srv__Goal_Request__Sequence * array)
{
  if (array) {
    turtlebot3_msgs__srv__Goal_Request__Sequence__fini(array);
  }
  free(array);
}


bool
turtlebot3_msgs__srv__Goal_Response__init(turtlebot3_msgs__srv__Goal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // pose_x
  // pose_y
  // success
  return true;
}

void
turtlebot3_msgs__srv__Goal_Response__fini(turtlebot3_msgs__srv__Goal_Response * msg)
{
  if (!msg) {
    return;
  }
  // pose_x
  // pose_y
  // success
}

turtlebot3_msgs__srv__Goal_Response *
turtlebot3_msgs__srv__Goal_Response__create()
{
  turtlebot3_msgs__srv__Goal_Response * msg = (turtlebot3_msgs__srv__Goal_Response *)malloc(sizeof(turtlebot3_msgs__srv__Goal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlebot3_msgs__srv__Goal_Response));
  bool success = turtlebot3_msgs__srv__Goal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlebot3_msgs__srv__Goal_Response__destroy(turtlebot3_msgs__srv__Goal_Response * msg)
{
  if (msg) {
    turtlebot3_msgs__srv__Goal_Response__fini(msg);
  }
  free(msg);
}


bool
turtlebot3_msgs__srv__Goal_Response__Sequence__init(turtlebot3_msgs__srv__Goal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlebot3_msgs__srv__Goal_Response * data = NULL;
  if (size) {
    data = (turtlebot3_msgs__srv__Goal_Response *)calloc(size, sizeof(turtlebot3_msgs__srv__Goal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlebot3_msgs__srv__Goal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlebot3_msgs__srv__Goal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlebot3_msgs__srv__Goal_Response__Sequence__fini(turtlebot3_msgs__srv__Goal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlebot3_msgs__srv__Goal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlebot3_msgs__srv__Goal_Response__Sequence *
turtlebot3_msgs__srv__Goal_Response__Sequence__create(size_t size)
{
  turtlebot3_msgs__srv__Goal_Response__Sequence * array = (turtlebot3_msgs__srv__Goal_Response__Sequence *)malloc(sizeof(turtlebot3_msgs__srv__Goal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlebot3_msgs__srv__Goal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlebot3_msgs__srv__Goal_Response__Sequence__destroy(turtlebot3_msgs__srv__Goal_Response__Sequence * array)
{
  if (array) {
    turtlebot3_msgs__srv__Goal_Response__Sequence__fini(array);
  }
  free(array);
}

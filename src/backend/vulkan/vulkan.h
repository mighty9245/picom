#pragma once

#include "backend/backend.h"

static image_handle vk_back_buffer(backend_t *base);

static const struct backend_operations vulkan_ops;

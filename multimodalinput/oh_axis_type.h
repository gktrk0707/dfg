/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @addtogroup input
 * @{
 *
 * @brief Provides the C interface in the multi-modal input domain.
 *
 * @since 12
 */

/**
 * @file oh_axis_type.h
 *
 * @brief Defines the axis event-specific structure and enumerations.
 * @kit InputKit
 * @syscap SystemCapability.MultimodalInput.Input.Core
 * @library liboh_input.so
 * @since 12
 */

#ifndef OH_AXIS_TYPE_H
#define OH_AXIS_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Enumerates axis types.
 *
 * @since 12
 */
typedef enum InputEvent_AxisType {
    /**
     * Indicates an unknown axis type. It is generally used as the initial value.
     *
     * @since 12
     */
    AXIS_TYPE_UNKNOWN,

    /**
     * Indicates the vertical scroll axis. When you scroll the mouse wheel or make certain gestures on the touchpad,
     * the status of the vertical scroll axis changes.
     *
     * @since 12
     */
    AXIS_TYPE_SCROLL_VERTICAL,

    /**
     * Indicates the horizontal scroll axis.
     * When you scroll the mouse wheel or make certain gestures on the touchpad,
     * the status of the horizontal scroll axis changes.
     *
     * @since 12
     */
    AXIS_TYPE_SCROLL_HORIZONTAL,

    /**
     * Indicates the pinch axis, which is used to describe a pinch gesture on the touchscreen or touchpad.
     *
     * @since 12
     */
    AXIS_TYPE_PINCH,

    /**
     * Indicates the rotate axis, which is used to describe a rotate gesture on the touchpad.
     *
     * @since 12
     */
    AXIS_TYPE_ROTATE
} InputEvent_AxisType;

/**
 * @brief Enumerates axis event types.
 *
 * @since 12
 */
typedef enum InputEvent_AxisEventType {
    /**
     * @brief Enumerates two-finger pinch events. The axis value can be AXIS_TYPE_PINCH or AXIS_TYPE_ROTATE.
     *
     * @since 12
     */
    AXIS_EVENT_TYPE_PINCH = 1,
    /**
     * @brief Enumerates scroll axis events.
     * The axis value can be AXIS_TYPE_SCROLL_VERTICAL or AXIS_TYPE_SCROLL_HORIZONTAL.
     * Wherein, the value of AXIS_TYPE_SCROLL_HORIZONTAL is 0 for a mouse wheel event.
     *
     * @since 12
     */
    AXIS_EVENT_TYPE_SCROLL = 2
} InputEvent_AxisEventType;

/**
 * @brief Enumerates axis event actions.
 *
 * @since 12
 */
typedef enum InputEvent_AxisAction {
    /**
     * Cancel action for the axis input event.
     *
     * @since 12
     */
    AXIS_ACTION_CANCEL = 0,
    /**
     * Start action for the axis input event.
     *
     * @since 12
     */
    AXIS_ACTION_BEGIN,
    /**
     * Update action for the axis input event.
     *
     * @since 12
     */
    AXIS_ACTION_UPDATE,
    /**
     * End action for the axis input event.
     *
     * @since 12
     */
    AXIS_ACTION_END,
} InputEvent_AxisAction;
#ifdef __cplusplus
}
#endif
/** @} */
#endif
/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

/* Portions Copyright © Microsoft Corporation. */

#import <Foundation/Foundation.h>

#import <FBControlCore/FBControlCore.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FBControlCoreLogger;

/**
 Loads Frameworks that FBDeviceControl depends on.
 */
@interface FBDeviceControlFrameworkLoader : FBControlCoreFrameworkLoader

#pragma mark Initializers

/**
 The Essential FBDeviceControl Frameworks.
 */
@property (nonatomic, strong, class, readonly) FBDeviceControlFrameworkLoader *essentialFrameworks;

/**
 The Essential FBDeviceControl Frameworks.
 */
@property (nonatomic, strong, class, readonly) FBDeviceControlFrameworkLoader *xcodeFrameworks;

@end

NS_ASSUME_NONNULL_END


// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#import <Foundation/Foundation.h>

@interface CodesignIdentity : NSObject <NSCopying>
+ (CodesignIdentity *)identityForAppBundle:(NSString *)appBundle
                                  deviceId:(NSString *)deviceId;
+ (CodesignIdentity *)adHoc;
+ (CodesignIdentity *)identityForShasumOrName:(NSString *)shasumOrName;
+ (BOOL)isValidCodesignIdentity:(NSString *)shasumOrName;
+ (NSArray<CodesignIdentity *> *)validIOSDeveloperIdentities;
+ (NSString *)codeSignIdentityFromEnvironment;

- (instancetype)initWithShasum:(NSString *)shasum
                          name:(NSString *)name;

- (BOOL)isIOSDeveloperIdentity;
- (id)copyWithZone:(NSZone *)zone;
- (NSString *)shasum;
- (NSString *)name;

@end

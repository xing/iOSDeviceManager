
#import "LaunchSimulatorCommand.h"
#import "Simulator.h"

@implementation LaunchSimulatorCommand
+ (NSString *)name {
    return @"launch_simulator";
}

+ (iOSReturnStatusCode)execute:(NSDictionary *)args {
    return [[Device withID:[self deviceIDFromArgs:args]] launch];
}

+ (NSArray <CommandOption *> *)options {
    static NSMutableArray *options;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        options = [NSMutableArray array];
        [options addObject:[CommandOption withShortFlag:DEVICE_ID_FLAG
                                               longFlag:@"--device-id"
                                             optionName:@"device-identifier"
                                                   info:@"iOS Simulator GUIDs"
                                               required:NO
                                             defaultVal:nil]];
    });
    return options;
}
@end

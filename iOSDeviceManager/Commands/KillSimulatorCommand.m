
#import "Simulator.h"
#import "KillSimulatorCommand.h"

static NSString *const DEVICE_ID_FLAG = @"-d";

@implementation KillSimulatorCommand
+ (NSString *)name {
    return @"kill_simulator";
}

+ (NSArray <CommandOption *> *)options {
    static NSMutableArray *options;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        options = [NSMutableArray array];
        [options addObject:[CommandOption withShortFlag:DEVICE_ID_FLAG
                                               longFlag:@"--device-id"
                                             optionName:@"device_identifier"
                                                   info:@"iOS Simulator GUID or 40-digit physical device ID"
                                               required:YES]];
    });
    return options;
}

+ (iOSReturnStatusCode)execute:(NSDictionary *)args {
    return [Simulator killSimulator:args[DEVICE_ID_FLAG]];
}
@end

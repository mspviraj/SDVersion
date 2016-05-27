//
//  SDiOSVersion.h
//  SDVersion
//
//  Copyright (c) 2016 Sebastian Dobrincu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import <sys/utsname.h>

<<<<<<< HEAD
typedef NS_ENUM(NSInteger, DeviceVersion){
    iPhone4           = 3,
    iPhone4S          = 4,
    iPhone5           = 5,
    iPhone5C          = 6,
    iPhone5S          = 7,
    iPhone6           = 8,
    iPhone6Plus       = 9,
    iPhone6S          = 10,
    iPhone6SPlus      = 11,
    iPhoneSE          = 12,
    
    iPad1             = 13,
    iPad2             = 14,
    iPadMini          = 15,
    iPad3             = 16,
    iPad4             = 17,
    iPadAir           = 18,
    iPadMini2         = 19,
    iPadAir2          = 20,
    iPadMini3         = 21,
    iPadMini4         = 22,
    iPadPro12Dot9Inch = 23,
    iPadPro9Dot7Inch  = 24,
    
    iPodTouch1Gen     = 25,
    iPodTouch2Gen     = 26,
    iPodTouch3Gen     = 27,
    iPodTouch4Gen     = 28,
    iPodTouch5Gen     = 29,
    iPodTouch6Gen     = 30,
    
    Simulator         =  0
};

static NSString *DeviceVersionNames[] = {
    [iPhone4]           = @"iPhone 4",
    [iPhone4S]          = @"iPhone 4S",
    [iPhone5]           = @"iPhone 5",
    [iPhone5C]          = @"iPhone 5C",
    [iPhone5S]          = @"iPhone 5S",
    [iPhone6]           = @"iPhone 6",
    [iPhone6Plus]       = @"iPhone 6 Plus",
    [iPhone6S]          = @"iPhone 6S",
    [iPhone6SPlus]      = @"iPhone 6S Plus",
    [iPhoneSE]          = @"iPhone SE",
    
    [iPad1]             = @"iPad 1",
    [iPad2]             = @"iPad 2",
    [iPadMini]          = @"iPad Mini",
    [iPad3]             = @"iPad 3",
    [iPad4]             = @"iPad 4",
    [iPadAir]           = @"iPad Air",
    [iPadMini2]         = @"iPad Mini 2",
    [iPadAir2]          = @"iPad Air 2",
    [iPadMini3]         = @"iPad Mini 3",
    [iPadMini4]         = @"iPad Mini 4",
    [iPadPro9Dot7Inch]  = @"iPad Pro",
    [iPadPro12Dot9Inch] = @"iPad Pro",
    
    [iPodTouch1Gen]     = @"iPod Touch 1st Gen",
    [iPodTouch2Gen]     = @"iPod Touch 2nd Gen",
    [iPodTouch3Gen]     = @"iPod Touch 3rd Gen",
    [iPodTouch4Gen]     = @"iPod Touch 4th Gen",
    [iPodTouch5Gen]     = @"iPod Touch 5th Gen",
    [iPodTouch6Gen]     = @"iPod Touch 6th Gen",
=======
#define stringFromDeviceVersion(v) [@{@(3):@"iPhone 4", @(4):@"iPhone 4S", @(5):@"iPhone 5", @(6):@"iPhone 5C", @(7):@"iPhone 5S", @(8):@"iPhone 6", @(9): @"iPhone 6 Plus", @(10):@"iPhone 6S", @(11): @"iPhone 6S Plus", @(12): @"iPhone SE", @(13):@"iPad 1", @(14):@"iPad 2", @(15):@"iPad Mini", @(16):@"iPad 3", @(17):@"iPad 4", @(18):@"iPad Air", @(19):@"iPad Mini 2", @(20):@"iPad Air 2", @(21):@"iPad Mini 3", @(22):@"iPad Mini 4", @(23):@"iPad Pro", @(24):@"iPod Touch 1st Gen", @(25):@"iPod Touch 2nd Gen", @(26):@"iPod Touch 3rd Gen", @(27):@"iPod Touch 4th Gen", @(28):@"iPod Touch 5th Gen", @(29):@"iPod Touch 6th Gen", @(0):@"Simulator"} objectForKey:[NSNumber numberWithInteger:v]]
#define stringFromDeviceSize(v) [@{@(0):@"Unknown Size", @(1):@"3.5 inch", @(2):@"4 inch", @(3):@"4.7 inch", @(4):@"5.5 inch"} objectForKey:[NSNumber numberWithInteger:v]]

@interface SDiOSVersion : NSObject

#define iOSVersionEqualTo(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define iOSVersionGreaterThan(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define iOSVersionGreaterThanOrEqualTo(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define iOSVersionLessThan(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define iOSVersionLessThanOrEqualTo(v)        ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

typedef NS_ENUM(NSInteger, DeviceVersion){
    iPhone4       = 3,
    iPhone4S      = 4,
    iPhone5       = 5,
    iPhone5C      = 6,
    iPhone5S      = 7,
    iPhone6       = 8,
    iPhone6Plus   = 9,
    iPhone6S      = 10,
    iPhone6SPlus  = 11,
    iPhoneSE      = 12,
    
    iPad1         = 13,
    iPad2         = 14,
    iPadMini      = 15,
    iPad3         = 16,
    iPad4         = 17,
    iPadAir       = 18,
    iPadMini2     = 19,
    iPadAir2      = 20,
    iPadMini3     = 21,
    iPadMini4     = 22,
    iPadPro       = 23,
    
    iPodTouch1Gen = 24,
    iPodTouch2Gen = 25,
    iPodTouch3Gen = 26,
    iPodTouch4Gen = 27,
    iPodTouch5Gen = 28,
    iPodTouch6Gen = 29,
>>>>>>> 1295b49387afa68ce4df5671e39151d4cc7966fd
    
    [Simulator]         = @"Simulator"
};

typedef NS_ENUM(NSInteger, DeviceSize){
    UnknownSize     = 0,
    Screen3Dot5inch = 1,
    Screen4inch     = 2,
    Screen4Dot7inch = 3,
    Screen5Dot5inch = 4
};

static NSString *DeviceSizeNames[] = {
    [UnknownSize]     = @"Unknown Size",
    [Screen3Dot5inch] = @"3.5 inch",
    [Screen4inch]     = @"4 inch",
    [Screen4Dot7inch] = @"4.7 inch",
    [Screen5Dot5inch] = @"5.5 inch"
};

@interface SDiOSVersion : NSObject

#define iOSVersionEqualTo(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define iOSVersionGreaterThan(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define iOSVersionGreaterThanOrEqualTo(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define iOSVersionLessThan(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define iOSVersionLessThanOrEqualTo(v)        ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

+ (DeviceVersion)deviceVersion;
+ (DeviceSize)resolutionSize;
+ (DeviceSize)deviceSize;
+ (NSString*)deviceName;
+ (BOOL)isZoomed;

@end
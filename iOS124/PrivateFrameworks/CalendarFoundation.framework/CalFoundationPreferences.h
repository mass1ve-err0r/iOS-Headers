//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalPreferences, NSArray, NSString;

@interface CalFoundationPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(readonly, nonatomic) double simulatedDateForNowOffset;
@property(readonly, nonatomic) NSArray *logSimpleConfiguration;
@property(readonly, nonatomic) NSString *logFilePath;
@property(readonly, nonatomic) _Bool logEmitUserNotifications;
@property(readonly, nonatomic) _Bool logAutoFlush;
- (id)init;

@end

